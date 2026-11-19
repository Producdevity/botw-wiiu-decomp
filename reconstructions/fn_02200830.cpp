#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104888cc;
extern "C" RuntimeTag data_104888d0;
extern "C" const RuntimeVTable data_100516b8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10051698;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10051688;

typedef Token<&data_104888cc, &data_104888d0, &data_100516b8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10051698> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10051688> Type2;

extern "C" bool fn_02200830(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
