  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 89;
      section.data(89)  = dumData; %prealloc
      
	  ;% rtP.PIDController_D
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.PIDController_I
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.PIDController_InitialConditionForFilter
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.PIDController_N
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.PIDController_P
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.CompareToConstant_const
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.CompareToConstant2_const
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.CompareToConstant3_const
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.Constant_Value
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.TransferFcn_A
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.TransferFcn_C
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.Saturation3_UpperSat
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.Saturation3_LowerSat
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.Switch1_Threshold
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.Saturation8_UpperSat
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.Saturation8_LowerSat
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.Switch2_Threshold
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.Saturation4_UpperSat
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtP.Saturation4_LowerSat
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtP.Saturation1_UpperSat
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtP.Saturation1_LowerSat
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtP.Saturation4_UpperSat_akmwgxb01z
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtP.Saturation4_LowerSat_ij4zyjj5on
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtP.Saturation5_UpperSat
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtP.Saturation5_LowerSat
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtP.Switch_Threshold
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtP.Celldynamic_D
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtP.Saturation1_UpperSat_ed1q0y3kri
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtP.Saturation1_LowerSat_ofmajn4n44
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtP.Gain2_Gain
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtP.Saturation2_UpperSat
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 32;
	
	  ;% rtP.Saturation2_LowerSat
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 33;
	
	  ;% rtP.Gain3_Gain
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 34;
	
	  ;% rtP.Gain1_Gain
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 35;
	
	  ;% rtP.StateSpace_P1_Size
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 36;
	
	  ;% rtP.StateSpace_P1
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 38;
	
	  ;% rtP.StateSpace_P2_Size
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 46;
	
	  ;% rtP.StateSpace_P2
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 48;
	
	  ;% rtP.StateSpace_P3_Size
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 52;
	
	  ;% rtP.StateSpace_P4_Size
	  section.data(41).logicalSrcIdx = 41;
	  section.data(41).dtTransOffset = 54;
	
	  ;% rtP.StateSpace_P4
	  section.data(42).logicalSrcIdx = 42;
	  section.data(42).dtTransOffset = 56;
	
	  ;% rtP.StateSpace_P5_Size
	  section.data(43).logicalSrcIdx = 43;
	  section.data(43).dtTransOffset = 244;
	
	  ;% rtP.StateSpace_P5
	  section.data(44).logicalSrcIdx = 44;
	  section.data(44).dtTransOffset = 246;
	
	  ;% rtP.StateSpace_P6_Size
	  section.data(45).logicalSrcIdx = 45;
	  section.data(45).dtTransOffset = 248;
	
	  ;% rtP.StateSpace_P6
	  section.data(46).logicalSrcIdx = 46;
	  section.data(46).dtTransOffset = 250;
	
	  ;% rtP.StateSpace_P7_Size
	  section.data(47).logicalSrcIdx = 47;
	  section.data(47).dtTransOffset = 251;
	
	  ;% rtP.StateSpace_P7
	  section.data(48).logicalSrcIdx = 48;
	  section.data(48).dtTransOffset = 253;
	
	  ;% rtP.StateSpace_P8_Size
	  section.data(49).logicalSrcIdx = 49;
	  section.data(49).dtTransOffset = 254;
	
	  ;% rtP.StateSpace_P8
	  section.data(50).logicalSrcIdx = 50;
	  section.data(50).dtTransOffset = 256;
	
	  ;% rtP.StateSpace_P9_Size
	  section.data(51).logicalSrcIdx = 51;
	  section.data(51).dtTransOffset = 257;
	
	  ;% rtP.StateSpace_P9
	  section.data(52).logicalSrcIdx = 52;
	  section.data(52).dtTransOffset = 259;
	
	  ;% rtP.StateSpace_P10_Size
	  section.data(53).logicalSrcIdx = 53;
	  section.data(53).dtTransOffset = 260;
	
	  ;% rtP.StateSpace_P10
	  section.data(54).logicalSrcIdx = 54;
	  section.data(54).dtTransOffset = 262;
	
	  ;% rtP.donotdeletethisgain_Gain
	  section.data(55).logicalSrcIdx = 55;
	  section.data(55).dtTransOffset = 263;
	
	  ;% rtP.Saturation_UpperSat
	  section.data(56).logicalSrcIdx = 56;
	  section.data(56).dtTransOffset = 264;
	
	  ;% rtP.Saturation_LowerSat
	  section.data(57).logicalSrcIdx = 57;
	  section.data(57).dtTransOffset = 265;
	
	  ;% rtP.zeroavoider_UpperSat
	  section.data(58).logicalSrcIdx = 58;
	  section.data(58).dtTransOffset = 266;
	
	  ;% rtP.zeroavoider_LowerSat
	  section.data(59).logicalSrcIdx = 59;
	  section.data(59).dtTransOffset = 267;
	
	  ;% rtP.zeroavoider2_UpperSat
	  section.data(60).logicalSrcIdx = 60;
	  section.data(60).dtTransOffset = 268;
	
	  ;% rtP.zeroavoider2_LowerSat
	  section.data(61).logicalSrcIdx = 61;
	  section.data(61).dtTransOffset = 269;
	
	  ;% rtP.AirFr_Value
	  section.data(62).logicalSrcIdx = 62;
	  section.data(62).dtTransOffset = 270;
	
	  ;% rtP.x_H2_Value
	  section.data(63).logicalSrcIdx = 63;
	  section.data(63).dtTransOffset = 271;
	
	  ;% rtP.Gain1_Gain_ev5b5aedsm
	  section.data(64).logicalSrcIdx = 64;
	  section.data(64).dtTransOffset = 272;
	
	  ;% rtP.y_O2_Value
	  section.data(65).logicalSrcIdx = 65;
	  section.data(65).dtTransOffset = 273;
	
	  ;% rtP.Gain3_Gain_a5cekjxgez
	  section.data(66).logicalSrcIdx = 66;
	  section.data(66).dtTransOffset = 274;
	
	  ;% rtP.Constant1_Value
	  section.data(67).logicalSrcIdx = 67;
	  section.data(67).dtTransOffset = 275;
	
	  ;% rtP.Constant2_Value
	  section.data(68).logicalSrcIdx = 68;
	  section.data(68).dtTransOffset = 276;
	
	  ;% rtP.Constant_Value_bz5fk4zjsw
	  section.data(69).logicalSrcIdx = 69;
	  section.data(69).dtTransOffset = 277;
	
	  ;% rtP.Constant1_Value_jwzwi0xdlm
	  section.data(70).logicalSrcIdx = 70;
	  section.data(70).dtTransOffset = 278;
	
	  ;% rtP.Constant2_Value_lcqxxdekmv
	  section.data(71).logicalSrcIdx = 71;
	  section.data(71).dtTransOffset = 279;
	
	  ;% rtP.Saturation4_UpperSat_li4nm1wqn1
	  section.data(72).logicalSrcIdx = 72;
	  section.data(72).dtTransOffset = 280;
	
	  ;% rtP.Saturation4_LowerSat_fv3k33vymh
	  section.data(73).logicalSrcIdx = 73;
	  section.data(73).dtTransOffset = 281;
	
	  ;% rtP.Saturation3_UpperSat_cnnssirnow
	  section.data(74).logicalSrcIdx = 74;
	  section.data(74).dtTransOffset = 282;
	
	  ;% rtP.Saturation3_LowerSat_enqjjrirxf
	  section.data(75).logicalSrcIdx = 75;
	  section.data(75).dtTransOffset = 283;
	
	  ;% rtP.Saturation1_UpperSat_fbtjzsa0iv
	  section.data(76).logicalSrcIdx = 76;
	  section.data(76).dtTransOffset = 284;
	
	  ;% rtP.Saturation1_LowerSat_dr422hztx1
	  section.data(77).logicalSrcIdx = 77;
	  section.data(77).dtTransOffset = 285;
	
	  ;% rtP.Saturation2_UpperSat_luintzqobe
	  section.data(78).logicalSrcIdx = 78;
	  section.data(78).dtTransOffset = 286;
	
	  ;% rtP.Saturation2_LowerSat_p1pvj3bfvw
	  section.data(79).logicalSrcIdx = 79;
	  section.data(79).dtTransOffset = 287;
	
	  ;% rtP.Pfuel_Value
	  section.data(80).logicalSrcIdx = 80;
	  section.data(80).dtTransOffset = 288;
	
	  ;% rtP.Saturation6_UpperSat
	  section.data(81).logicalSrcIdx = 81;
	  section.data(81).dtTransOffset = 289;
	
	  ;% rtP.Saturation6_LowerSat
	  section.data(82).logicalSrcIdx = 82;
	  section.data(82).dtTransOffset = 290;
	
	  ;% rtP.PAir_Value
	  section.data(83).logicalSrcIdx = 83;
	  section.data(83).dtTransOffset = 291;
	
	  ;% rtP.Saturation7_UpperSat
	  section.data(84).logicalSrcIdx = 84;
	  section.data(84).dtTransOffset = 292;
	
	  ;% rtP.Saturation7_LowerSat
	  section.data(85).logicalSrcIdx = 85;
	  section.data(85).dtTransOffset = 293;
	
	  ;% rtP.T_Value
	  section.data(86).logicalSrcIdx = 86;
	  section.data(86).dtTransOffset = 294;
	
	  ;% rtP.Saturation8_UpperSat_khsxyas1pj
	  section.data(87).logicalSrcIdx = 87;
	  section.data(87).dtTransOffset = 295;
	
	  ;% rtP.Saturation8_LowerSat_mopr0yl3on
	  section.data(88).logicalSrcIdx = 88;
	  section.data(88).dtTransOffset = 296;
	
	  ;% rtP.gate_Value
	  section.data(89).logicalSrcIdx = 89;
	  section.data(89).dtTransOffset = 297;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 55;
      section.data(55)  = dumData; %prealloc
      
	  ;% rtB.bavzijv0so
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.daxvyr42tj
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.ivrdakrpkz
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.gav1pd5ma3
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.fqkwvndle1
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.nvztzljheb
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.ljzmtubqwo
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.akyj4jonda
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.lzgsyascic
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.nmri2lmpfm
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.ekul1otefy
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.lhtnm5lwwx
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.g1r5stuak1
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtB.ob3xvrv14j
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtB.btrx0xj1zo
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtB.dqmbk4jy2s
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtB.llkknoylr5
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtB.efwiiajxhv
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtB.c0i2lpksv0
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtB.ebodj1thau
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtB.pmuzvfqj2o
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtB.jedtphj44b
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtB.jn0audc40e
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtB.g2hfsznaof
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtB.dqw3uf1b44
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtB.iqef1c31zx
	  section.data(26).logicalSrcIdx = 26;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtB.oc0v4h1y5j
	  section.data(27).logicalSrcIdx = 27;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtB.bprv4o1etg
	  section.data(28).logicalSrcIdx = 28;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtB.ay2y0ocfyb
	  section.data(29).logicalSrcIdx = 29;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtB.d3quvi1chz
	  section.data(30).logicalSrcIdx = 30;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtB.ine5zv1zjj
	  section.data(31).logicalSrcIdx = 31;
	  section.data(31).dtTransOffset = 31;
	
	  ;% rtB.o2r0cagjuy
	  section.data(32).logicalSrcIdx = 32;
	  section.data(32).dtTransOffset = 33;
	
	  ;% rtB.j3idclsmnt
	  section.data(33).logicalSrcIdx = 33;
	  section.data(33).dtTransOffset = 34;
	
	  ;% rtB.lzypmhzndc
	  section.data(34).logicalSrcIdx = 34;
	  section.data(34).dtTransOffset = 35;
	
	  ;% rtB.j1dd2aosj2
	  section.data(35).logicalSrcIdx = 35;
	  section.data(35).dtTransOffset = 36;
	
	  ;% rtB.b52xchwncs
	  section.data(36).logicalSrcIdx = 36;
	  section.data(36).dtTransOffset = 37;
	
	  ;% rtB.kvwjc41uxn
	  section.data(37).logicalSrcIdx = 37;
	  section.data(37).dtTransOffset = 38;
	
	  ;% rtB.gcuewowv5r
	  section.data(38).logicalSrcIdx = 38;
	  section.data(38).dtTransOffset = 39;
	
	  ;% rtB.bmltweyfyf
	  section.data(39).logicalSrcIdx = 39;
	  section.data(39).dtTransOffset = 40;
	
	  ;% rtB.bdvmeusvb5
	  section.data(40).logicalSrcIdx = 40;
	  section.data(40).dtTransOffset = 41;
	
	  ;% rtB.k5fxcufjvi
	  section.data(41).logicalSrcIdx = 41;
	  section.data(41).dtTransOffset = 43;
	
	  ;% rtB.orai4150bl
	  section.data(42).logicalSrcIdx = 42;
	  section.data(42).dtTransOffset = 44;
	
	  ;% rtB.ctcl1uvivk
	  section.data(43).logicalSrcIdx = 43;
	  section.data(43).dtTransOffset = 45;
	
	  ;% rtB.i5reyjf5xo
	  section.data(44).logicalSrcIdx = 44;
	  section.data(44).dtTransOffset = 46;
	
	  ;% rtB.l52p3jlley
	  section.data(45).logicalSrcIdx = 45;
	  section.data(45).dtTransOffset = 47;
	
	  ;% rtB.mw20dncod2
	  section.data(46).logicalSrcIdx = 46;
	  section.data(46).dtTransOffset = 48;
	
	  ;% rtB.ckwkubvaz1
	  section.data(47).logicalSrcIdx = 47;
	  section.data(47).dtTransOffset = 49;
	
	  ;% rtB.eskban3zwt
	  section.data(48).logicalSrcIdx = 48;
	  section.data(48).dtTransOffset = 50;
	
	  ;% rtB.cajozp21sm
	  section.data(49).logicalSrcIdx = 49;
	  section.data(49).dtTransOffset = 51;
	
	  ;% rtB.d1b4tb0oga
	  section.data(50).logicalSrcIdx = 50;
	  section.data(50).dtTransOffset = 52;
	
	  ;% rtB.gchfzymay5
	  section.data(51).logicalSrcIdx = 51;
	  section.data(51).dtTransOffset = 53;
	
	  ;% rtB.jolm4mpqdu
	  section.data(52).logicalSrcIdx = 52;
	  section.data(52).dtTransOffset = 54;
	
	  ;% rtB.lfvm4alwxg
	  section.data(53).logicalSrcIdx = 53;
	  section.data(53).dtTransOffset = 55;
	
	  ;% rtB.c0pcwbtojc
	  section.data(54).logicalSrcIdx = 54;
	  section.data(54).dtTransOffset = 56;
	
	  ;% rtB.mm4pldrola
	  section.data(55).logicalSrcIdx = 55;
	  section.data(55).dtTransOffset = 57;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.oojwlcphqb
	  section.data(1).logicalSrcIdx = 56;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtB.b1rqs431h1
	  section.data(1).logicalSrcIdx = 57;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.bgqx5dwycb
	  section.data(2).logicalSrcIdx = 58;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.nokwdddffo
	  section.data(3).logicalSrcIdx = 59;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.ouwoht5ci4
	  section.data(4).logicalSrcIdx = 60;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 3;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.mwnril4rhy.TempDoubleOutput
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.ai1fy52fph
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.cxqxgzg5rp.ExcelLoader
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.mxmp0bdte2
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.oldr1ubkd4.LoggedData
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 23;
	
	  ;% rtDW.gefxylltzd.LoggedData
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 25;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% rtDW.pzweb3waei
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.buulypwczt
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 23;
	
	  ;% rtDW.bobo4src3m
	  section.data(3).logicalSrcIdx = 8;
	  section.data(3).dtTransOffset = 24;
	
	  ;% rtDW.ciqoxqno3n
	  section.data(4).logicalSrcIdx = 9;
	  section.data(4).dtTransOffset = 25;
	
	  ;% rtDW.e2av4brvjw
	  section.data(5).logicalSrcIdx = 10;
	  section.data(5).dtTransOffset = 26;
	
	  ;% rtDW.fy2pcwaiq4
	  section.data(6).logicalSrcIdx = 11;
	  section.data(6).dtTransOffset = 27;
	
	  ;% rtDW.ijyrr5pcnk
	  section.data(7).logicalSrcIdx = 12;
	  section.data(7).dtTransOffset = 28;
	
	  ;% rtDW.l2s1k43lyk
	  section.data(8).logicalSrcIdx = 13;
	  section.data(8).dtTransOffset = 29;
	
	  ;% rtDW.b0xiuk0xhi
	  section.data(9).logicalSrcIdx = 14;
	  section.data(9).dtTransOffset = 30;
	
	  ;% rtDW.axsjjkipui
	  section.data(10).logicalSrcIdx = 15;
	  section.data(10).dtTransOffset = 31;
	
	  ;% rtDW.f4lrzxvwzu
	  section.data(11).logicalSrcIdx = 16;
	  section.data(11).dtTransOffset = 32;
	
	  ;% rtDW.gfvrstqzp2
	  section.data(12).logicalSrcIdx = 17;
	  section.data(12).dtTransOffset = 34;
	
	  ;% rtDW.nozy5m20xv
	  section.data(13).logicalSrcIdx = 18;
	  section.data(13).dtTransOffset = 36;
	
	  ;% rtDW.apsjm1y0wq
	  section.data(14).logicalSrcIdx = 19;
	  section.data(14).dtTransOffset = 37;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.bl0zsrdfdr
	  section.data(1).logicalSrcIdx = 20;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.j44ulxfog4
	  section.data(2).logicalSrcIdx = 21;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtDW.c43gr4lfcg
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hnqcsmtgzu
	  section.data(2).logicalSrcIdx = 23;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.fp1fv0c3dn
	  section.data(3).logicalSrcIdx = 24;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.ci5q0cjvne
	  section.data(4).logicalSrcIdx = 25;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.d2axjvvxsl
	  section.data(5).logicalSrcIdx = 26;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.nvonx4yx5b
	  section.data(6).logicalSrcIdx = 27;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.fcdvvtdyq2
	  section.data(7).logicalSrcIdx = 28;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.fjb3gfugia
	  section.data(8).logicalSrcIdx = 29;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.akfzl3kzqo
	  section.data(9).logicalSrcIdx = 30;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3071850463;
  targMap.checksum1 = 470438315;
  targMap.checksum2 = 3987730454;
  targMap.checksum3 = 2761785398;

