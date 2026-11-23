struct V { unsigned a, b, c; };
extern "C" void fn_03470ff8(V* p, V* q) { unsigned t = p->a; p->a = q->a; q->a = t; unsigned u = p->b; p->b = q->b; q->b = u; unsigned w = p->c; p->c = q->c; q->c = w; }
