#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488bdc;
extern "C" RuntimeTag data_10488bd8;
extern "C" const RuntimeVTable data_10054f78;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10054f68;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10054f58;

typedef Token<&data_10488bdc, &data_10488bd8, &data_10054f78> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10054f68> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10054f58> Type2;

extern "C" bool fn_0220ffd0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
