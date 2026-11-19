#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487a7c;
extern "C" RuntimeTag data_10487a78;
extern "C" const RuntimeVTable data_10026eec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10026edc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10026ecc;

typedef Token<&data_10487a7c, &data_10487a78, &data_10026eec> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10026edc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10026ecc> Type2;

extern "C" bool fn_021213c0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
