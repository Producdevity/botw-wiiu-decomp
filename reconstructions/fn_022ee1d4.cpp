#include "botw/virtual_callback_forwarding.h"

extern "C" bool fn_022ee1d4(void* receiver, void* input, void*) {
    return static_cast<virtual_callback_forwarding::Receiver*>(receiver)->table->dispatch(receiver, input, false);
}
