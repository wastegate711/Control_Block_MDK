#include "RequestsSorting.h"
#include "AnswersToQuestion.h"
#include "usart.h"
#include "GlobalSettings.h"

extern uint8_t tx_usart_data[BUF_LEN];

/**
 * Функция производит сортировку входящих запросов.
 * @param data Массив который нужно сортировать.
 */
void IncomingRequest(const uint8_t *data)
{
    switch(data[2])
    {
        case GET_STATUS:
            GetStatus();
            break;
        case GET_UID:
            GetUID();
            break;
        case SET_VALVE_COOL_WATER:
            break;
        case SET_VALVE_HOT_WATER:
            break;
    }
}
