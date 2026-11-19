#include "botw/virtual_callback_forwarding.h"

extern "C" bool fn_02bb5aa4(void* receiver, void* input, void*) {
    return static_cast<virtual_callback_forwarding::Receiver*>(receiver)->table->dispatch(receiver, input, false);
}
