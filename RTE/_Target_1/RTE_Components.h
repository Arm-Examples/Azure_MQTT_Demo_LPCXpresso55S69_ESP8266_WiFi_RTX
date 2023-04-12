
/*
 * Auto generated Run-Time-Environment Configuration File
 *      *** Do not modify ! ***
 *
 * Project: 'Azure_MQTT_Demo' 
 * Target:  'Target 1' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "fsl_device_registers.h"

/* ARM::CMSIS:RTOS2:Keil RTX5:Source:5.5.4 */
#define RTE_CMSIS_RTOS2                 /* CMSIS-RTOS2 */
        #define RTE_CMSIS_RTOS2_RTX5            /* CMSIS-RTOS2 Keil RTX5 */
        #define RTE_CMSIS_RTOS2_RTX5_SOURCE     /* CMSIS-RTOS2 Keil RTX5 Source */
/* ARM::Security:mbed TLS:2.24.0 */
#define RTE_Security_mbedTLS            /* Security mbed TLS */
/* Keil.ARM Compiler::Compiler:Event Recorder:DAP:1.5.1 */
#define RTE_Compiler_EventRecorder
          #define RTE_Compiler_EventRecorder_DAP
/* Keil.ARM Compiler::Compiler:I/O:STDERR:User:1.2.0 */
#define RTE_Compiler_IO_STDERR          /* Compiler I/O: STDERR */
          #define RTE_Compiler_IO_STDERR_User     /* Compiler I/O: STDERR User */
/* Keil.ARM Compiler::Compiler:I/O:STDIN:User:1.2.0 */
#define RTE_Compiler_IO_STDIN           /* Compiler I/O: STDIN */
          #define RTE_Compiler_IO_STDIN_User      /* Compiler I/O: STDIN User */
/* Keil.ARM Compiler::Compiler:I/O:STDOUT:User:1.2.0 */
#define RTE_Compiler_IO_STDOUT          /* Compiler I/O: STDOUT */
          #define RTE_Compiler_IO_STDOUT_User     /* Compiler I/O: STDOUT User */
/* Keil::CMSIS Driver:VIO:Board:LPCXpresso55S69:1.0.0 */
#define RTE_VIO_BOARD
        #define RTE_VIO_LPCXPRESSO55S69
/* Keil::CMSIS Driver:WiFi:ESP8266:UART:1.8.0 */
#define RTE_Drivers_WiFi_ESP8266_UART   /* Driver WiFi ESP8266 (UART) */
/* MDK-Packs::IoT Client:Azure:1.2.4 */
#define RTE_IoT_Client_Azure            /* Azure IoT Client */
/* MDK-Packs::IoT Utility:Azure:Common:1.1.4 */
#define RTE_IoT_Azure_Common            /* Azure Common Code */
/* MDK-Packs::IoT Utility:Azure:MQTT:1.1.4 */
#define RTE_IoT_Azure_MQTT              /* Azure MQTT */
/* MDK-Packs::IoT Utility:Socket:WiFi:1.0.0 */
#define RTE_IoT_Socket                  /* IoT Socket */
        #define RTE_IoT_Socket_WiFi             /* IoT Socket: WiFi */
/* NXP::Device:SDK Utilities:serial_manager_uart:1.0.0 */
#define SERIAL_PORT_TYPE_UART 1


#endif /* RTE_COMPONENTS_H */
