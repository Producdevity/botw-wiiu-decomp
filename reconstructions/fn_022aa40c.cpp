#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489680;
extern "C" RuntimeTag data_10489684;
extern "C" const RuntimeVTable data_10072000;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10071ff0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10071fe0;

typedef Token<&data_10489680, &data_10489684, &data_10072000> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10071ff0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10071fe0> Type2;

extern "C" bool fn_022aa40c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
