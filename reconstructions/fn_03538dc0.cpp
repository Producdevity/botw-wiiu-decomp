#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104912a4;
extern "C" RuntimeTag data_104912a8;
extern "C" const RuntimeVTable data_102daaa0;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102daa90;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102daa70;

typedef Token<&data_104912a4, &data_104912a8, &data_102daaa0> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102daa90> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102daa70> Type2;

extern "C" bool fn_03538dc0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
