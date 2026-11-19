#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488ce8;
extern "C" RuntimeTag data_10488cec;
extern "C" const RuntimeVTable data_100578ec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100578dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100578cc;

typedef Token<&data_10488ce8, &data_10488cec, &data_100578ec> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100578dc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100578cc> Type2;

extern "C" bool fn_02219688(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
