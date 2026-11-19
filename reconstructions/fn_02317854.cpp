#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489d28;
extern "C" RuntimeTag data_10489d2c;
extern "C" const RuntimeVTable data_10083b9c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10083b8c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10083b7c;

typedef Token<&data_10489d28, &data_10489d2c, &data_10083b9c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10083b8c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10083b7c> Type2;

extern "C" bool fn_02317854(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
