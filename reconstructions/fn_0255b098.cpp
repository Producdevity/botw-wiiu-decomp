#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b920;
extern "C" RuntimeTag data_1048b924;
extern "C" const RuntimeVTable data_100deaf0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100deae0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100dead0;

typedef Token<&data_1048b920, &data_1048b924, &data_100deaf0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100deae0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100dead0> Type2;

extern "C" bool fn_0255b098(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
