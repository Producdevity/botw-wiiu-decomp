#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048af00;
extern "C" RuntimeTag data_1048aefc;
extern "C" const RuntimeVTable data_100ba138;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100ba128;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ba118;

typedef Token<&data_1048af00, &data_1048aefc, &data_100ba138> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100ba128> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ba118> Type2;

extern "C" bool fn_024577b8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
