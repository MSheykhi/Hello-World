#include "Main.h"

#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE
#include "esp_log.h"
#define TAG "MAIN"

extern "C" void app_main(void)
{
    while(true)
    {
        
        ESP_LOGI(TAG, "Hello World!");
        vTaskDelay(1000/portTICK_PERIOD_MS);
        
    }
}