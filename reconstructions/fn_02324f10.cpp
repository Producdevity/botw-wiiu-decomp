#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489e1c;
extern "C" RuntimeTag data_10489e18;
extern "C" const RuntimeVTable data_100860fc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100860ec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100860dc;

typedef Token<&data_10489e1c, &data_10489e18, &data_100860fc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100860ec> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100860dc> Type2;

extern "C" bool fn_02324f10(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
