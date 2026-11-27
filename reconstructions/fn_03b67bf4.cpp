namespace {
struct Block {
    signed char flag;
    char padding_1[3];
    int v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15;
};
}

extern "C" void fn_03b67bf4(void* arg0) {
    ((Block*)arg0)->v4 = 0;
    ((Block*)arg0)->v11 = 0;
    ((Block*)arg0)->v1 = 0;
    ((Block*)arg0)->v7 = 0;
    ((Block*)arg0)->v14 = 0;
    ((Block*)arg0)->v3 = 0;
    ((Block*)arg0)->v9 = 0;
    ((Block*)arg0)->v6 = 0;
    ((Block*)arg0)->v13 = 0;
    ((Block*)arg0)->v12 = 0;
    ((Block*)arg0)->flag = 0;
    ((Block*)arg0)->v15 = 0;
    ((Block*)arg0)->v10 = 0;
    ((Block*)arg0)->v2 = 0;
    ((Block*)arg0)->v5 = 0;
    ((Block*)arg0)->v8 = 0;
}
