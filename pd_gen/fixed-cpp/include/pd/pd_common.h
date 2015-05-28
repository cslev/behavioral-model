#ifndef _P4_PD_COMMON_H_
#define _P4_PD_COMMON_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef uint32_t p4_pd_status_t;

typedef uint32_t p4_pd_sess_hdl_t;

typedef uint32_t p4_pd_entry_hdl_t;
typedef uint32_t p4_pd_mbr_hdl_t;
typedef uint32_t p4_pd_grp_hdl_t;
/* TODO: change that, it is horrible */
typedef void* p4_pd_value_hdl_t;

#define PD_DEV_PORT_ALL 0xffff
typedef struct p4_pd_dev_target {
  uint8_t device_id; /*!< Device Identifier the API request is for */
  uint16_t dev_port_id;/*!< If specified localizes target to the resources
			 * only accessible to the port. DEV_PORT_ALL serves
			 * as a wild-card value
			 */
} p4_pd_dev_target_t;

typedef struct p4_pd_counter_value {
  uint64_t packets;
  uint64_t bytes;
} p4_pd_counter_value_t;

#ifdef __cplusplus
}
#endif

#endif