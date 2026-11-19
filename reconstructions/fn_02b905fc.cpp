#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fbdc;
extern "C" RuntimeTag data_10490534;
extern "C" const RuntimeVTable data_101b27b8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_101b27a8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101b2798;

typedef Token<&data_1048fbdc, &data_10490534, &data_101b27b8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_101b27a8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101b2798> Type2;

extern "C" bool fn_02b905fc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
