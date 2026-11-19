#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104898fc;
extern "C" RuntimeTag data_10489900;
extern "C" const RuntimeVTable data_10078048;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10078038;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10078028;

typedef Token<&data_104898fc, &data_10489900, &data_10078048> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10078038> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10078028> Type2;

extern "C" bool fn_022db270(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
