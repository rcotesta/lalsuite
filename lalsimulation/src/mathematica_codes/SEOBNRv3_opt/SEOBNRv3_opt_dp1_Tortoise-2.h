REAL8 tmp6=x->data[0]*x->data[0];
REAL8 tmp7=x->data[1]*x->data[1];
REAL8 tmp8=x->data[2]*x->data[2];
REAL8 tmp9=tmp6+tmp7+tmp8;
REAL8 tmp10=1./sqrt(tmp9);
REAL8 tmp1=sigmaKerr->data[0]*sigmaKerr->data[0];
REAL8 tmp2=sigmaKerr->data[1]*sigmaKerr->data[1];
REAL8 tmp3=sigmaKerr->data[2]*sigmaKerr->data[2];
REAL8 tmp4=tmp1+tmp2+tmp3;
REAL8 tmp16=coeffs->KK*eta;
REAL8 tmp17=-1.+tmp16;
REAL8 tmp20=1/tmp9;
REAL8 tmp33=pow(tmp9,-2.5);
REAL8 tmp18=(1.0/(tmp17*tmp17));
REAL8 tmp19=1.*tmp18;
REAL8 tmp21=1.*tmp20*tmp4;
REAL8 tmp22=1/tmp17;
REAL8 tmp23=2.*tmp10*tmp22;
REAL8 tmp24=tmp19+tmp21+tmp23;
REAL8 tmp25=e3_x*tmp10*x->data[0];
REAL8 tmp26=e3_y*tmp10*x->data[1];
REAL8 tmp27=e3_z*tmp10*x->data[2];
REAL8 tmp28=tmp25+tmp26+tmp27;
REAL8 tmp29=tmp28*tmp28;
REAL8 tmp32=coeffs->k0*eta;
REAL8 tmp34=1.*coeffs->k5*tmp33;
REAL8 tmp35=(1.0/(tmp9*tmp9));
REAL8 tmp36=1.*coeffs->k4*tmp35;
REAL8 tmp37=(1.0/sqrt(tmp9*tmp9*tmp9));
REAL8 tmp38=1.*coeffs->k3*tmp37;
REAL8 tmp39=1.*coeffs->k2*tmp20;
REAL8 tmp40=1.*coeffs->k1*tmp10;
REAL8 tmp41=1.*tmp10;
REAL8 tmp42=log(tmp41);
REAL8 tmp43=1.*coeffs->k5l*tmp33*tmp42;
REAL8 tmp44=1.+tmp34+tmp36+tmp38+tmp39+tmp40+tmp43;
REAL8 tmp45=log(tmp44);
REAL8 tmp46=eta*tmp45;
REAL8 tmp47=1.+tmp32+tmp46;
REAL8 tmp14=tmp1+tmp2+tmp3+tmp6+tmp7+tmp8;
REAL8 tmp15=tmp14*tmp14;
REAL8 tmp30=-tmp29;
REAL8 tmp31=1.+tmp30;
REAL8 tmp48=-(tmp24*tmp31*tmp4*tmp47*tmp9);
REAL8 tmp49=tmp15+tmp48;
REAL8 tmp53=tmp29*tmp4;
REAL8 tmp54=tmp53+tmp6+tmp7+tmp8;
REAL8 tmp55=1/tmp54;
REAL8 tmp59=-(e3_y*tmp10*x->data[0]);
REAL8 tmp60=e3_x*tmp10*x->data[1];
REAL8 tmp61=tmp59+tmp60;
REAL8 tmp11=e3_z*tmp10*x->data[0];
REAL8 tmp12=-(e3_x*tmp10*x->data[2]);
REAL8 tmp13=tmp11+tmp12;
REAL8 tmp63=-(e3_z*tmp10*x->data[1]);
REAL8 tmp64=e3_y*tmp10*x->data[2];
REAL8 tmp65=tmp63+tmp64;
REAL8 tmp62=-(tmp10*tmp61*x->data[0]);
REAL8 tmp66=tmp10*tmp65*x->data[2];
REAL8 tmp67=tmp62+tmp66;
REAL8 tmp85=-3.*eta;
REAL8 tmp81=p->data[0]*tmp10*x->data[0];
REAL8 tmp82=p->data[1]*tmp10*x->data[1];
REAL8 tmp83=p->data[2]*tmp10*x->data[2];
REAL8 tmp84=tmp81+tmp82+tmp83;
REAL8 tmp86=26.+tmp85;
REAL8 tmp87=2.*eta*tmp37*tmp86;
REAL8 tmp88=6.*eta*tmp20;
REAL8 tmp89=1.+tmp87+tmp88;
REAL8 tmp90=log(tmp89);
REAL8 tmp91=1.+tmp90;
REAL8 tmp68=1/tmp31;
REAL8 tmp50=1/tmp49;
REAL8 tmp69=tmp10*tmp61*x->data[1];
REAL8 tmp70=-(tmp10*tmp13*x->data[2]);
REAL8 tmp71=tmp69+tmp70;
REAL8 tmp72=p->data[0]*tmp71;
REAL8 tmp73=tmp10*tmp13*x->data[0];
REAL8 tmp74=-(tmp10*tmp65*x->data[1]);
REAL8 tmp75=tmp73+tmp74;
REAL8 tmp76=p->data[2]*tmp75;
REAL8 tmp77=p->data[1]*tmp67;
REAL8 tmp78=tmp72+tmp76+tmp77;
REAL8 tmp93=4.+tmp85;
REAL8 tmp95=1./(tmp14*tmp14*tmp14*tmp14);
REAL8 tmp96=(tmp24*tmp24*tmp24*tmp24);
REAL8 tmp98=tmp91*tmp91;
REAL8 tmp99=(tmp47*tmp47*tmp47*tmp47);
REAL8 tmp101=p->data[2]*tmp61;
REAL8 tmp102=p->data[1]*tmp13;
REAL8 tmp103=p->data[0]*tmp65;
REAL8 tmp104=tmp101+tmp102+tmp103;
REAL8 tmp5=sqrt(tmp4);
REAL8 tmp80=sqrt(tmp9);
REAL8 tmp79=2.*tmp55*tmp67*tmp68*tmp78*tmp9;
REAL8 tmp92=2.*tmp24*tmp47*tmp55*tmp80*tmp84*tmp91*x->data[1];
REAL8 tmp105=2.*tmp104*tmp13*tmp50*tmp54*tmp68*tmp9;
REAL8 tmp121=tmp105+tmp79+tmp92;
REAL8 tmp94=pow(tmp9,2.5);
REAL8 tmp97=(tmp84*tmp84*tmp84);
REAL8 tmp126=eta*eta;
REAL8 tmp109=tmp84*tmp84;
REAL8 tmp107=tmp78*tmp78;
REAL8 tmp108=tmp107*tmp55*tmp68*tmp9;
REAL8 tmp110=tmp109*tmp24*tmp47*tmp55*tmp9*tmp91;
REAL8 tmp114=tmp104*tmp104;
REAL8 tmp115=tmp114*tmp50*tmp54*tmp68*tmp9;
REAL8 tmp135=-16.*eta;
REAL8 tmp136=21.*tmp126;
REAL8 tmp137=tmp135+tmp136;
REAL8 tmp142=0.+tmp108+tmp110+tmp115;
REAL8 tmp127=tmp24*tmp24;
REAL8 tmp128=(1.0/(tmp54*tmp54));
REAL8 tmp129=tmp47*tmp47;
REAL8 tmp138=tmp9*tmp9;
REAL8 tmp156=-6.*eta;
REAL8 tmp157=39.*tmp126;
REAL8 tmp158=tmp156+tmp157;
REAL8 tmp130=-1440.*tmp126*tmp127*tmp128*tmp129*tmp94*tmp97*tmp98*x->data[1];
REAL8 tmp131=103.*eta;
REAL8 tmp132=-60.*tmp126;
REAL8 tmp133=tmp131+tmp132;
REAL8 tmp134=2.*tmp121*tmp133*tmp80;
REAL8 tmp139=6.*tmp109*tmp121*tmp137*tmp138*tmp24*tmp47*tmp55*tmp91;
REAL8 tmp140=3.*eta;
REAL8 tmp141=23.+tmp140;
REAL8 tmp143=2.*eta*tmp121*tmp141*tmp142*tmp9;
REAL8 tmp144=-47.*eta;
REAL8 tmp145=54.*tmp126;
REAL8 tmp146=tmp137*tmp142*tmp80;
REAL8 tmp147=tmp144+tmp145+tmp146;
REAL8 tmp148=12.*tmp147*tmp24*tmp47*tmp55*tmp84*tmp9*tmp91*x->data[1];
REAL8 tmp149=tmp130+tmp134+tmp139+tmp143+tmp148;
REAL8 tmp151=3240.*tmp126*tmp127*tmp128*tmp129*tmp94*tmp97*tmp98*x->data[1];
REAL8 tmp152=-109.*eta;
REAL8 tmp153=51.*tmp126;
REAL8 tmp154=tmp152+tmp153;
REAL8 tmp155=4.*tmp121*tmp154*tmp80;
REAL8 tmp159=-6.*tmp109*tmp121*tmp138*tmp158*tmp24*tmp47*tmp55*tmp91;
REAL8 tmp160=-90.*eta*tmp121*tmp142*tmp9;
REAL8 tmp161=16.*eta;
REAL8 tmp162=147.*tmp126;
REAL8 tmp163=tmp142*tmp158*tmp80;
REAL8 tmp164=tmp161+tmp162+tmp163;
REAL8 tmp165=-12.*tmp164*tmp24*tmp47*tmp55*tmp84*tmp9*tmp91*x->data[1];
REAL8 tmp166=tmp151+tmp155+tmp159+tmp160+tmp165;
REAL8 tmp192=sqrt(tmp54);
REAL8 tmp119=-72.*sigmaKerr->data[0]*tmp24*tmp47*tmp55*tmp84*tmp9*tmp91*x->data[1];
REAL8 tmp120=-60.*sigmaStar->data[0]*tmp24*tmp47*tmp55*tmp84*tmp9*tmp91*x->data[1];
REAL8 tmp122=3.*sigmaKerr->data[0]*tmp121*tmp80;
REAL8 tmp123=4.*sigmaStar->data[0]*tmp121*tmp80;
REAL8 tmp124=tmp119+tmp120+tmp122+tmp123;
REAL8 tmp125=0.08333333333333333*eta*tmp10*tmp124;
REAL8 tmp150=-0.013888888888888888*sigmaStar->data[0]*tmp149*tmp20;
REAL8 tmp167=0.006944444444444444*sigmaKerr->data[0]*tmp166*tmp20;
REAL8 tmp168=tmp125+tmp150+tmp167;
REAL8 tmp169=e3_x*tmp168;
REAL8 tmp170=-72.*sigmaKerr->data[1]*tmp24*tmp47*tmp55*tmp84*tmp9*tmp91*x->data[1];
REAL8 tmp171=-60.*sigmaStar->data[1]*tmp24*tmp47*tmp55*tmp84*tmp9*tmp91*x->data[1];
REAL8 tmp172=3.*sigmaKerr->data[1]*tmp121*tmp80;
REAL8 tmp173=4.*sigmaStar->data[1]*tmp121*tmp80;
REAL8 tmp174=tmp170+tmp171+tmp172+tmp173;
REAL8 tmp175=0.08333333333333333*eta*tmp10*tmp174;
REAL8 tmp176=-0.013888888888888888*sigmaStar->data[1]*tmp149*tmp20;
REAL8 tmp177=0.006944444444444444*sigmaKerr->data[1]*tmp166*tmp20;
REAL8 tmp178=tmp175+tmp176+tmp177;
REAL8 tmp179=e3_y*tmp178;
REAL8 tmp180=-72.*sigmaKerr->data[2]*tmp24*tmp47*tmp55*tmp84*tmp9*tmp91*x->data[1];
REAL8 tmp181=-60.*sigmaStar->data[2]*tmp24*tmp47*tmp55*tmp84*tmp9*tmp91*x->data[1];
REAL8 tmp182=3.*sigmaKerr->data[2]*tmp121*tmp80;
REAL8 tmp183=4.*sigmaStar->data[2]*tmp121*tmp80;
REAL8 tmp184=tmp180+tmp181+tmp182+tmp183;
REAL8 tmp185=0.08333333333333333*eta*tmp10*tmp184;
REAL8 tmp186=-0.013888888888888888*sigmaStar->data[2]*tmp149*tmp20;
REAL8 tmp187=0.006944444444444444*sigmaKerr->data[2]*tmp166*tmp20;
REAL8 tmp188=tmp185+tmp186+tmp187;
REAL8 tmp189=e3_z*tmp188;
REAL8 tmp190=tmp169+tmp179+tmp189;
REAL8 tmp193=tmp24*tmp47*tmp9;
REAL8 tmp194=sqrt(tmp193);
REAL8 tmp195=-tmp194;
REAL8 tmp196=tmp24*tmp47*tmp50*tmp54*tmp9;
REAL8 tmp197=sqrt(tmp196);
REAL8 tmp198=tmp192*tmp197;
REAL8 tmp199=tmp195+tmp198;
REAL8 tmp200=1.+tmp108+tmp110+tmp115;
REAL8 tmp207=sqrt(tmp9*tmp9*tmp9);
REAL8 tmp111=(tmp9*tmp9*tmp9);
REAL8 tmp112=(tmp84*tmp84*tmp84*tmp84);
REAL8 tmp219=tmp142*tmp142;
REAL8 tmp214=27.*eta;
REAL8 tmp215=-353.+tmp214;
REAL8 tmp216=2.*eta*tmp215;
REAL8 tmp217=-360.*tmp111*tmp112*tmp126*tmp127*tmp128*tmp129*tmp98;
REAL8 tmp218=2.*tmp133*tmp142*tmp80;
REAL8 tmp220=eta*tmp141*tmp219*tmp9;
REAL8 tmp221=6.*tmp109*tmp147*tmp207*tmp24*tmp47*tmp55*tmp91;
REAL8 tmp222=tmp216+tmp217+tmp218+tmp220+tmp221;
REAL8 tmp224=8.+tmp140;
REAL8 tmp225=-112.*eta*tmp224;
REAL8 tmp226=810.*tmp111*tmp112*tmp126*tmp127*tmp128*tmp129*tmp98;
REAL8 tmp227=4.*tmp142*tmp154*tmp80;
REAL8 tmp228=-45.*eta*tmp219*tmp9;
REAL8 tmp229=-6.*tmp109*tmp164*tmp207*tmp24*tmp47*tmp55*tmp91;
REAL8 tmp230=tmp225+tmp226+tmp227+tmp228+tmp229;
REAL8 tmp201=1./sqrt(tmp200);
REAL8 tmp204=coeffs->d1v2*eta*sigmaKerr->data[0]*tmp37;
REAL8 tmp205=-8.*sigmaKerr->data[0];
REAL8 tmp206=14.*sigmaStar->data[0];
REAL8 tmp208=-36.*sigmaKerr->data[0]*tmp109*tmp207*tmp24*tmp47*tmp55*tmp91;
REAL8 tmp209=-30.*sigmaStar->data[0]*tmp109*tmp207*tmp24*tmp47*tmp55*tmp91;
REAL8 tmp210=3.*sigmaKerr->data[0]*tmp142*tmp80;
REAL8 tmp211=4.*sigmaStar->data[0]*tmp142*tmp80;
REAL8 tmp212=tmp205+tmp206+tmp208+tmp209+tmp210+tmp211;
REAL8 tmp213=0.08333333333333333*eta*tmp10*tmp212;
REAL8 tmp223=-0.013888888888888888*sigmaStar->data[0]*tmp20*tmp222;
REAL8 tmp231=0.006944444444444444*sigmaKerr->data[0]*tmp20*tmp230;
REAL8 tmp232=sigmaStar->data[0]+tmp204+tmp213+tmp223+tmp231;
REAL8 tmp233=e3_x*tmp232;
REAL8 tmp234=coeffs->d1v2*eta*sigmaKerr->data[1]*tmp37;
REAL8 tmp235=-8.*sigmaKerr->data[1];
REAL8 tmp236=14.*sigmaStar->data[1];
REAL8 tmp237=-36.*sigmaKerr->data[1]*tmp109*tmp207*tmp24*tmp47*tmp55*tmp91;
REAL8 tmp238=-30.*sigmaStar->data[1]*tmp109*tmp207*tmp24*tmp47*tmp55*tmp91;
REAL8 tmp239=3.*sigmaKerr->data[1]*tmp142*tmp80;
REAL8 tmp240=4.*sigmaStar->data[1]*tmp142*tmp80;
REAL8 tmp241=tmp235+tmp236+tmp237+tmp238+tmp239+tmp240;
REAL8 tmp242=0.08333333333333333*eta*tmp10*tmp241;
REAL8 tmp243=-0.013888888888888888*sigmaStar->data[1]*tmp20*tmp222;
REAL8 tmp244=0.006944444444444444*sigmaKerr->data[1]*tmp20*tmp230;
REAL8 tmp245=sigmaStar->data[1]+tmp234+tmp242+tmp243+tmp244;
REAL8 tmp246=e3_y*tmp245;
REAL8 tmp247=coeffs->d1v2*eta*sigmaKerr->data[2]*tmp37;
REAL8 tmp248=-8.*sigmaKerr->data[2];
REAL8 tmp249=14.*sigmaStar->data[2];
REAL8 tmp250=-36.*sigmaKerr->data[2]*tmp109*tmp207*tmp24*tmp47*tmp55*tmp91;
REAL8 tmp251=-30.*sigmaStar->data[2]*tmp109*tmp207*tmp24*tmp47*tmp55*tmp91;
REAL8 tmp252=3.*sigmaKerr->data[2]*tmp142*tmp80;
REAL8 tmp253=4.*sigmaStar->data[2]*tmp142*tmp80;
REAL8 tmp254=tmp248+tmp249+tmp250+tmp251+tmp252+tmp253;
REAL8 tmp255=0.08333333333333333*eta*tmp10*tmp254;
REAL8 tmp256=-0.013888888888888888*sigmaStar->data[2]*tmp20*tmp222;
REAL8 tmp257=0.006944444444444444*sigmaKerr->data[2]*tmp20*tmp230;
REAL8 tmp258=sigmaStar->data[2]+tmp247+tmp255+tmp256+tmp257;
REAL8 tmp259=e3_z*tmp258;
REAL8 tmp260=tmp233+tmp246+tmp259;
REAL8 tmp282=sqrt(tmp200);
REAL8 tmp266=tmp10*tmp168*x->data[0];
REAL8 tmp267=tmp10*tmp178*x->data[1];
REAL8 tmp268=tmp10*tmp188*x->data[2];
REAL8 tmp269=tmp266+tmp267+tmp268;
REAL8 tmp285=tmp54*tmp54;
REAL8 tmp270=tmp10*tmp232*x->data[0];
REAL8 tmp271=tmp10*tmp245*x->data[1];
REAL8 tmp272=tmp10*tmp258*x->data[2];
REAL8 tmp273=tmp270+tmp271+tmp272;
REAL8 tmp303=tmp24*tmp47*tmp9*tmp91;
REAL8 tmp304=sqrt(tmp303);
REAL8 tmp315=tmp232*tmp65;
REAL8 tmp316=tmp13*tmp245;
REAL8 tmp317=tmp258*tmp61;
REAL8 tmp318=tmp315+tmp316+tmp317;
REAL8 tmp320=tmp232*tmp71;
REAL8 tmp321=tmp245*tmp67;
REAL8 tmp322=tmp258*tmp75;
REAL8 tmp323=tmp320+tmp321+tmp322;
REAL8 tmp277=sqrt(tmp4*tmp4*tmp4);
REAL8 tmp278=(1.0/sqrt(tmp54*tmp54*tmp54));
REAL8 tmp279=1./sqrt(tmp193);
REAL8 tmp280=1./sqrt(tmp196);
REAL8 tmp281=(1.0/(tmp49*tmp49));
REAL8 tmp283=1.+tmp282;
REAL8 tmp286=-(tmp114*tmp138*tmp24*tmp285*tmp47*tmp50);
REAL8 tmp287=tmp107*tmp9;
REAL8 tmp288=1.+tmp108+tmp110+tmp115+tmp282;
REAL8 tmp289=-(tmp288*tmp31*tmp54);
REAL8 tmp290=tmp287+tmp289;
REAL8 tmp291=tmp24*tmp290*tmp47*tmp9;
REAL8 tmp292=tmp286+tmp291;
REAL8 tmp327=-(tmp104*tmp192*tmp197*tmp318*tmp80);
REAL8 tmp328=tmp194*tmp323*tmp78*tmp80;
REAL8 tmp329=tmp327+tmp328;
REAL8 tmp203=(1.0/sqrt(tmp200*tmp200*tmp200));
REAL8 tmp284=1/tmp283;
REAL8 tmp335=tmp273*tmp292;
REAL8 tmp336=-(tmp194*tmp304*tmp329*tmp84);
REAL8 tmp337=tmp335+tmp336;
REAL8 tmp342=coeffs->k5l*tmp42;
REAL8 tmp343=coeffs->k5+tmp342;
REAL8 tmp305=tmp168*tmp65;
REAL8 tmp306=tmp13*tmp178;
REAL8 tmp307=tmp188*tmp61;
REAL8 tmp308=tmp305+tmp306+tmp307;
REAL8 tmp310=tmp168*tmp71;
REAL8 tmp311=tmp178*tmp67;
REAL8 tmp312=tmp188*tmp75;
REAL8 tmp313=tmp310+tmp311+tmp312;
REAL8 tmp296=0.5*tmp121*tmp201;
REAL8 tmp297=tmp105+tmp296+tmp79+tmp92;
REAL8 tmp333=1/tmp200;
REAL8 tmp340=2.*tmp49*tmp5;
REAL8 tmp341=4.*tmp14*tmp80;
REAL8 tmp344=1.*tmp33*tmp343;
REAL8 tmp345=1.+tmp344+tmp36+tmp38+tmp39+tmp40;
REAL8 tmp346=1/tmp345;
REAL8 tmp347=2.*coeffs->k2;
REAL8 tmp348=3.*coeffs->k3;
REAL8 tmp349=4.*coeffs->k4;
REAL8 tmp350=5.*tmp10*tmp343;
REAL8 tmp351=tmp349+tmp350;
REAL8 tmp352=1.*tmp10*tmp351;
REAL8 tmp353=tmp348+tmp352;
REAL8 tmp354=1.*tmp10*tmp353;
REAL8 tmp355=tmp347+tmp354;
REAL8 tmp356=1.*tmp10*tmp355;
REAL8 tmp357=coeffs->k1+tmp356;
REAL8 tmp358=-(eta*tmp24*tmp346*tmp357);
REAL8 tmp359=2.*tmp24*tmp47*tmp80;
REAL8 tmp360=1.*tmp22;
REAL8 tmp361=1.*tmp10*tmp4;
REAL8 tmp362=tmp360+tmp361;
REAL8 tmp363=-2.*tmp362*tmp47;
REAL8 tmp364=tmp358+tmp359+tmp363;
REAL8 tmp365=-(tmp31*tmp364*tmp4);
REAL8 tmp366=tmp341+tmp365;
REAL8 tmp367=-2.*tmp366*tmp5*tmp80;
REAL8 tmp368=tmp340+tmp367;
REAL8 tmp334=(1.0/(tmp283*tmp283));
REAL8 tmp385=-(tmp104*tmp192*tmp194*tmp197*tmp318*tmp78*tmp9);
REAL8 tmp386=tmp114*tmp138*tmp24*tmp285*tmp323*tmp47*tmp50;
REAL8 tmp387=tmp273*tmp304*tmp78*tmp80*tmp84;
REAL8 tmp388=-(tmp109*tmp24*tmp323*tmp47*tmp9*tmp91);
REAL8 tmp389=tmp288*tmp323*tmp54;
REAL8 tmp390=tmp387+tmp388+tmp389;
REAL8 tmp391=tmp24*tmp31*tmp390*tmp47*tmp9;
REAL8 tmp392=tmp385+tmp386+tmp391;
REAL8 tmp52=1/tmp24;
REAL8 tmp56=1/tmp47;
REAL8 tmp396=1./sqrt(tmp54);
REAL8 tmp397=-(tmp24*tmp47*tmp9);
REAL8 tmp398=tmp1+tmp2+tmp3+tmp397+tmp6+tmp7+tmp8;
REAL8 tmp399=2.*tmp282;
REAL8 tmp400=1.+tmp399;
REAL8 tmp404=tmp127*tmp129*tmp138*tmp91;
REAL8 tmp405=1./sqrt(tmp404);
REAL8 tmp406=-2.*tmp24*tmp47*tmp9;
REAL8 tmp407=tmp304*tmp364;
REAL8 tmp408=tmp406+tmp407;
REAL8 tmp412=tmp55*tmp80;
REAL8 tmp413=1./sqrt(tmp303);
REAL8 tmp414=-tmp413;
REAL8 tmp415=tmp412+tmp414;
REAL8 tmp423=-4.*tmp207*tmp24*tmp47;
REAL8 tmp424=tmp14*tmp364;
REAL8 tmp425=tmp423+tmp424;
REAL8 tmp426=0.5*tmp14*tmp20*tmp425*tmp50*tmp52*tmp56;
REAL8 tmp427=tmp412+tmp426;
REAL8 tmp419=-(tmp28*tmp4*tmp55);
REAL8 tmp420=tmp14*tmp28*tmp398*tmp4*tmp50*tmp55;
REAL8 tmp421=tmp419+tmp420;
REAL8 tmp418=tmp415*tmp78*tmp80;
REAL8 tmp422=tmp31*tmp421*tmp84;
REAL8 tmp428=-(tmp427*tmp78*tmp80);
REAL8 tmp429=tmp418+tmp422+tmp428;
REAL8 tmp417=-(tmp28*tmp31*tmp4*tmp55*tmp84);
REAL8 tmp430=tmp282*tmp429;
REAL8 tmp431=tmp417+tmp430;
REAL8 tmp57=tmp20*tmp49*tmp52*tmp55*tmp56;
REAL8 tmp58=1./sqrt(tmp57);
REAL8 tmp113=2.*eta*tmp111*tmp112*tmp93*tmp95*tmp96*tmp98*tmp99;
REAL8 tmp116=1.+tmp108+tmp110+tmp113+tmp115;
REAL8 tmp395=1/tmp288;
REAL8 tmp453=-(tmp104*tmp14*tmp194*tmp197*tmp273*tmp28*tmp31*tmp396*tmp398*tmp4*tmp400*tmp50*tmp80);
REAL8 tmp454=-0.5*tmp104*tmp192*tmp197*tmp283*tmp323*tmp405*tmp408*tmp80;
REAL8 tmp455=tmp194*tmp318*tmp415*tmp78*tmp80;
REAL8 tmp456=tmp194*tmp318*tmp431;
REAL8 tmp457=tmp104*tmp192*tmp197*tmp323*tmp400*tmp427*tmp80;
REAL8 tmp458=tmp455+tmp456+tmp457;
REAL8 tmp459=tmp194*tmp458;
REAL8 tmp460=tmp454+tmp459;
REAL8 tmp461=tmp304*tmp460;
REAL8 tmp462=tmp453+tmp461;
REAL8 d000010=(1.*eta*(-0.5*(2.*tmp168*tmp232+2.*tmp178*tmp245+2.*tmp188*tmp258-6.*tmp269*tmp273)*tmp37+1.*tmp121*tmp203*tmp207*tmp24*tmp277*tmp278*tmp279*tmp28*tmp280*tmp281*tmp284*tmp337*tmp47+1.*tmp121*tmp207*tmp24*tmp277*tmp278*tmp279*tmp28*tmp280*tmp281*tmp333*tmp334*tmp337*tmp47-0.25*tmp121*tmp203*tmp278*tmp279*tmp280*tmp281*tmp284*tmp304*tmp368*tmp392*tmp68-0.25*tmp121*tmp278*tmp279*tmp280*tmp281*tmp304*tmp333*tmp334*tmp368*tmp392*tmp68+2.*tmp190*tmp5*tmp50*tmp80+tmp104*tmp190*tmp192*tmp199*tmp201*tmp50*tmp68*tmp80+tmp13*tmp192*tmp199*tmp201*tmp260*tmp50*tmp68*tmp80-0.5*tmp104*tmp121*tmp192*tmp199*tmp203*tmp260*tmp50*tmp68*tmp80+2.*tmp13*tmp5*tmp50*tmp9-2.*tmp201*tmp207*tmp24*tmp277*tmp278*tmp279*tmp28*tmp280*tmp281*tmp284*tmp47*(tmp269*tmp292-tmp194*tmp304*(-(tmp104*tmp192*tmp197*tmp308*tmp80)-tmp13*tmp192*tmp197*tmp318*tmp80+tmp194*tmp323*tmp67*tmp80+tmp194*tmp313*tmp78*tmp80)*tmp84+tmp273*(-2.*tmp104*tmp13*tmp138*tmp24*tmp285*tmp47*tmp50+tmp24*tmp47*tmp9*(-(tmp297*tmp31*tmp54)+2.*tmp67*tmp78*tmp9))-tmp10*tmp194*tmp304*tmp329*x->data[1])+0.5*tmp201*tmp278*tmp279*tmp280*tmp281*tmp284*tmp304*tmp368*tmp68*(tmp114*tmp138*tmp24*tmp285*tmp313*tmp47*tmp50+2.*tmp104*tmp13*tmp138*tmp24*tmp285*tmp323*tmp47*tmp50-tmp104*tmp192*tmp194*tmp197*tmp318*tmp67*tmp9-tmp104*tmp192*tmp194*tmp197*tmp308*tmp78*tmp9-tmp13*tmp192*tmp194*tmp197*tmp318*tmp78*tmp9+tmp24*tmp31*tmp47*tmp9*(tmp288*tmp313*tmp54+tmp297*tmp323*tmp54+tmp273*tmp304*tmp67*tmp80*tmp84+tmp269*tmp304*tmp78*tmp80*tmp84-tmp109*tmp24*tmp313*tmp47*tmp9*tmp91+tmp273*tmp304*tmp78*x->data[1]-2.*tmp24*tmp323*tmp47*tmp80*tmp84*tmp91*x->data[1]))+tmp197*tmp20*tmp395*tmp52*tmp55*tmp56*tmp68*(-(tmp104*tmp121*tmp14*tmp194*tmp197*tmp201*tmp273*tmp28*tmp31*tmp396*tmp398*tmp4*tmp50*tmp80)-tmp104*tmp14*tmp194*tmp197*tmp269*tmp28*tmp31*tmp396*tmp398*tmp4*tmp400*tmp50*tmp80-tmp13*tmp14*tmp194*tmp197*tmp273*tmp28*tmp31*tmp396*tmp398*tmp4*tmp400*tmp50*tmp80+tmp304*(-0.5*tmp104*tmp192*tmp197*tmp283*tmp313*tmp405*tmp408*tmp80-0.25*tmp104*tmp121*tmp192*tmp197*tmp201*tmp323*tmp405*tmp408*tmp80-0.5*tmp13*tmp192*tmp197*tmp283*tmp323*tmp405*tmp408*tmp80+tmp194*(tmp194*tmp308*tmp431+1.*tmp104*tmp121*tmp192*tmp197*tmp201*tmp323*tmp427*tmp80+tmp104*tmp192*tmp197*tmp313*tmp400*tmp427*tmp80+tmp13*tmp192*tmp197*tmp323*tmp400*tmp427*tmp80+tmp194*tmp318*tmp415*tmp67*tmp80+tmp194*tmp308*tmp415*tmp78*tmp80+tmp194*tmp318*(0.5*tmp121*tmp201*tmp429-tmp10*tmp28*tmp31*tmp4*tmp55*x->data[1]+tmp282*(tmp415*tmp67*tmp80-tmp427*tmp67*tmp80+tmp10*tmp31*tmp421*x->data[1])))))-tmp197*tmp20*tmp297*tmp462*tmp52*tmp55*tmp56*tmp68*(1.0/(tmp288*tmp288))+(0.5*tmp58*(tmp105+tmp79+tmp92+8.*eta*tmp93*tmp94*tmp95*tmp96*tmp97*tmp98*tmp99*x->data[1]))/sqrt(tmp116)))/sqrt(1.+2.*eta*(-1.-2.*tmp201*tmp207*tmp24*tmp277*tmp278*tmp279*tmp28*tmp280*tmp281*tmp284*tmp337*tmp47+0.5*tmp201*tmp278*tmp279*tmp280*tmp281*tmp284*tmp304*tmp368*tmp392*tmp68+tmp197*tmp20*tmp395*tmp462*tmp52*tmp55*tmp56*tmp68+2.*tmp260*tmp5*tmp50*tmp80+tmp104*tmp192*tmp199*tmp201*tmp260*tmp50*tmp68*tmp80+2.*tmp104*tmp5*tmp50*tmp9+coeffs->dheffSSv2*eta*tmp35*(s1Vec->data[0]*s1Vec->data[0]+s1Vec->data[1]*s1Vec->data[1]+s1Vec->data[2]*s1Vec->data[2]+s2Vec->data[0]*s2Vec->data[0]+s2Vec->data[1]*s2Vec->data[1]+s2Vec->data[2]*s2Vec->data[2])-0.5*tmp37*(tmp232*tmp232+tmp245*tmp245+tmp258*tmp258-3.*(tmp273*tmp273))+tmp58*sqrt(tmp116)));
