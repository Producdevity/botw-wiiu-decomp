#include "botw/paired_subtract.h"

extern "C" void* fn_04099ba0(void* storage, const void* left_values, const void* right_values) {
    using namespace paired_subtract;
    return subtract_pairs(static_cast<Pair*>(storage), static_cast<const Pair*>(left_values),
                          static_cast<const Pair*>(right_values));
}
