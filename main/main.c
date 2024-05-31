#include "../components/drivers/include/GPIO.h"
#include "../Librerias/librerias.h"


void app_main(void)
{
    GPIO_Salida(LED1);           //Se establece LED1 como salida
    GPIO_Escribir(LED1, BAJO);   //Se coloca apagado

    while (true) {
    	GPIO_Escribir(LED1, ALTO);        //Se enciende el LED
        vTaskDelay (pdMS_TO_TICKS(100));
        GPIO_Escribir(LED1,BAJO);         //Se apaga el LED
        vTaskDelay (pdMS_TO_TICKS(100));
    }
}
