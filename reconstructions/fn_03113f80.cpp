#include "botw/virtual_callback_forwarding.h"

extern "C" bool fn_03113f80(void* receiver, void* input, void*) {
    return static_cast<virtual_callback_forwarding::Receiver*>(receiver)->table->dispatch(receiver, input, false);
}
