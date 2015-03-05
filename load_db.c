#include "load_db.h" 

void load_db(db_t* current_db){

	block_t b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11; 
	version_t version; 
	word_t word; 
	db_t db; 
	b0.reflect[0] = -0.709548;
	b0.reflect[1] = 0.467087;
	b0.reflect[2] = -0.435355;
	b0.reflect[3] = 0.212454;
	b0.reflect[4] = 0.063060;
	b0.reflect[5] = 0.269451;
	b0.reflect[6] = -0.047524;
	b0.reflect[7] = -0.216151;
	b0.reflect[8] = 0.107158;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.579143;
	b1.reflect[1] = 0.531212;
	b1.reflect[2] = -0.443361;
	b1.reflect[3] = 0.192730;
	b1.reflect[4] = 0.094717;
	b1.reflect[5] = 0.377796;
	b1.reflect[6] = 0.205421;
	b1.reflect[7] = -0.375356;
	b1.reflect[8] = -0.020554;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.504940;
	b2.reflect[1] = 0.241218;
	b2.reflect[2] = -0.316909;
	b2.reflect[3] = 0.324717;
	b2.reflect[4] = -0.046893;
	b2.reflect[5] = 0.240315;
	b2.reflect[6] = -0.014368;
	b2.reflect[7] = -0.148290;
	b2.reflect[8] = 0.049764;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.375329;
	b3.reflect[1] = 0.022996;
	b3.reflect[2] = -0.276478;
	b3.reflect[3] = 0.360840;
	b3.reflect[4] = 0.162646;
	b3.reflect[5] = 0.435206;
	b3.reflect[6] = -0.183103;
	b3.reflect[7] = -0.024053;
	b3.reflect[8] = -0.102923;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.328463;
	b4.reflect[1] = 0.053808;
	b4.reflect[2] = -0.222984;
	b4.reflect[3] = 0.126447;
	b4.reflect[4] = 0.005442;
	b4.reflect[5] = 0.290692;
	b4.reflect[6] = -0.033472;
	b4.reflect[7] = -0.019925;
	b4.reflect[8] = -0.103381;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.189753;
	b5.reflect[1] = 0.075317;
	b5.reflect[2] = -0.177806;
	b5.reflect[3] = -0.009187;
	b5.reflect[4] = -0.173021;
	b5.reflect[5] = 0.055208;
	b5.reflect[6] = -0.053886;
	b5.reflect[7] = 0.218544;
	b5.reflect[8] = -0.034417;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.228114;
	b6.reflect[1] = -0.013763;
	b6.reflect[2] = -0.099859;
	b6.reflect[3] = -0.010244;
	b6.reflect[4] = -0.027089;
	b6.reflect[5] = 0.082260;
	b6.reflect[6] = -0.012518;
	b6.reflect[7] = 0.046099;
	b6.reflect[8] = -0.028283;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.127828;
	b7.reflect[1] = -0.005444;
	b7.reflect[2] = -0.020909;
	b7.reflect[3] = 0.020793;
	b7.reflect[4] = -0.003476;
	b7.reflect[5] = 0.022792;
	b7.reflect[6] = 0.009909;
	b7.reflect[7] = -0.004213;
	b7.reflect[8] = 0.005407;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = 0.000000;
	b8.reflect[1] = 0.000000;
	b8.reflect[2] = 0.000000;
	b8.reflect[3] = 0.000000;
	b8.reflect[4] = 0.000000;
	b8.reflect[5] = 0.000000;
	b8.reflect[6] = 0.000000;
	b8.reflect[7] = 0.000000;
	b8.reflect[8] = 0.000000;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0.000000;
	b9.reflect[1] = 0.000000;
	b9.reflect[2] = 0.000000;
	b9.reflect[3] = 0.000000;
	b9.reflect[4] = 0.000000;
	b9.reflect[5] = 0.000000;
	b9.reflect[6] = 0.000000;
	b9.reflect[7] = 0.000000;
	b9.reflect[8] = 0.000000;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.000000;
	b10.reflect[1] = 0.000000;
	b10.reflect[2] = 0.000000;
	b10.reflect[3] = 0.000000;
	b10.reflect[4] = 0.000000;
	b10.reflect[5] = 0.000000;
	b10.reflect[6] = 0.000000;
	b10.reflect[7] = 0.000000;
	b10.reflect[8] = 0.000000;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[0] = version;
 
	b0.reflect[0] = -0.558362;
	b0.reflect[1] = 0.541270;
	b0.reflect[2] = -0.351384;
	b0.reflect[3] = 0.185252;
	b0.reflect[4] = -0.099299;
	b0.reflect[5] = 0.476021;
	b0.reflect[6] = -0.185498;
	b0.reflect[7] = -0.162806;
	b0.reflect[8] = 0.115175;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.572681;
	b1.reflect[1] = 0.602865;
	b1.reflect[2] = -0.378253;
	b1.reflect[3] = 0.204814;
	b1.reflect[4] = 0.019326;
	b1.reflect[5] = 0.535032;
	b1.reflect[6] = -0.096559;
	b1.reflect[7] = -0.267092;
	b1.reflect[8] = 0.071494;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.764283;
	b2.reflect[1] = 0.483900;
	b2.reflect[2] = -0.357724;
	b2.reflect[3] = 0.257141;
	b2.reflect[4] = -0.003438;
	b2.reflect[5] = 0.512762;
	b2.reflect[6] = -0.207922;
	b2.reflect[7] = -0.142694;
	b2.reflect[8] = 0.119461;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.344866;
	b3.reflect[1] = -0.033241;
	b3.reflect[2] = -0.441297;
	b3.reflect[3] = 0.451703;
	b3.reflect[4] = -0.002597;
	b3.reflect[5] = 0.312283;
	b3.reflect[6] = -0.151708;
	b3.reflect[7] = 0.077015;
	b3.reflect[8] = -0.037622;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.427548;
	b4.reflect[1] = 0.110188;
	b4.reflect[2] = -0.488176;
	b4.reflect[3] = 0.229700;
	b4.reflect[4] = 0.041780;
	b4.reflect[5] = 0.582102;
	b4.reflect[6] = -0.323484;
	b4.reflect[7] = 0.031169;
	b4.reflect[8] = -0.165416;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.378550;
	b5.reflect[1] = 0.030771;
	b5.reflect[2] = -0.519658;
	b5.reflect[3] = 0.366119;
	b5.reflect[4] = 0.088263;
	b5.reflect[5] = 0.463151;
	b5.reflect[6] = -0.275444;
	b5.reflect[7] = 0.050205;
	b5.reflect[8] = -0.107552;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.638260;
	b6.reflect[1] = -0.211840;
	b6.reflect[2] = -0.381759;
	b6.reflect[3] = 0.309270;
	b6.reflect[4] = -0.062567;
	b6.reflect[5] = 0.479391;
	b6.reflect[6] = 0.080705;
	b6.reflect[7] = 0.133156;
	b6.reflect[8] = -0.221353;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.832308;
	b7.reflect[1] = 0.010799;
	b7.reflect[2] = -0.371061;
	b7.reflect[3] = 0.122160;
	b7.reflect[4] = -0.046907;
	b7.reflect[5] = 0.493125;
	b7.reflect[6] = 0.181419;
	b7.reflect[7] = 0.071731;
	b7.reflect[8] = -0.172586;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.914204;
	b8.reflect[1] = 0.007219;
	b8.reflect[2] = -0.115452;
	b8.reflect[3] = 0.229912;
	b8.reflect[4] = 0.097000;
	b8.reflect[5] = 0.328428;
	b8.reflect[6] = 0.014699;
	b8.reflect[7] = 0.077899;
	b8.reflect[8] = 0.014147;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.836959;
	b9.reflect[1] = -0.149149;
	b9.reflect[2] = -0.236671;
	b9.reflect[3] = 0.264474;
	b9.reflect[4] = -0.028243;
	b9.reflect[5] = 0.203589;
	b9.reflect[6] = 0.062829;
	b9.reflect[7] = 0.055109;
	b9.reflect[8] = -0.032789;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.758027;
	b10.reflect[1] = -0.038024;
	b10.reflect[2] = -0.094562;
	b10.reflect[3] = 0.115278;
	b10.reflect[4] = 0.055455;
	b10.reflect[5] = 0.141397;
	b10.reflect[6] = -0.020119;
	b10.reflect[7] = 0.102388;
	b10.reflect[8] = 0.076520;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = -0.626089;
	b11.reflect[1] = -0.068638;
	b11.reflect[2] = -0.098286;
	b11.reflect[3] = 0.166975;
	b11.reflect[4] = 0.024058;
	b11.reflect[5] = 0.080452;
	b11.reflect[6] = -0.003198;
	b11.reflect[7] = 0.057778;
	b11.reflect[8] = 0.060277;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[1] = version;
 
	b0.reflect[0] = -0.701005;
	b0.reflect[1] = 0.409986;
	b0.reflect[2] = -0.212436;
	b0.reflect[3] = 0.271191;
	b0.reflect[4] = -0.231541;
	b0.reflect[5] = 0.367969;
	b0.reflect[6] = -0.198983;
	b0.reflect[7] = -0.199825;
	b0.reflect[8] = -0.034453;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.696705;
	b1.reflect[1] = 0.505549;
	b1.reflect[2] = -0.204733;
	b1.reflect[3] = 0.263673;
	b1.reflect[4] = -0.118524;
	b1.reflect[5] = 0.306604;
	b1.reflect[6] = -0.148110;
	b1.reflect[7] = -0.246455;
	b1.reflect[8] = -0.051406;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.592652;
	b2.reflect[1] = 0.567102;
	b2.reflect[2] = -0.278119;
	b2.reflect[3] = 0.223483;
	b2.reflect[4] = 0.014007;
	b2.reflect[5] = 0.390187;
	b2.reflect[6] = -0.063027;
	b2.reflect[7] = -0.320816;
	b2.reflect[8] = 0.079213;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.529747;
	b3.reflect[1] = 0.580873;
	b3.reflect[2] = -0.344778;
	b3.reflect[3] = 0.161813;
	b3.reflect[4] = -0.097803;
	b3.reflect[5] = 0.493081;
	b3.reflect[6] = -0.066283;
	b3.reflect[7] = -0.229284;
	b3.reflect[8] = 0.037274;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.574709;
	b4.reflect[1] = 0.576636;
	b4.reflect[2] = -0.358221;
	b4.reflect[3] = 0.195010;
	b4.reflect[4] = 0.071831;
	b4.reflect[5] = 0.471783;
	b4.reflect[6] = -0.033984;
	b4.reflect[7] = -0.388419;
	b4.reflect[8] = 0.043318;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.606851;
	b5.reflect[1] = 0.601419;
	b5.reflect[2] = -0.338088;
	b5.reflect[3] = 0.275051;
	b5.reflect[4] = 0.077779;
	b5.reflect[5] = 0.581192;
	b5.reflect[6] = -0.119287;
	b5.reflect[7] = -0.311683;
	b5.reflect[8] = -0.021692;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.554734;
	b6.reflect[1] = 0.635109;
	b6.reflect[2] = -0.401113;
	b6.reflect[3] = 0.195044;
	b6.reflect[4] = 0.107802;
	b6.reflect[5] = 0.583249;
	b6.reflect[6] = -0.034815;
	b6.reflect[7] = -0.298778;
	b6.reflect[8] = 0.016254;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.606784;
	b7.reflect[1] = 0.541271;
	b7.reflect[2] = -0.299513;
	b7.reflect[3] = 0.317240;
	b7.reflect[4] = 0.000395;
	b7.reflect[5] = 0.523518;
	b7.reflect[6] = -0.035087;
	b7.reflect[7] = -0.285333;
	b7.reflect[8] = 0.133404;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.607506;
	b8.reflect[1] = 0.537990;
	b8.reflect[2] = -0.265430;
	b8.reflect[3] = 0.296697;
	b8.reflect[4] = -0.073378;
	b8.reflect[5] = 0.604336;
	b8.reflect[6] = -0.024000;
	b8.reflect[7] = -0.307266;
	b8.reflect[8] = 0.075745;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.564269;
	b9.reflect[1] = 0.563908;
	b9.reflect[2] = -0.399433;
	b9.reflect[3] = 0.152005;
	b9.reflect[4] = 0.013900;
	b9.reflect[5] = 0.500832;
	b9.reflect[6] = -0.046222;
	b9.reflect[7] = -0.358598;
	b9.reflect[8] = 0.137027;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.532195;
	b10.reflect[1] = 0.569618;
	b10.reflect[2] = -0.404249;
	b10.reflect[3] = 0.103262;
	b10.reflect[4] = -0.073058;
	b10.reflect[5] = 0.505585;
	b10.reflect[6] = -0.094085;
	b10.reflect[7] = -0.348500;
	b10.reflect[8] = 0.121309;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0;
	b11.reflect[1] = 0;
	b11.reflect[2] = 0;
	b11.reflect[3] = 0;
	b11.reflect[4] = 0;
	b11.reflect[5] = 0;
	b11.reflect[6] = 0;
	b11.reflect[7] = 0;
	b11.reflect[8] = 0;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[2] = version;
 
	b0.reflect[0] = -0.651649;
	b0.reflect[1] = 0.440952;
	b0.reflect[2] = -0.355127;
	b0.reflect[3] = 0.226911;
	b0.reflect[4] = -0.192819;
	b0.reflect[5] = 0.541373;
	b0.reflect[6] = -0.231939;
	b0.reflect[7] = -0.200191;
	b0.reflect[8] = 0.046537;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.560864;
	b1.reflect[1] = 0.526408;
	b1.reflect[2] = -0.357897;
	b1.reflect[3] = 0.206702;
	b1.reflect[4] = -0.271804;
	b1.reflect[5] = 0.573738;
	b1.reflect[6] = -0.178834;
	b1.reflect[7] = -0.217776;
	b1.reflect[8] = 0.027262;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.750094;
	b2.reflect[1] = 0.376447;
	b2.reflect[2] = -0.324549;
	b2.reflect[3] = 0.263834;
	b2.reflect[4] = -0.179163;
	b2.reflect[5] = 0.497521;
	b2.reflect[6] = -0.205873;
	b2.reflect[7] = -0.163170;
	b2.reflect[8] = 0.091352;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.360292;
	b3.reflect[1] = 0.349542;
	b3.reflect[2] = -0.540756;
	b3.reflect[3] = 0.225385;
	b3.reflect[4] = -0.129819;
	b3.reflect[5] = 0.249339;
	b3.reflect[6] = -0.109809;
	b3.reflect[7] = 0.008204;
	b3.reflect[8] = -0.072557;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.649616;
	b4.reflect[1] = -0.031078;
	b4.reflect[2] = -0.412936;
	b4.reflect[3] = 0.621859;
	b4.reflect[4] = 0.209044;
	b4.reflect[5] = 0.373239;
	b4.reflect[6] = -0.210550;
	b4.reflect[7] = 0.066435;
	b4.reflect[8] = -0.093354;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.584218;
	b5.reflect[1] = 0.220631;
	b5.reflect[2] = -0.379606;
	b5.reflect[3] = 0.432129;
	b5.reflect[4] = 0.113487;
	b5.reflect[5] = 0.572546;
	b5.reflect[6] = -0.343483;
	b5.reflect[7] = -0.135340;
	b5.reflect[8] = -0.039207;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.548953;
	b6.reflect[1] = 0.008518;
	b6.reflect[2] = -0.183665;
	b6.reflect[3] = 0.316834;
	b6.reflect[4] = 0.002671;
	b6.reflect[5] = 0.284968;
	b6.reflect[6] = -0.084812;
	b6.reflect[7] = -0.137742;
	b6.reflect[8] = -0.124696;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.208861;
	b7.reflect[1] = 0.095841;
	b7.reflect[2] = -0.443175;
	b7.reflect[3] = -0.109948;
	b7.reflect[4] = -0.008733;
	b7.reflect[5] = 0.295570;
	b7.reflect[6] = -0.127373;
	b7.reflect[7] = 0.125699;
	b7.reflect[8] = -0.103822;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.076070;
	b8.reflect[1] = -0.034174;
	b8.reflect[2] = -0.207671;
	b8.reflect[3] = 0.065078;
	b8.reflect[4] = -0.183097;
	b8.reflect[5] = 0.096447;
	b8.reflect[6] = 0.020914;
	b8.reflect[7] = 0.103244;
	b8.reflect[8] = -0.135640;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.155650;
	b9.reflect[1] = -0.033915;
	b9.reflect[2] = -0.080371;
	b9.reflect[3] = 0.025303;
	b9.reflect[4] = -0.043345;
	b9.reflect[5] = 0.109626;
	b9.reflect[6] = 0.004511;
	b9.reflect[7] = -0.003465;
	b9.reflect[8] = -0.010510;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.000000;
	b10.reflect[1] = 0.000000;
	b10.reflect[2] = 0.000000;
	b10.reflect[3] = 0.000000;
	b10.reflect[4] = 0.000000;
	b10.reflect[5] = 0.000000;
	b10.reflect[6] = 0.000000;
	b10.reflect[7] = 0.000000;
	b10.reflect[8] = 0.000000;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[3] = version;
 
	b0.reflect[0] = -0.633788;
	b0.reflect[1] = 0.662168;
	b0.reflect[2] = -0.279253;
	b0.reflect[3] = 0.218468;
	b0.reflect[4] = -0.326384;
	b0.reflect[5] = 0.411799;
	b0.reflect[6] = 0.001953;
	b0.reflect[7] = -0.401656;
	b0.reflect[8] = 0.105708;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.619935;
	b1.reflect[1] = 0.697172;
	b1.reflect[2] = -0.259065;
	b1.reflect[3] = 0.219734;
	b1.reflect[4] = -0.282461;
	b1.reflect[5] = 0.427279;
	b1.reflect[6] = -0.006669;
	b1.reflect[7] = -0.360778;
	b1.reflect[8] = 0.065785;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.620089;
	b2.reflect[1] = 0.715849;
	b2.reflect[2] = -0.333602;
	b2.reflect[3] = 0.150613;
	b2.reflect[4] = -0.180128;
	b2.reflect[5] = 0.431700;
	b2.reflect[6] = -0.046971;
	b2.reflect[7] = -0.257742;
	b2.reflect[8] = 0.022271;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.674719;
	b3.reflect[1] = 0.608095;
	b3.reflect[2] = -0.221610;
	b3.reflect[3] = 0.275524;
	b3.reflect[4] = -0.360196;
	b3.reflect[5] = 0.516235;
	b3.reflect[6] = -0.100921;
	b3.reflect[7] = -0.219165;
	b3.reflect[8] = 0.006138;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.665044;
	b4.reflect[1] = 0.615990;
	b4.reflect[2] = -0.275757;
	b4.reflect[3] = 0.284571;
	b4.reflect[4] = -0.261549;
	b4.reflect[5] = 0.429948;
	b4.reflect[6] = 0.010382;
	b4.reflect[7] = -0.258095;
	b4.reflect[8] = -0.009567;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.731127;
	b5.reflect[1] = 0.695085;
	b5.reflect[2] = -0.292937;
	b5.reflect[3] = 0.303863;
	b5.reflect[4] = -0.106612;
	b5.reflect[5] = 0.343002;
	b5.reflect[6] = -0.059968;
	b5.reflect[7] = -0.281760;
	b5.reflect[8] = 0.046752;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.705962;
	b6.reflect[1] = 0.655986;
	b6.reflect[2] = -0.360041;
	b6.reflect[3] = 0.251176;
	b6.reflect[4] = -0.091382;
	b6.reflect[5] = 0.396416;
	b6.reflect[6] = -0.113082;
	b6.reflect[7] = -0.238879;
	b6.reflect[8] = 0.053691;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.698282;
	b7.reflect[1] = 0.657970;
	b7.reflect[2] = -0.369741;
	b7.reflect[3] = 0.240682;
	b7.reflect[4] = -0.022573;
	b7.reflect[5] = 0.451047;
	b7.reflect[6] = 0.043091;
	b7.reflect[7] = -0.330681;
	b7.reflect[8] = -0.090717;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.678010;
	b8.reflect[1] = 0.650035;
	b8.reflect[2] = -0.385383;
	b8.reflect[3] = 0.198702;
	b8.reflect[4] = -0.087946;
	b8.reflect[5] = 0.393575;
	b8.reflect[6] = 0.095286;
	b8.reflect[7] = -0.315011;
	b8.reflect[8] = -0.077394;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0;
	b9.reflect[1] = 0;
	b9.reflect[2] = 0;
	b9.reflect[3] = 0;
	b9.reflect[4] = 0;
	b9.reflect[5] = 0;
	b9.reflect[6] = 0;
	b9.reflect[7] = 0;
	b9.reflect[8] = 0;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0;
	b10.reflect[1] = 0;
	b10.reflect[2] = 0;
	b10.reflect[3] = 0;
	b10.reflect[4] = 0;
	b10.reflect[5] = 0;
	b10.reflect[6] = 0;
	b10.reflect[7] = 0;
	b10.reflect[8] = 0;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0;
	b11.reflect[1] = 0;
	b11.reflect[2] = 0;
	b11.reflect[3] = 0;
	b11.reflect[4] = 0;
	b11.reflect[5] = 0;
	b11.reflect[6] = 0;
	b11.reflect[7] = 0;
	b11.reflect[8] = 0;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[4] = version;
 
	word.name = "right";
 
	db.words[0] = word;
 
	b0.reflect[0] = -0.829639;
	b0.reflect[1] = -0.117953;
	b0.reflect[2] = -0.154491;
	b0.reflect[3] = 0.235716;
	b0.reflect[4] = 0.029038;
	b0.reflect[5] = 0.187732;
	b0.reflect[6] = 0.013591;
	b0.reflect[7] = 0.078886;
	b0.reflect[8] = 0.031569;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.850694;
	b1.reflect[1] = -0.108150;
	b1.reflect[2] = -0.092738;
	b1.reflect[3] = 0.164401;
	b1.reflect[4] = -0.008103;
	b1.reflect[5] = 0.099976;
	b1.reflect[6] = -0.009331;
	b1.reflect[7] = 0.087596;
	b1.reflect[8] = -0.039418;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.896043;
	b2.reflect[1] = -0.097023;
	b2.reflect[2] = -0.183786;
	b2.reflect[3] = 0.245662;
	b2.reflect[4] = 0.042467;
	b2.reflect[5] = 0.157670;
	b2.reflect[6] = -0.070928;
	b2.reflect[7] = 0.055973;
	b2.reflect[8] = 0.041197;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.787154;
	b3.reflect[1] = -0.065623;
	b3.reflect[2] = -0.133405;
	b3.reflect[3] = 0.117426;
	b3.reflect[4] = 0.065661;
	b3.reflect[5] = 0.167901;
	b3.reflect[6] = 0.004765;
	b3.reflect[7] = 0.010042;
	b3.reflect[8] = -0.111682;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.668605;
	b4.reflect[1] = -0.078734;
	b4.reflect[2] = -0.089612;
	b4.reflect[3] = 0.185068;
	b4.reflect[4] = -0.011819;
	b4.reflect[5] = 0.110831;
	b4.reflect[6] = 0.038921;
	b4.reflect[7] = 0.058490;
	b4.reflect[8] = -0.016096;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.530561;
	b5.reflect[1] = -0.080517;
	b5.reflect[2] = -0.117084;
	b5.reflect[3] = 0.087926;
	b5.reflect[4] = 0.035997;
	b5.reflect[5] = 0.092426;
	b5.reflect[6] = -0.003540;
	b5.reflect[7] = 0.090287;
	b5.reflect[8] = 0.010532;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.393218;
	b6.reflect[1] = -0.039498;
	b6.reflect[2] = -0.051930;
	b6.reflect[3] = 0.091143;
	b6.reflect[4] = -0.044320;
	b6.reflect[5] = 0.032748;
	b6.reflect[6] = -0.027933;
	b6.reflect[7] = 0.102456;
	b6.reflect[8] = 0.013511;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.252566;
	b7.reflect[1] = -0.023339;
	b7.reflect[2] = -0.088950;
	b7.reflect[3] = 0.038792;
	b7.reflect[4] = -0.004817;
	b7.reflect[5] = 0.051667;
	b7.reflect[6] = -0.034415;
	b7.reflect[7] = 0.037750;
	b7.reflect[8] = -0.022763;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.134544;
	b8.reflect[1] = 0.010701;
	b8.reflect[2] = 0.007953;
	b8.reflect[3] = 0.048005;
	b8.reflect[4] = 0.027714;
	b8.reflect[5] = 0.038578;
	b8.reflect[6] = 0.000205;
	b8.reflect[7] = 0.035826;
	b8.reflect[8] = -0.015622;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0.000000;
	b9.reflect[1] = 0.000000;
	b9.reflect[2] = 0.000000;
	b9.reflect[3] = 0.000000;
	b9.reflect[4] = 0.000000;
	b9.reflect[5] = 0.000000;
	b9.reflect[6] = 0.000000;
	b9.reflect[7] = 0.000000;
	b9.reflect[8] = 0.000000;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.000000;
	b10.reflect[1] = 0.000000;
	b10.reflect[2] = 0.000000;
	b10.reflect[3] = 0.000000;
	b10.reflect[4] = 0.000000;
	b10.reflect[5] = 0.000000;
	b10.reflect[6] = 0.000000;
	b10.reflect[7] = 0.000000;
	b10.reflect[8] = 0.000000;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[0] = version;
 
	b0.reflect[0] = -0.628733;
	b0.reflect[1] = 0.325416;
	b0.reflect[2] = -0.526303;
	b0.reflect[3] = 0.284939;
	b0.reflect[4] = 0.218671;
	b0.reflect[5] = 0.297338;
	b0.reflect[6] = -0.297278;
	b0.reflect[7] = 0.029655;
	b0.reflect[8] = -0.207106;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.947230;
	b1.reflect[1] = 0.417303;
	b1.reflect[2] = -0.132205;
	b1.reflect[3] = 0.326867;
	b1.reflect[4] = 0.333258;
	b1.reflect[5] = 0.426519;
	b1.reflect[6] = -0.427836;
	b1.reflect[7] = 0.138493;
	b1.reflect[8] = -0.293036;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.971331;
	b2.reflect[1] = 0.537267;
	b2.reflect[2] = 0.081146;
	b2.reflect[3] = 0.365216;
	b2.reflect[4] = 0.207240;
	b2.reflect[5] = 0.391154;
	b2.reflect[6] = -0.402856;
	b2.reflect[7] = 0.006438;
	b2.reflect[8] = -0.095921;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.838954;
	b3.reflect[1] = -0.033876;
	b3.reflect[2] = -0.344607;
	b3.reflect[3] = 0.116095;
	b3.reflect[4] = 0.271929;
	b3.reflect[5] = 0.326813;
	b3.reflect[6] = 0.058593;
	b3.reflect[7] = 0.052375;
	b3.reflect[8] = -0.059874;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.898719;
	b4.reflect[1] = -0.086562;
	b4.reflect[2] = -0.252675;
	b4.reflect[3] = 0.171621;
	b4.reflect[4] = 0.016274;
	b4.reflect[5] = 0.202466;
	b4.reflect[6] = -0.011314;
	b4.reflect[7] = 0.078592;
	b4.reflect[8] = -0.040541;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.791988;
	b5.reflect[1] = 0.117415;
	b5.reflect[2] = -0.206263;
	b5.reflect[3] = 0.163796;
	b5.reflect[4] = 0.099693;
	b5.reflect[5] = 0.279304;
	b5.reflect[6] = -0.092535;
	b5.reflect[7] = 0.024752;
	b5.reflect[8] = -0.169925;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.500700;
	b6.reflect[1] = 0.404752;
	b6.reflect[2] = -0.402117;
	b6.reflect[3] = 0.228285;
	b6.reflect[4] = 0.162644;
	b6.reflect[5] = 0.348037;
	b6.reflect[6] = -0.340466;
	b6.reflect[7] = 0.092367;
	b6.reflect[8] = -0.126170;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.175417;
	b7.reflect[1] = -0.419667;
	b7.reflect[2] = -0.314044;
	b7.reflect[3] = 0.231870;
	b7.reflect[4] = -0.016440;
	b7.reflect[5] = 0.197787;
	b7.reflect[6] = -0.048343;
	b7.reflect[7] = 0.077230;
	b7.reflect[8] = -0.100070;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = 0.310666;
	b8.reflect[1] = -0.132332;
	b8.reflect[2] = -0.308363;
	b8.reflect[3] = 0.023795;
	b8.reflect[4] = -0.115749;
	b8.reflect[5] = 0.032968;
	b8.reflect[6] = 0.006494;
	b8.reflect[7] = 0.168475;
	b8.reflect[8] = -0.027670;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.155299;
	b9.reflect[1] = -0.125334;
	b9.reflect[2] = -0.106339;
	b9.reflect[3] = 0.038752;
	b9.reflect[4] = -0.040595;
	b9.reflect[5] = 0.042317;
	b9.reflect[6] = 0.016785;
	b9.reflect[7] = 0.065665;
	b9.reflect[8] = -0.049494;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.104693;
	b10.reflect[1] = -0.074101;
	b10.reflect[2] = -0.011520;
	b10.reflect[3] = 0.028105;
	b10.reflect[4] = -0.029034;
	b10.reflect[5] = 0.049733;
	b10.reflect[6] = -0.005853;
	b10.reflect[7] = 0.034668;
	b10.reflect[8] = -0.003464;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[1] = version;
 
	b0.reflect[0] = -0.438857;
	b0.reflect[1] = 0.312405;
	b0.reflect[2] = -0.658354;
	b0.reflect[3] = 0.176027;
	b0.reflect[4] = 0.211187;
	b0.reflect[5] = 0.484180;
	b0.reflect[6] = -0.253985;
	b0.reflect[7] = -0.219672;
	b0.reflect[8] = 0.036119;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.373971;
	b1.reflect[1] = 0.357916;
	b1.reflect[2] = -0.700736;
	b1.reflect[3] = 0.154468;
	b1.reflect[4] = 0.194593;
	b1.reflect[5] = 0.512835;
	b1.reflect[6] = -0.347722;
	b1.reflect[7] = -0.160599;
	b1.reflect[8] = -0.052780;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.386379;
	b2.reflect[1] = 0.318159;
	b2.reflect[2] = -0.636204;
	b2.reflect[3] = 0.183676;
	b2.reflect[4] = 0.165984;
	b2.reflect[5] = 0.540373;
	b2.reflect[6] = -0.416174;
	b2.reflect[7] = -0.083715;
	b2.reflect[8] = -0.144614;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.412357;
	b3.reflect[1] = 0.334927;
	b3.reflect[2] = -0.624806;
	b3.reflect[3] = 0.253210;
	b3.reflect[4] = 0.259952;
	b3.reflect[5] = 0.422371;
	b3.reflect[6] = -0.322407;
	b3.reflect[7] = -0.130853;
	b3.reflect[8] = -0.128657;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.416210;
	b4.reflect[1] = 0.311489;
	b4.reflect[2] = -0.596408;
	b4.reflect[3] = 0.229918;
	b4.reflect[4] = 0.218449;
	b4.reflect[5] = 0.487482;
	b4.reflect[6] = -0.419510;
	b4.reflect[7] = -0.111368;
	b4.reflect[8] = -0.127965;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.417781;
	b5.reflect[1] = 0.303775;
	b5.reflect[2] = -0.612252;
	b5.reflect[3] = 0.216924;
	b5.reflect[4] = 0.215030;
	b5.reflect[5] = 0.490053;
	b5.reflect[6] = -0.528011;
	b5.reflect[7] = -0.028378;
	b5.reflect[8] = -0.122781;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.454967;
	b6.reflect[1] = 0.309643;
	b6.reflect[2] = -0.621246;
	b6.reflect[3] = 0.239788;
	b6.reflect[4] = 0.286430;
	b6.reflect[5] = 0.397817;
	b6.reflect[6] = -0.505906;
	b6.reflect[7] = -0.096073;
	b6.reflect[8] = -0.070048;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.489213;
	b7.reflect[1] = 0.334522;
	b7.reflect[2] = -0.679205;
	b7.reflect[3] = 0.279253;
	b7.reflect[4] = 0.386817;
	b7.reflect[5] = 0.289580;
	b7.reflect[6] = -0.562655;
	b7.reflect[7] = 0.081874;
	b7.reflect[8] = -0.203758;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.625166;
	b8.reflect[1] = 0.278571;
	b8.reflect[2] = -0.617795;
	b8.reflect[3] = 0.334587;
	b8.reflect[4] = 0.286553;
	b8.reflect[5] = 0.258734;
	b8.reflect[6] = -0.491007;
	b8.reflect[7] = 0.057466;
	b8.reflect[8] = -0.164775;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.854147;
	b9.reflect[1] = 0.307344;
	b9.reflect[2] = -0.299294;
	b9.reflect[3] = 0.410934;
	b9.reflect[4] = -0.035888;
	b9.reflect[5] = 0.262846;
	b9.reflect[6] = -0.410184;
	b9.reflect[7] = -0.085668;
	b9.reflect[8] = 0.097895;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.918413;
	b10.reflect[1] = 0.219374;
	b10.reflect[2] = -0.345675;
	b10.reflect[3] = 0.514118;
	b10.reflect[4] = 0.159081;
	b10.reflect[5] = 0.238849;
	b10.reflect[6] = -0.272005;
	b10.reflect[7] = 0.065897;
	b10.reflect[8] = 0.284628;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0;
	b11.reflect[1] = 0;
	b11.reflect[2] = 0;
	b11.reflect[3] = 0;
	b11.reflect[4] = 0;
	b11.reflect[5] = 0;
	b11.reflect[6] = 0;
	b11.reflect[7] = 0;
	b11.reflect[8] = 0;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[2] = version;
 
	b0.reflect[0] = -0.585885;
	b0.reflect[1] = 0.145169;
	b0.reflect[2] = -0.374095;
	b0.reflect[3] = 0.281513;
	b0.reflect[4] = 0.135485;
	b0.reflect[5] = 0.382126;
	b0.reflect[6] = -0.416289;
	b0.reflect[7] = 0.043738;
	b0.reflect[8] = -0.035488;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.807842;
	b1.reflect[1] = 0.203624;
	b1.reflect[2] = -0.187283;
	b1.reflect[3] = 0.203000;
	b1.reflect[4] = 0.091768;
	b1.reflect[5] = 0.448220;
	b1.reflect[6] = -0.497950;
	b1.reflect[7] = 0.105077;
	b1.reflect[8] = -0.109958;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.929671;
	b2.reflect[1] = 0.342077;
	b2.reflect[2] = 0.003583;
	b2.reflect[3] = 0.292306;
	b2.reflect[4] = 0.108128;
	b2.reflect[5] = 0.487648;
	b2.reflect[6] = -0.441136;
	b2.reflect[7] = 0.125973;
	b2.reflect[8] = -0.129838;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.929201;
	b3.reflect[1] = 0.169353;
	b3.reflect[2] = -0.096162;
	b3.reflect[3] = 0.362142;
	b3.reflect[4] = 0.073296;
	b3.reflect[5] = 0.219247;
	b3.reflect[6] = -0.123173;
	b3.reflect[7] = 0.174338;
	b3.reflect[8] = 0.051760;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.752775;
	b4.reflect[1] = -0.048065;
	b4.reflect[2] = -0.129761;
	b4.reflect[3] = 0.180384;
	b4.reflect[4] = 0.079279;
	b4.reflect[5] = 0.212445;
	b4.reflect[6] = -0.071615;
	b4.reflect[7] = 0.107047;
	b4.reflect[8] = 0.025858;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.597071;
	b5.reflect[1] = -0.011978;
	b5.reflect[2] = -0.161635;
	b5.reflect[3] = 0.147028;
	b5.reflect[4] = 0.057860;
	b5.reflect[5] = 0.281511;
	b5.reflect[6] = -0.090587;
	b5.reflect[7] = 0.046912;
	b5.reflect[8] = 0.021487;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.412783;
	b6.reflect[1] = 0.206587;
	b6.reflect[2] = -0.166098;
	b6.reflect[3] = 0.151337;
	b6.reflect[4] = 0.079497;
	b6.reflect[5] = 0.253791;
	b6.reflect[6] = -0.213685;
	b6.reflect[7] = 0.035664;
	b6.reflect[8] = 0.015983;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.378910;
	b7.reflect[1] = 0.039081;
	b7.reflect[2] = 0.023861;
	b7.reflect[3] = 0.141500;
	b7.reflect[4] = -0.015169;
	b7.reflect[5] = 0.193253;
	b7.reflect[6] = 0.024273;
	b7.reflect[7] = -0.101386;
	b7.reflect[8] = -0.033391;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.199163;
	b8.reflect[1] = -0.144391;
	b8.reflect[2] = -0.137036;
	b8.reflect[3] = 0.167726;
	b8.reflect[4] = 0.102483;
	b8.reflect[5] = 0.063813;
	b8.reflect[6] = 0.055839;
	b8.reflect[7] = 0.100641;
	b8.reflect[8] = -0.056930;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.115567;
	b9.reflect[1] = -0.029020;
	b9.reflect[2] = -0.039450;
	b9.reflect[3] = 0.016749;
	b9.reflect[4] = -0.019004;
	b9.reflect[5] = 0.031036;
	b9.reflect[6] = 0.018385;
	b9.reflect[7] = 0.013515;
	b9.reflect[8] = -0.016222;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.000000;
	b10.reflect[1] = 0.000000;
	b10.reflect[2] = 0.000000;
	b10.reflect[3] = 0.000000;
	b10.reflect[4] = 0.000000;
	b10.reflect[5] = 0.000000;
	b10.reflect[6] = 0.000000;
	b10.reflect[7] = 0.000000;
	b10.reflect[8] = 0.000000;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[3] = version;
 
	b0.reflect[0] = -0.910388;
	b0.reflect[1] = -0.070460;
	b0.reflect[2] = -0.079497;
	b0.reflect[3] = 0.217634;
	b0.reflect[4] = -0.012568;
	b0.reflect[5] = 0.120942;
	b0.reflect[6] = -0.023883;
	b0.reflect[7] = 0.117672;
	b0.reflect[8] = -0.033200;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.910460;
	b1.reflect[1] = -0.141941;
	b1.reflect[2] = -0.117800;
	b1.reflect[3] = 0.228664;
	b1.reflect[4] = 0.014295;
	b1.reflect[5] = 0.131723;
	b1.reflect[6] = -0.046545;
	b1.reflect[7] = 0.069847;
	b1.reflect[8] = -0.048886;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.903022;
	b2.reflect[1] = -0.182932;
	b2.reflect[2] = -0.136157;
	b2.reflect[3] = 0.244059;
	b2.reflect[4] = 0.016903;
	b2.reflect[5] = 0.155899;
	b2.reflect[6] = -0.050407;
	b2.reflect[7] = 0.126500;
	b2.reflect[8] = -0.033287;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.907908;
	b3.reflect[1] = -0.108178;
	b3.reflect[2] = -0.117954;
	b3.reflect[3] = 0.230972;
	b3.reflect[4] = -0.003662;
	b3.reflect[5] = 0.124774;
	b3.reflect[6] = -0.020913;
	b3.reflect[7] = 0.024994;
	b3.reflect[8] = -0.024506;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.906546;
	b4.reflect[1] = -0.049861;
	b4.reflect[2] = -0.167145;
	b4.reflect[3] = 0.263905;
	b4.reflect[4] = 0.033078;
	b4.reflect[5] = 0.111150;
	b4.reflect[6] = -0.053599;
	b4.reflect[7] = 0.085770;
	b4.reflect[8] = -0.057703;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.917817;
	b5.reflect[1] = -0.084138;
	b5.reflect[2] = -0.041965;
	b5.reflect[3] = 0.226707;
	b5.reflect[4] = -0.004157;
	b5.reflect[5] = 0.136615;
	b5.reflect[6] = -0.009150;
	b5.reflect[7] = 0.035240;
	b5.reflect[8] = -0.066551;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.757992;
	b6.reflect[1] = 0.129712;
	b6.reflect[2] = -0.129536;
	b6.reflect[3] = 0.306340;
	b6.reflect[4] = 0.052572;
	b6.reflect[5] = 0.247188;
	b6.reflect[6] = -0.199419;
	b6.reflect[7] = 0.030188;
	b6.reflect[8] = 0.014408;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.783505;
	b7.reflect[1] = 0.300750;
	b7.reflect[2] = -0.257531;
	b7.reflect[3] = 0.264795;
	b7.reflect[4] = 0.189750;
	b7.reflect[5] = 0.408040;
	b7.reflect[6] = -0.417367;
	b7.reflect[7] = 0.114651;
	b7.reflect[8] = -0.076468;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.788794;
	b8.reflect[1] = 0.307420;
	b8.reflect[2] = -0.000583;
	b8.reflect[3] = 0.242047;
	b8.reflect[4] = 0.198084;
	b8.reflect[5] = 0.284980;
	b8.reflect[6] = -0.161704;
	b8.reflect[7] = 0.068173;
	b8.reflect[8] = -0.062731;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.690945;
	b9.reflect[1] = -0.023418;
	b9.reflect[2] = -0.042607;
	b9.reflect[3] = 0.223324;
	b9.reflect[4] = 0.054090;
	b9.reflect[5] = 0.180226;
	b9.reflect[6] = -0.021399;
	b9.reflect[7] = 0.144754;
	b9.reflect[8] = -0.020278;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.491638;
	b10.reflect[1] = 0.193182;
	b10.reflect[2] = -0.213024;
	b10.reflect[3] = 0.152748;
	b10.reflect[4] = 0.021321;
	b10.reflect[5] = 0.357826;
	b10.reflect[6] = -0.269260;
	b10.reflect[7] = -0.045937;
	b10.reflect[8] = 0.024448;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.247012;
	b11.reflect[1] = -0.069802;
	b11.reflect[2] = -0.473390;
	b11.reflect[3] = 0.062979;
	b11.reflect[4] = 0.012959;
	b11.reflect[5] = 0.192871;
	b11.reflect[6] = 0.020855;
	b11.reflect[7] = 0.052575;
	b11.reflect[8] = -0.063373;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[4] = version;
 
	word.name = "left";
 
	db.words[1] = word;
 
	*current_db = db; 
	return; 
} 
