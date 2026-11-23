extern "C" float fn_02e58b34(float);
extern "C" float fn_02e58b64(float);

extern "C" void fn_02bf33d4(void* arg0) {
    (*(float*)((char*)arg0 + 472)) = fn_02e58b34(*(*(float**)((char*)arg0 + 364)));
    (*(float*)((char*)arg0 + 476)) = fn_02e58b34(*(*(float**)((char*)arg0 + 368)));
    (*(float*)((char*)arg0 + 480)) = fn_02e58b64(*(*(float**)((char*)arg0 + 372)));
    (*(float*)((char*)arg0 + 484)) = fn_02e58b64(*(*(float**)((char*)arg0 + 376)));
}
