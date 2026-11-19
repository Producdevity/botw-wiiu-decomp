#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ae54;
extern "C" RuntimeTag data_1048ae58;
extern "C" const RuntimeVTable data_100b8138;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b8128;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b8118;

typedef Token<&data_1048ae54, &data_1048ae58, &data_100b8138> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100b8128> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100b8118> Type2;

extern "C" bool fn_0244af3c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
