void  krim(){

char key = keypad.getKey();
  if (key != NO_KEY){
    /*
    if (key == '0'){
      perintah_dec=id_dec;
      irsend.sendSony(perintah_dec, 12); // Sony TV power code
      delay(40);
    }

    if (key == '1'){
      perintah_dec=id_dec+4;
      irsend.sendSony(perintah_dec, 12); // Sony TV power code
      delay(40);
    }

    if (key == '2'){
      perintah_dec=id_dec+8;
      irsend.sendSony(perintah_dec, 14); // Sony TV power code
      delay(40);
    }

    if (key == '3'){
      perintah_dec=id_dec+12;
      irsend.sendSony(perintah_dec, 14); // Sony TV power code
      delay(40);
    }

    if (key == '4'){
      perintah_dec=id_dec+16;
      irsend.sendSony(perintah_dec, 14); // Sony TV power code
      delay(40);
    }

    if (key == '5'){
      perintah_dec=id_dec+20;
      irsend.sendSony(perintah_dec, 14); // Sony TV power code
      delay(40);
    }

    if (key == '6'){
      perintah_dec=id_dec+24;
      irsend.sendSony(perintah_dec, 14); // Sony TV power code
      delay(40);
    }

    if (key == '7'){
      perintah_dec=id_dec+28;
      irsend.sendSony(perintah_dec, 14); // Sony TV power code
      delay(40);
    }

    if (key == '8'){
      perintah_dec=id_dec+32;
      irsend.sendSony(perintah_dec, 14); // Sony TV power code
      delay(40);
    }

    if (key == '9'){
      perintah_dec=id_dec+36;
      irsend.sendSony(perintah_dec, 14); // Sony TV power code
      delay(40);
    }

    if (key == 'A'){
      perintah_dec=id_dec+40;
      irsend.sendSony(perintah_dec, 14); // Sony TV power code
      delay(40);
    }

    if (key == 'B'){
      perintah_dec=id_dec+44;
      irsend.sendSony(perintah_dec, 14); // Sony TV power code
      delay(40);
    }

    if (key == 'C'){
      perintah_dec=id_dec+48;
      irsend.sendSony(perintah_dec, 14); // Sony TV power code
      delay(40);
    }
    */
    
    if (key == '0'){
      perintah_dec=id_dec;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }

    if (key == '1'){
      perintah_dec=id_dec+1;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }

    if (key == '2'){
      perintah_dec=id_dec+2;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }

    if (key == '3'){
      perintah_dec=id_dec+3;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }

    if (key == '4'){
      perintah_dec=id_dec+4;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }

    if (key == '5'){
      perintah_dec=id_dec+5;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }

    if (key == '6'){
      perintah_dec=id_dec+6;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }

    if (key == '7'){
      perintah_dec=id_dec+7;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }

    if (key == '8'){
      perintah_dec=id_dec+8;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }

    if (key == '9'){
      perintah_dec=id_dec+9;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }

    if (key == 'A'){
      perintah_dec=id_dec+10;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }

    if (key == 'B'){
      perintah_dec=id_dec+11;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }

    if (key == 'C'){
      perintah_dec=id_dec+12;
      irsend.sendSony(perintah_dec, 10); // Sony TV power code
      delay(40);
    }
    



    
    /*
    if (key == '0'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,d0,d0,d0,d0,d2, id0,id1,id2,id3,d0,d0,d0,d0,d2, id0,id1,id2,id3,d0,d0,d0,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
      
    }

    if (key == '1'){
      unsigned int  irSignal[] = {d2,id0,id1,id2,id3,d0,d0,d0,d1,d2,id0,id1,id2,id3,d0,d0,d0,d1,d2,id0,id1,id2,id3,d0,d0,d0,d1};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '2'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,d0,d0,d1,d0,d2, id0,id1,id2,id3,d0,d0,d1,d0,d2, id0,id1,id2,id3,d0,d0,d1,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '3'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,d0,d0,d1,d1,d2, id0,id1,id2,id3,d0,d0,d1,d1,d2, id0,id1,id2,id3,d0,d0,d1,d1};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '4'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,d0,d1,d0,d0,d2, id0,id1,id2,id3,d0,d1,d0,d0,d2, id0,id1,id2,id3,d0,d1,d0,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '5'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,d0,d1,d0,d1,d2, id0,id1,id2,id3,d0,d1,d0,d1,d2, id0,id1,id2,id3,d0,d1,d0,d1};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '6'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,d0,d1,d1,d0,d2, id0,id1,id2,id3,d0,d1,d1,d0,d0,d2, id0,id1,id2,id3,d0,d1,d1,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '7'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,d0,d1,d1,d1,d2, id0,id1,id2,id3,d0,d1,d1,d1,d2, id0,id1,id2,id3,d0,d1,d1,d1};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '8'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,d1,d0,d0,d0,d2, id0,id1,id2,id3,d1,d0,d0,d0,d2, id0,id1,id2,id3,d1,d0,d0,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '9'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,d1,d0,d0,d1,d2, id0,id1,id2,id3,d1,d0,d0,d1,d2, id0,id1,id2,id3,d1,d0,d0,d1};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == 'A'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,d1,d0,d1,d0,d2, id0,id1,id2,id3,d1,d0,d1,d0,d2, id0,id1,id2,id3,d1,d0,d1,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == 'B'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,d1,d0,d1,d1,d2, id0,id1,id2,id3,d1,d0,d1,d1,d2, id0,id1,id2,id3,d1,d0,d1,d1};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == 'C'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,d1,d1,d1,d0,d2, id0,id1,id2,id3,d1,d1,d1,d0,d2, id0,id1,id2,id3,d1,d1,d1,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }
    */
    
    
    
    /*if (key == '0'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,id4,id5,id6,id7,d0,d0,d0,d0};
      irsend.sendRaw(irSignal, 13, khz);
      
    }

    if (key == '1'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,id4,id5,id6,id7,d0,d0,d0,d1};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '2'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,id4,id5,id6,id7,d0,d0,d1,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '3'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,id4,id5,id6,id7,d0,d0,d1,d1};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '4'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,id4,id5,id6,id7,d0,d1,d0,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '5'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7,d0,d1,d0,d1};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '6'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7  ,d0,d1,d1,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '7'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7,d0,d1,d1,d1};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '8'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7,d1,d0,d0,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == '9'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,id4,id5,id6,id7,d1,d0,d0,d1};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == 'A'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,id4,id5,id6,id7,d1,d0,d1,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == 'B'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,id4,id5,id6,id7,d1,d0,d1,d1};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }

    if (key == 'C'){
      unsigned int  irSignal[] = {d2, id0,id1,id2,id3,id4,id5,id6,id7,d1,d1,d1,d0};
      irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    }*/
  /*switch (key){
    case  '0':
     unsigned int  irSignal[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7 ,d0,d0,d0,d0}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    break;

    case  '1':
     unsigned int  irSignal1[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7     ,d0,d0,d0,d1}; //AnalysIR Batch Export (IRremote) - RAW                                                                                                                                                                                                                                                                   ,d[0],d[0],d[0],d[1]}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal1, sizeof(irSignal1) / sizeof(irSignal1[0]), khz);
    break;

    case  '2':
     unsigned int  irSignal2[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7 ,d0,d0,d1,d0}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal2, sizeof(irSignal2) / sizeof(irSignal2[0]), khz);
    break;

    case  '3':
     unsigned int  irSignal3[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7  ,d0,d0,d1,d1}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal3, sizeof(irSignal3) / sizeof(irSignal3[0]), khz);
    break;

    case  '4':
    unsigned int  irSignal4[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7  ,d0,d1,d0,d0}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal4, sizeof(irSignal4) / sizeof(irSignal4[0]), khz);
    break;

    case  '5':
    unsigned int  irSignal5[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7  ,d0,d1,d0,d1}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal5, sizeof(irSignal5) / sizeof(irSignal5[0]), khz);
    break;

    case  '6':
     unsigned int  irSignal6[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7  ,d0,d1,d1,d0}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal6, sizeof(irSignal6) / sizeof(irSignal6[0]), khz);
    break;

    case  '7':
     unsigned int  irSignal7[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7  ,d0,d1,d1,d1}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal7, sizeof(irSignal7) / sizeof(irSignal7[0]), khz);
    break;

    case  '8':
     unsigned int  irSignal8[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7  ,d1,d0,d0,d0}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal8, sizeof(irSignal8) / sizeof(irSignal8[0]), khz);
    break;

    case  '9':
     unsigned int  irSignal9[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7   ,d1,d0,d0,d1}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal9, sizeof(irSignal9) / sizeof(irSignal9[0]), khz);
    break;

    case  'A':
     unsigned int  irSignal10[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7  ,d1,d0,d1,d0}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal10, sizeof(irSignal10) / sizeof(irSignal10[0]), khz);
    break;


    case  'B':
    unsigned int  irSignal11[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7 ,d1,d0,d1,d1}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal11, sizeof(irSignal11) / sizeof(irSignal11[0]), khz);
    break;


    case  'C':
     unsigned int  irSignal12[] = {d2, id0,id1,id2,id3, id4,id5,id6,id7 ,d1,d1,d1,d0}; //AnalysIR Batch Export (IRremote) - RAW
    irsend.sendRaw(irSignal12, sizeof(irSignal12) / sizeof(irSignal12[0]), khz);
    break;
  }*/
}
}
