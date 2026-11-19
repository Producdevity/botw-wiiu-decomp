#include "botw/virtual_callback_forwarding.h"

extern "C" bool fn_023ad10c(void* receiver, void* input, void*) {
    return static_cast<virtual_callback_forwarding::Receiver*>(receiver)->table->dispatch(receiver, input, false);
}
