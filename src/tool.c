# include <assert.h>
# include <omp.h>
# include <ompt.h>
# include <stdio.h>
# include <stdatomic.h>

# define TOOL_NAME "DO-NOTHING(OMPT)"

# define REGISTER_CALLBACK_T(name, type)                                                    \
    do {                                                                                    \
        type f_##name = &on_##name;                                                         \
        if (ompt_set_callback(name, (ompt_callback_t)f_##name) == ompt_set_never)           \
            fprintf(stderr, "Could not register callback '" #name "' (ompt_set_never)");    \
    } while(0)
# define REGISTER_CALLBACK(name) REGISTER_CALLBACK_T(name, name##_t)

# include "callback-impl.h"

void
ompt_finalize(ompt_data_t * tool_data)
{
    (void)tool_data;
//    MPCT_DEBUG("Tool finalize");
}

int ompt_initialize(
    ompt_function_lookup_t lookup,
    int initial_device_num,
    ompt_data_t * tool_data)
{
//    MPCT_DEBUG("Tool initialize");
    (void) initial_device_num;
    (void) tool_data;
    ompt_set_callback_t ompt_set_callback = (ompt_set_callback_t) lookup("ompt_set_callback");
    # include "callback-register.h"

    return 1;
}

ompt_start_tool_result_t *
ompt_start_tool(
    unsigned int omp_version,
    const char * runtime_version)
{
    static ompt_start_tool_result_t data = {&ompt_initialize, &ompt_finalize, (ompt_data_t) NULL};
    fprintf(stderr, "%s: OpenMP %d and runtime %s", TOOL_NAME, omp_version, runtime_version);
    return &data;
}
