#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487fcc;
extern "C" RuntimeTag data_10487fd0;
extern "C" const RuntimeVTable data_1008dae4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008dad4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008dac4;

typedef Token<&data_10487fcc, &data_10487fd0, &data_1008dae4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1008dad4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1008dac4> Type2;

extern "C" bool fn_02359e68(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
