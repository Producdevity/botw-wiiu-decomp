#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486c84;
extern "C" RuntimeTag data_104941e4;
extern "C" const RuntimeVTable data_102da464;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102da454;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102da3cc;

typedef Token<&data_10486c84, &data_104941e4, &data_102da464> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102da454> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102da3cc> Type2;

extern "C" bool fn_035370ac(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
