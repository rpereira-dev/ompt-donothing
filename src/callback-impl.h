# include <omp.h>
# include <omp-tools.h>

void on_ompt_callback_thread_begin(ompt_thread_t thread_type, ompt_data_t *thread_data) {
}

void on_ompt_callback_thread_end(ompt_data_t *thread_data) {
}

void on_ompt_callback_parallel_begin(ompt_data_t *encountering_task_data, const ompt_frame_t *encountering_task_frame, ompt_data_t *parallel_data, unsigned int requested_parallelism, int flags, const void *codeptr_ra) {
}

void on_ompt_callback_parallel_end(ompt_data_t *parallel_data, ompt_data_t *encountering_task_data, int flags, const void *codeptr_ra) {
}

void on_ompt_callback_work(ompt_work_t work_type, ompt_scope_endpoint_t endpoint, ompt_data_t *parallel_data, ompt_data_t *task_data, uint64_t count, const void *codeptr_ra) {
}

void on_ompt_callback_dispatch(ompt_data_t *parallel_data, ompt_data_t *task_data, ompt_dispatch_t kind, ompt_data_t instance) {
}

void on_ompt_callback_task_create(ompt_data_t *encountering_task_data, const ompt_frame_t *encountering_task_frame, ompt_data_t *new_task_data, int flags, int has_dependences, const void *codeptr_ra) {
}

void on_ompt_callback_dependences(ompt_data_t *task_data, const ompt_dependence_t * deps, int ndeps) {
}

void on_ompt_callback_task_dependence(ompt_data_t *src_task_data, ompt_data_t *sink_task_data) {
}

void on_ompt_callback_task_schedule(ompt_data_t *prior_task_data, ompt_task_status_t prior_task_status, ompt_data_t *next_task_data) {
}

void on_ompt_callback_implicit_task(ompt_scope_endpoint_t endpoint, ompt_data_t *parallel_data, ompt_data_t *task_data, unsigned int actual_parallelism, unsigned int index, int flags) {
}

void on_ompt_callback_masked(ompt_scope_endpoint_t endpoint, ompt_data_t *parallel_data, ompt_data_t *task_data, const void *codeptr_ra) {
}

void on_ompt_callback_master(ompt_scope_endpoint_t endpoint, ompt_data_t *parallel_data, ompt_data_t *task_data, const void *codeptr_ra) {
}

void on_ompt_callback_sync_region(ompt_sync_region_t kind, ompt_scope_endpoint_t endpoint, ompt_data_t *parallel_data, ompt_data_t *task_data, const void *codeptr_ra) {
}

void on_ompt_callback_sync_region_wait(ompt_sync_region_t kind, ompt_scope_endpoint_t endpoint, ompt_data_t *parallel_data, ompt_data_t *task_data, const void *codeptr_ra) {
}

void on_ompt_callback_reduction(ompt_sync_region_t kind, ompt_scope_endpoint_t endpoint, ompt_data_t *parallel_data, ompt_data_t *task_data, const void *codeptr_ra) {
}

void on_ompt_callback_mutex_acquire(ompt_mutex_t kind, unsigned int hint, unsigned int impl, ompt_wait_id_t wait_id, const void *codeptr_ra) {
}

void on_ompt_callback_mutex_acquired(ompt_mutex_t kind, ompt_wait_id_t wait_id, const void *codeptr_ra) {
}

void on_ompt_callback_lock_init(ompt_mutex_t kind, unsigned int hint, unsigned int impl, ompt_wait_id_t wait_id, const void *codeptr_ra) {
}

void on_ompt_callback_lock_destroy(ompt_mutex_t kind, ompt_wait_id_t wait_id, const void *codeptr_ra) {
}

void on_ompt_callback_mutex_released(ompt_mutex_t kind, ompt_wait_id_t wait_id, const void *codeptr_ra) {
}

void on_ompt_callback_nest_lock(ompt_scope_endpoint_t endpoint, ompt_wait_id_t wait_id, const void *codeptr_ra) {
}

void on_ompt_callback_flush(ompt_data_t *thread_data, const void *codeptr_ra) {
}

void on_ompt_callback_cancel(ompt_data_t *task_data, int flags, const void *codeptr_ra) {
}

void on_ompt_callback_device_initialize(int device_num, const char *type, ompt_device_t *device, ompt_function_lookup_t lookup, const char *documentation) {
}

void on_ompt_callback_device_finalize(int device_num) {
}

void on_ompt_callback_device_load(int device_num, const char *filename, int64_t offset_in_file, void *vma_in_file, size_t bytes, void *host_addr, void *device_addr, uint64_t module_id) {
}

void on_ompt_callback_device_unload(int device_num, uint64_t module_id) {
}

void on_ompt_callback_target_data_op_emi(ompt_scope_endpoint_t endpoint, ompt_data_t *target_task_data, ompt_data_t *target_data, ompt_id_t *host_op_id, ompt_target_data_op_t optype, void *src_addr, int src_device_num, void *dest_addr, int dest_device_num, size_t bytes, const void *codeptr_ra) {
}

void on_ompt_callback_target_data_op(ompt_id_t target_id, ompt_id_t host_op_id, ompt_target_data_op_t optype, void *src_addr, int src_device_num, void *dest_addr, int dest_device_num, size_t bytes, const void *codeptr_ra) {
}

void on_ompt_callback_target_emi(ompt_target_t kind, ompt_scope_endpoint_t endpoint, int device_num, ompt_data_t *task_data, ompt_data_t *target_task_data, ompt_data_t *target_data, const void *codeptr_ra) {
}

void on_ompt_callback_target(ompt_target_t kind, ompt_scope_endpoint_t endpoint, int device_num, ompt_data_t *task_data, ompt_id_t target_id, const void *codeptr_ra) {
}

void on_ompt_callback_target_map_emi(ompt_data_t *target_data, unsigned int nitems, void **host_addr, void **device_addr, size_t *bytes, unsigned int *mapping_flags, const void *codeptr_ra) {
}

void on_ompt_callback_target_map(ompt_id_t target_id, unsigned int nitems, void **host_addr, void **device_addr, size_t *bytes, unsigned int *mapping_flags, const void *codeptr_ra) {
}

void on_ompt_callback_target_submit_emi(ompt_scope_endpoint_t endpoint, ompt_data_t *target_data, ompt_id_t *host_op_id, unsigned int requested_num_teams) {
}

void on_ompt_callback_target_submit(ompt_id_t target_id, ompt_id_t host_op_id, unsigned int requested_num_teams) {
}

int on_ompt_callback_control_tool(uint64_t command, uint64_t modifier, void *arg, const void *codeptr_ra) {
    return omp_control_tool_success;
}

void on_ompt_callback_error(ompt_severity_t severity, const char *message, size_t length, const void *codeptr_ra) {
}
