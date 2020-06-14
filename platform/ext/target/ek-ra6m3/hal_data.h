/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
// #include <stdint.h>
// #include "bsp_api.h"
// #include "common_data.h"
#include "r_sci_uart.h"
#include "r_uart_api.h"
#include "r_flash_hp.h"
#include "r_flash_api.h"
FSP_HEADER

#define VECTOR_NUMBER_SCI7_RXI ((IRQn_Type)0) /* SCI7 RXI (Receive data full) */
#define VECTOR_NUMBER_SCI7_TXI ((IRQn_Type)1) /* SCI7 TXI (Transmit data empty) */
#define VECTOR_NUMBER_SCI7_TEI ((IRQn_Type)2) /* SCI7 TEI (Transmit end) */
#define VECTOR_NUMBER_SCI7_ERI ((IRQn_Type)3) /* SCI7 ERI (Receive error) */

/** UART on SCI Instance. */
extern const uart_instance_t g_uart;

/** Access the UART instance using these structures when calling API functions directly (::p_api is not used). */
extern sci_uart_instance_ctrl_t g_uart_ctrl;
extern const uart_cfg_t g_uart_cfg;
extern const sci_uart_extended_cfg_t g_uart_cfg_extend;

#ifndef user_uart_callback
void user_uart_callback(uart_callback_args_t *p_args);
#endif
/* Flash on Flash HP Instance */
extern const flash_instance_t g_flash;

/** Access the Flash HP instance using these structures when calling API functions directly (::p_api is not used). */
extern flash_hp_instance_ctrl_t g_flash_ctrl;
extern const flash_cfg_t g_flash_cfg;

#ifndef NULL
void NULL(flash_callback_args_t *p_args);
#endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
