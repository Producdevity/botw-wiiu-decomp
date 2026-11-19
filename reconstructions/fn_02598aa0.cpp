#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b460;
extern "C" RuntimeTag data_1048b464;
extern "C" const RuntimeVTable data_100e879c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e878c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e877c;

typedef Token<&data_1048b460, &data_1048b464, &data_100e879c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100e878c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100e877c> Type2;

extern "C" bool fn_02598aa0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
