REAL8 tmp4=sigmaKerr->data[2]*sigmaKerr->data[2];
REAL8 tmp5=sqrt(tmp4);
REAL8 tmp13=coeffs->KK*eta;
REAL8 tmp14=-1.+tmp13;
REAL8 tmp6=1/x->data[0];
REAL8 tmp10=x->data[0]*x->data[0];
REAL8 tmp17=(1.0/(x->data[0]*x->data[0]));
REAL8 tmp1=1.*e3z;
REAL8 tmp3=0.+tmp1;
REAL8 tmp11=tmp10+tmp4;
REAL8 tmp12=tmp11*tmp11;
REAL8 tmp15=(1.0/(tmp14*tmp14));
REAL8 tmp16=1.*tmp15;
REAL8 tmp18=1.*tmp17*tmp4;
REAL8 tmp19=1/tmp14;
REAL8 tmp20=2.*tmp19*tmp6;
REAL8 tmp21=tmp16+tmp18+tmp20;
REAL8 tmp22=coeffs->k0*eta;
REAL8 tmp23=1./(x->data[0]*x->data[0]*x->data[0]*x->data[0]);
REAL8 tmp24=1.*coeffs->k4*tmp23;
REAL8 tmp25=1./(x->data[0]*x->data[0]*x->data[0]);
REAL8 tmp26=1.*coeffs->k3*tmp25;
REAL8 tmp27=1.*coeffs->k2*tmp17;
REAL8 tmp28=1.*coeffs->k1*tmp6;
REAL8 tmp29=pow(x->data[0],-5.);
REAL8 tmp30=1.*tmp6;
REAL8 tmp31=log(tmp30);
REAL8 tmp32=coeffs->k5l*tmp31;
REAL8 tmp33=coeffs->k5+tmp32;
REAL8 tmp34=1.*tmp29*tmp33;
REAL8 tmp35=1.+tmp24+tmp26+tmp27+tmp28+tmp34;
REAL8 tmp36=log(tmp35);
REAL8 tmp37=eta*tmp36;
REAL8 tmp38=1.+tmp22+tmp37;
REAL8 tmp39=-(tmp10*tmp21*tmp38*tmp4);
REAL8 tmp40=tmp12+tmp39;
REAL8 tmp41=1/tmp40;
REAL8 tmp46=0.+tmp10;
REAL8 tmp43=0.+p->data[1];
REAL8 tmp44=tmp3*tmp43;
REAL8 tmp45=0.+tmp44;
REAL8 tmp48=1/tmp46;
REAL8 tmp52=-3.*eta;
REAL8 tmp54=1.*p->data[0];
REAL8 tmp55=0.+tmp54;
REAL8 tmp60=26.+tmp52;
REAL8 tmp61=2.*eta*tmp25*tmp60;
REAL8 tmp62=6.*eta*tmp17;
REAL8 tmp63=1.+tmp61+tmp62;
REAL8 tmp64=log(tmp63);
REAL8 tmp65=1.+tmp64;
REAL8 tmp66=tmp21*tmp21;
REAL8 tmp67=(x->data[0]*x->data[0]*x->data[0]*x->data[0]);
REAL8 tmp68=tmp38*tmp38;
REAL8 tmp69=tmp65*tmp66*tmp67*tmp68;
REAL8 tmp7=0.;
REAL8 tmp8=2.*tmp5*x->data[0];
REAL8 tmp9=tmp7+tmp8;
REAL8 tmp84=(x->data[0]*x->data[0]*x->data[0]);
REAL8 tmp90=eta*eta;
REAL8 tmp70=1./sqrt(tmp69);
REAL8 tmp71=1/tmp11;
REAL8 tmp72=sqrt(tmp69);
REAL8 tmp73=tmp71*tmp72;
REAL8 tmp74=-1.+tmp73;
REAL8 tmp75=-(tmp11*tmp55*tmp70*tmp74);
REAL8 tmp76=p->data[0]+tmp75;
REAL8 tmp77=1.*tmp76;
REAL8 tmp78=0.+tmp77;
REAL8 tmp79=tmp78*tmp78;
REAL8 tmp58=tmp45*tmp45;
REAL8 tmp59=1.*tmp10*tmp41*tmp46*tmp58;
REAL8 tmp80=1.*tmp10*tmp21*tmp38*tmp48*tmp65*tmp79;
REAL8 tmp97=pow(x->data[0],6.);
REAL8 tmp99=0.+tmp59+tmp80;
REAL8 tmp118=sqrt(tmp46);
REAL8 tmp85=6.*sigmaKerr->data[2]*tmp3*tmp41*tmp45*tmp46*tmp84;
REAL8 tmp86=8.*sigmaStar->data[2]*tmp3*tmp41*tmp45*tmp46*tmp84;
REAL8 tmp87=tmp85+tmp86;
REAL8 tmp88=0.08333333333333333*eta*tmp6*tmp87;
REAL8 tmp89=-109.*eta;
REAL8 tmp91=51.*tmp90;
REAL8 tmp92=tmp89+tmp91;
REAL8 tmp93=8.*tmp3*tmp41*tmp45*tmp46*tmp84*tmp92;
REAL8 tmp94=-6.*eta;
REAL8 tmp95=39.*tmp90;
REAL8 tmp96=tmp94+tmp95;
REAL8 tmp98=-12.*tmp21*tmp3*tmp38*tmp41*tmp45*tmp65*tmp79*tmp96*tmp97;
REAL8 tmp100=-180.*eta*tmp3*tmp41*tmp45*tmp46*tmp67*tmp99;
REAL8 tmp101=tmp100+tmp93+tmp98;
REAL8 tmp102=0.006944444444444444*sigmaKerr->data[2]*tmp101*tmp17;
REAL8 tmp103=103.*eta;
REAL8 tmp104=-60.*tmp90;
REAL8 tmp105=tmp103+tmp104;
REAL8 tmp106=-4.*tmp105*tmp3*tmp41*tmp45*tmp46*tmp84;
REAL8 tmp107=-16.*eta;
REAL8 tmp108=21.*tmp90;
REAL8 tmp109=tmp107+tmp108;
REAL8 tmp110=-12.*tmp109*tmp21*tmp3*tmp38*tmp41*tmp45*tmp65*tmp79*tmp97;
REAL8 tmp111=3.*eta;
REAL8 tmp112=23.+tmp111;
REAL8 tmp113=-4.*eta*tmp112*tmp3*tmp41*tmp45*tmp46*tmp67*tmp99;
REAL8 tmp114=tmp106+tmp110+tmp113;
REAL8 tmp115=0.013888888888888888*sigmaStar->data[2]*tmp114*tmp17;
REAL8 tmp116=tmp102+tmp115+tmp88;
REAL8 tmp141=(1.0/(tmp46*tmp46));
REAL8 tmp142=tmp65*tmp65;
REAL8 tmp143=(tmp78*tmp78*tmp78*tmp78);
REAL8 tmp146=tmp99*tmp99;
REAL8 tmp119=tmp10*tmp21*tmp38;
REAL8 tmp120=sqrt(tmp119);
REAL8 tmp121=-tmp120;
REAL8 tmp122=tmp10*tmp21*tmp38*tmp41*tmp46;
REAL8 tmp123=sqrt(tmp122);
REAL8 tmp124=1.*tmp118*tmp123;
REAL8 tmp125=tmp121+tmp124;
REAL8 tmp126=1.+tmp59+tmp80;
REAL8 tmp129=1.*coeffs->d1v2*eta*sigmaKerr->data[2]*tmp25;
REAL8 tmp130=-8.*sigmaKerr->data[2];
REAL8 tmp131=14.*sigmaStar->data[2];
REAL8 tmp132=-36.*sigmaKerr->data[2]*tmp21*tmp38*tmp48*tmp65*tmp79*tmp84;
REAL8 tmp133=-30.*sigmaStar->data[2]*tmp21*tmp38*tmp48*tmp65*tmp79*tmp84;
REAL8 tmp134=3.*sigmaKerr->data[2]*tmp99*x->data[0];
REAL8 tmp135=4.*sigmaStar->data[2]*tmp99*x->data[0];
REAL8 tmp136=tmp130+tmp131+tmp132+tmp133+tmp134+tmp135;
REAL8 tmp137=0.08333333333333333*eta*tmp136*tmp6;
REAL8 tmp138=27.*eta;
REAL8 tmp139=-353.+tmp138;
REAL8 tmp140=-2.*eta*tmp139;
REAL8 tmp144=360.*tmp141*tmp142*tmp143*tmp66*tmp68*tmp90*tmp97;
REAL8 tmp145=-2.*tmp105*tmp99*x->data[0];
REAL8 tmp147=-(eta*tmp10*tmp112*tmp146);
REAL8 tmp148=-47.*eta;
REAL8 tmp149=54.*tmp90;
REAL8 tmp150=tmp109*tmp99*x->data[0];
REAL8 tmp151=tmp148+tmp149+tmp150;
REAL8 tmp152=-6.*tmp151*tmp21*tmp38*tmp48*tmp65*tmp79*tmp84;
REAL8 tmp153=tmp140+tmp144+tmp145+tmp147+tmp152;
REAL8 tmp154=0.013888888888888888*sigmaStar->data[2]*tmp153*tmp17;
REAL8 tmp155=8.+tmp111;
REAL8 tmp156=-112.*eta*tmp155;
REAL8 tmp157=810.*tmp141*tmp142*tmp143*tmp66*tmp68*tmp90*tmp97;
REAL8 tmp158=4.*tmp92*tmp99*x->data[0];
REAL8 tmp159=-45.*eta*tmp10*tmp146;
REAL8 tmp160=16.*eta;
REAL8 tmp161=147.*tmp90;
REAL8 tmp162=tmp96*tmp99*x->data[0];
REAL8 tmp163=tmp160+tmp161+tmp162;
REAL8 tmp164=-6.*tmp163*tmp21*tmp38*tmp48*tmp65*tmp79*tmp84;
REAL8 tmp165=tmp156+tmp157+tmp158+tmp159+tmp164;
REAL8 tmp166=0.006944444444444444*sigmaKerr->data[2]*tmp165*tmp17;
REAL8 tmp167=0.+sigmaStar->data[2]+tmp129+tmp137+tmp154+tmp166;
REAL8 tmp127=1./sqrt(tmp126);
REAL8 tmp172=e3z*tmp167;
REAL8 tmp173=0.+tmp172;
REAL8 tmp170=(1.0/(tmp40*tmp40));
REAL8 tmp214=tmp46*tmp46;
REAL8 tmp212=1.*tmp3;
REAL8 tmp213=0.+tmp212;
REAL8 tmp209=sqrt(tmp126);
REAL8 tmp216=tmp167*tmp213;
REAL8 tmp217=0.+tmp216;
REAL8 tmp177=1./sqrt(tmp119);
REAL8 tmp178=tmp10*tmp21*tmp38*tmp65;
REAL8 tmp179=sqrt(tmp178);
REAL8 tmp180=1./sqrt(tmp122);
REAL8 tmp181=2.*tmp5;
REAL8 tmp182=0.;
REAL8 tmp183=0.+tmp181+tmp182;
REAL8 tmp184=tmp183*tmp40;
REAL8 tmp185=-4.*tmp11*x->data[0];
REAL8 tmp186=1/tmp35;
REAL8 tmp187=2.*coeffs->k2;
REAL8 tmp188=3.*coeffs->k3;
REAL8 tmp189=4.*coeffs->k4;
REAL8 tmp190=5.*tmp33*tmp6;
REAL8 tmp191=tmp189+tmp190;
REAL8 tmp192=1.*tmp191*tmp6;
REAL8 tmp193=tmp188+tmp192;
REAL8 tmp194=1.*tmp193*tmp6;
REAL8 tmp195=tmp187+tmp194;
REAL8 tmp196=1.*tmp195*tmp6;
REAL8 tmp197=coeffs->k1+tmp196;
REAL8 tmp198=-(eta*tmp186*tmp197*tmp21);
REAL8 tmp199=1.*tmp19;
REAL8 tmp200=1.*tmp4*tmp6;
REAL8 tmp201=tmp199+tmp200;
REAL8 tmp202=-2.*tmp201*tmp38;
REAL8 tmp203=2.*tmp21*tmp38*x->data[0];
REAL8 tmp204=tmp198+tmp202+tmp203;
REAL8 tmp205=1.*tmp204*tmp4;
REAL8 tmp206=tmp185+tmp205;
REAL8 tmp207=tmp206*tmp9;
REAL8 tmp208=tmp184+tmp207;
REAL8 tmp210=1.+tmp209;
REAL8 tmp220=1.+tmp209+tmp59+tmp80;
REAL8 tmp230=1./sqrt(tmp46);
REAL8 tmp231=1./(tmp40*tmp40*tmp40);
REAL8 tmp171=(1.0/sqrt(tmp126*tmp126*tmp126));
REAL8 tmp211=1/tmp210;
REAL8 tmp234=1.*tmp21*tmp214*tmp217*tmp38*tmp41*tmp58*tmp67;
REAL8 tmp235=-(tmp10*tmp21*tmp217*tmp38*tmp65*tmp79);
REAL8 tmp236=tmp217*tmp220*tmp46;
REAL8 tmp237=0.+tmp235+tmp236;
REAL8 tmp238=1.*tmp10*tmp21*tmp237*tmp38;
REAL8 tmp239=0.+tmp234+tmp238;
REAL8 tmp47=1/tmp21;
REAL8 tmp49=1/tmp38;
REAL8 tmp169=sqrt(tmp46*tmp46*tmp46);
REAL8 tmp243=-2.*tmp10*tmp21*tmp38;
REAL8 tmp244=tmp179*tmp204;
REAL8 tmp245=tmp243+tmp244;
REAL8 tmp249=1.*tmp48*x->data[0];
REAL8 tmp250=-4.*tmp21*tmp38*tmp84;
REAL8 tmp251=tmp11*tmp204;
REAL8 tmp252=tmp250+tmp251;
REAL8 tmp253=0.5*tmp11*tmp17*tmp252*tmp41*tmp47*tmp49;
REAL8 tmp254=tmp249+tmp253;
REAL8 tmp255=2.*tmp209;
REAL8 tmp256=1.+tmp255;
REAL8 tmp222=2.*tmp10*tmp3*tmp41*tmp45*tmp46;
REAL8 tmp223=1.*tmp10*tmp127*tmp3*tmp41*tmp45*tmp46;
REAL8 tmp224=tmp222+tmp223;
REAL8 tmp50=tmp17*tmp40*tmp47*tmp48*tmp49;
REAL8 tmp51=1./sqrt(tmp50);
REAL8 tmp53=4.+tmp52;
REAL8 tmp56=(tmp55*tmp55*tmp55*tmp55);
REAL8 tmp57=2.*eta*tmp17*tmp53*tmp56;
REAL8 tmp81=1.+tmp57+tmp59+tmp80;
REAL8 tmp176=(1.0/sqrt(tmp46*tmp46*tmp46));
REAL8 tmp242=1/tmp220;
REAL8 tmp265=-0.5*tmp118*tmp123*tmp210*tmp217*tmp245*tmp45*tmp70*x->data[0];
REAL8 tmp266=1.*tmp118*tmp123*tmp217*tmp254*tmp256*tmp45*x->data[0];
REAL8 tmp267=0.+tmp266;
REAL8 tmp268=tmp120*tmp267;
REAL8 tmp269=tmp265+tmp268;
REAL8 tmp270=tmp179*tmp269;
REAL8 tmp271=0.+tmp270;
REAL8 Hreal=(1.*eta*(-(tmp116*tmp167*tmp25)-0.5*tmp10*tmp171*tmp177*tmp179*tmp180*tmp208*tmp211*tmp230*tmp231*tmp239*tmp3*tmp45+0.5*tmp127*tmp170*tmp176*tmp177*tmp179*tmp180*tmp208*tmp211*(2.*tmp21*tmp214*tmp217*tmp3*tmp38*tmp41*tmp45*tmp67+1.*tmp116*tmp21*tmp213*tmp214*tmp38*tmp41*tmp58*tmp67+1.*tmp10*tmp21*tmp38*(tmp116*tmp213*tmp220*tmp46+tmp217*tmp224*tmp46-tmp10*tmp116*tmp21*tmp213*tmp38*tmp65*tmp79))-tmp125*tmp169*tmp170*tmp171*tmp173*tmp3*tmp58*tmp84+1.*e3z*tmp116*tmp41*tmp9+1.*tmp118*tmp125*tmp127*tmp173*tmp3*tmp41*x->data[0]+1.*e3z*tmp116*tmp118*tmp125*tmp127*tmp41*tmp45*x->data[0]+1.*tmp3*tmp41*tmp9*x->data[0]+1.*tmp123*tmp17*tmp179*tmp242*tmp47*tmp48*tmp49*(-0.5*tmp123*tmp127*tmp169*tmp217*tmp245*tmp3*tmp41*tmp58*tmp70*tmp84-0.5*tmp118*tmp123*tmp210*tmp217*tmp245*tmp3*tmp70*x->data[0]-0.5*tmp116*tmp118*tmp123*tmp210*tmp213*tmp245*tmp45*tmp70*x->data[0]+tmp120*(2.*tmp123*tmp127*tmp169*tmp217*tmp254*tmp3*tmp41*tmp58*tmp84+1.*tmp118*tmp123*tmp217*tmp254*tmp256*tmp3*x->data[0]+1.*tmp116*tmp118*tmp123*tmp213*tmp254*tmp256*tmp45*x->data[0]))-(0.5*tmp10*tmp177*tmp179*tmp180*tmp208*tmp230*tmp231*tmp239*tmp3*tmp45*(1.0/(tmp210*tmp210)))/tmp126-tmp123*tmp17*tmp224*tmp271*tmp47*tmp48*tmp49*(1.0/(tmp220*tmp220))+(1.*tmp10*tmp3*tmp41*tmp45*tmp46*tmp51)/sqrt(tmp81)))/sqrt(1.+2.*eta*(-1.+0.5*tmp127*tmp170*tmp176*tmp177*tmp179*tmp180*tmp208*tmp211*tmp239+1.*tmp123*tmp17*tmp242*tmp271*tmp47*tmp48*tmp49+1.*tmp173*tmp41*tmp9+1.*tmp118*tmp125*tmp127*tmp173*tmp41*tmp45*x->data[0]+1.*tmp41*tmp45*tmp9*x->data[0]+1.*coeffs->dheffSSv2*eta*tmp23*(s1Vec->data[2]*s1Vec->data[2]+s2Vec->data[2]*s2Vec->data[2])-0.5*tmp25*(0.+tmp167*tmp167)+tmp51*sqrt(tmp81)));