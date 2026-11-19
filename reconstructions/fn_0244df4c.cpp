#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ae94;
extern "C" RuntimeTag data_1048ae98;
extern "C" const RuntimeVTable data_100b8c0c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b8bfc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b8bec;

typedef Token<&data_1048ae94, &data_1048ae98, &data_100b8c0c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100b8bfc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100b8bec> Type2;

extern "C" bool fn_0244df4c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
