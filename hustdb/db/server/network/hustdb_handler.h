////////////////////////////////////////////////////////////////////////////////
// NOTE : Generated by libevhtp.py. It is NOT supposed to modify this file.
////////////////////////////////////////////////////////////////////////////////
#ifndef __hustdb_handler_20160318131858_h__
#define __hustdb_handler_20160318131858_h__

#include "hustdb_handler_def.h"

void hustdb_exist_handler(const hustdb_exist_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_get_handler(const hustdb_get_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_put_handler(const hustdb_put_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_del_handler(const hustdb_del_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_keys_handler(const hustdb_keys_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_stat_handler(const hustdb_stat_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_stat_all_handler(evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_hexist_handler(const hustdb_hexist_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_hget_handler(const hustdb_hget_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_hset_handler(const hustdb_hset_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_hdel_handler(const hustdb_hdel_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_hkeys_handler(const hustdb_hkeys_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_sismember_handler(const hustdb_sismember_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_sadd_handler(const hustdb_sadd_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_srem_handler(const hustdb_srem_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_smembers_handler(const hustdb_smembers_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_file_count_handler(evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_export_handler(const hustdb_export_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_put_handler(const hustmq_put_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_get_handler(const hustmq_get_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_worker_handler(const hustmq_worker_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_stat_handler(const hustmq_stat_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_stat_all_handler(evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_max_handler(const hustmq_max_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_lock_handler(const hustmq_lock_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_purge_handler(const hustmq_purge_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_pub_handler(const hustmq_pub_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_sub_handler(const hustmq_sub_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_info_handler(evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_task_info_handler(evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_task_status_handler(const hustdb_task_status_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_zismember_handler(const hustdb_zismember_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_zscore_handler(const hustdb_zscore_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_zadd_handler(const hustdb_zadd_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_zrem_handler(const hustdb_zrem_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_zrangebyrank_handler(const hustdb_zrangebyrank_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_zrangebyscore_handler(const hustdb_zrangebyscore_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);

#endif // __hustdb_handler_20160318131858_h__