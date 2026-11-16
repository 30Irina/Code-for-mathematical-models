#include <fstream>
#include <complex>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include<iomanip>
#include <vector>

using namespace std;

int main() {
    int count_x = 1, count_z = 1, count_t = 1;
    double new_0111 = 0, multiply_0111_min_pl = 1, multiply_0111_min = 1;
    double T_lxl = 0, T_lxl_f = 0, T_lxl_pogr = 0;
    double integral_theta_plus_2_2809 = 0;
    double integral_theta_minus_2_2809 = 0;
    double sum_A_plus_2_2809 = 0;
    double sum_A_minus_2_2809 = 0;
    std::complex<double> i_3_2809 = std::complex<double>(0, 0);
    std::complex<double> i_3_2809_m = std::complex<double>(0, 0);

    std::complex<double> pogr_plus = std::complex<double>(0, 0);
    std::complex<double> pogr_minus = std::complex<double>(0, 0);

    std::complex<double> invariant3_plus_2009 = std::complex<double>(0, 0);
    std::complex<double> invariant3_minus_2009 = std::complex<double>(0, 0);
    std::complex<double> invariant3_2009 = std::complex<double>(0, 0);

    std::complex<double> invariant3_l_ooo = std::complex<double>(0, 0);
    std::complex<double> invariant3_r_ooo = std::complex<double>(0, 0);
    std::complex<double> sum1_3_inv_minus_o = std::complex<double>(0, 0);
    std::complex<double> sum2_3_inv_minus_o = std::complex<double>(0, 0);


    std::complex<double> invariant3_minus_r = std::complex<double>(0, 0);
    std::complex<double> invariant3_minus_l = std::complex<double>(0, 0);



    std::complex<double> invariant1_minus_r = std::complex<double>(0, 0);
    std::complex<double> invariant1_minus_l = std::complex<double>(0, 0);

    std::complex<double> invariant3_r = std::complex<double>(0, 0);
    std::complex<double> invariant3_l = std::complex<double>(0, 0);


    std::complex<double> invariant1_rght = std::complex<double>(0, 0);
    std::complex<double> invariant1_lft = std::complex<double>(0, 0);


    double sum1_3_inv = 0, error_3 = 0, sum_A_minus_2_2009 = 0, sum_A_plus_2_2009 = 0;
    std::complex<double> sum2_3_inv = std::complex<double>(0, 0);
    std::complex<double> sum_3_inv = std::complex<double>(0, 0);

    double multiply_0_j_1_per_minus = 1;
    double multiply_0_j_1_minus = 1;
    double multiply_0_j_1 = 1;
    double multiply_0_j_1_per = 1;
    double multiply_0111 = 1;
    double delta_0_dif_inv_p = 0;

    double integral_delta_0_z = 0, sum_delta_0_z = 0, integral_delta_z_Lz = 0, sum_delta_z_Lz = 0;
    double sum_delta_0_z_2 = 0, integral_delta_0_z_2 = 0, sum_delta_z_Lz_2 = 0, integral_delta_z_Lz_2 = 0;
    double sum_A_plus_2 = 0, sum_A_minus_2 = 0, integral_theta_plus_2 = 0, integral_theta_minus_2 = 0;
    double int_A_plus = 0, int_A_minus = 0;

    std::complex<double> dif_inv_plus_1 = std::complex<double>(0, 0);
    std::complex<double> sum_A_plus = std::complex<double>(0, 0);
    std::complex<double> integral_theta_plus = std::complex<double>(0, 0);
    std::complex<double> sum_A_minus = std::complex<double>(0, 0);
    std::complex<double> integral_theta_minus = std::complex<double>(0, 0);

    std::complex<double> integral_theta_plus_1 = std::complex<double>(0, 0);
    std::complex<double> integral_theta_minus_1 = std::complex<double>(0, 0);

    std::complex<double> sum_A_plus_1 = std::complex<double>(0, 0);
    std::complex<double> sum_A_minus_1 = std::complex<double>(0, 0);
    int tt_0 = 3; //3 10;
    double R = 1;
    double arg_phi = 0;
    double int_xc_1_sum = 0, int_xc_2_sum = 0, int_xc_end = 0, int_ax_1_sum = 0, int_ax_2_sum = 0, int_ax_end = 0;
    double int_xc_1_sum_plus = 0, int_xc_2_sum_plus = 0, int_xc_end_plus = 0, int_ax_1_sum_plus = 0, int_ax_2_sum_plus = 0, int_ax_end_plus = 0;
    double int_xc_1_sum_minus = 0, int_xc_2_sum_minus = 0, int_xc_end_minus = 0, int_ax_1_sum_minus = 0, int_ax_2_sum_minus = 0, int_ax_end_minus = 0;
    bool ok_diag = true, ok_strog = false, ok;//проверка на диагональное преобладание в методе прогонки
    double D_x, delta_0, D_xx;///D_z,hi,
    vector<double> delta_j;
    vector<double> V_j;
    vector<double> alpha_j;
    //tt_0 = 3, tau_p = 1
    int alpha_0, L_s, L_z, L_t, N_t, N_x, N_z;//, z_c;
    double N_s;
    const double pi = 3.1415926535, eps1 = 0.001, eps2 = 0.01 * eps1;
    const int x_c = 0, F_x = 0, L_xb = -5, L_xl = 5, tau_p = 1, a_x = 1, V_0 = 1, q_0 = 5;//tau_p = 4 1
    std::cout << "Input D_x: ";
    std::cin >> D_x;
    std::cout << "Input alpha_0: ";
    std::cin >> alpha_0;
    std::cout << "Input L_s: ";
    std::cin >> L_s;
    std::cout << "Input L_z: ";
    std::cin >> L_z;
    std::cout << "Input delta_0: ";
    std::cin >> delta_0;
   

    std::cout << "Input L_t = 28: ";
    std::cin >> L_t;
    std::cout << "Input N_t: ";
    std::cin >> N_t;
    std::cout << "Input N_x: ";
    std::cin >> N_x;
    std::cout << "Input N_z: ";
    std::cin >> N_z;
    delta_j.resize(N_z + 1);
    V_j.resize(N_z + 1);
    alpha_j.resize(N_z + 1);
    vector<double> x_c_vec;
    x_c_vec.resize(N_z + 1);
    vector<double> x_c_vec_plus;
    x_c_vec_plus.resize(N_z + 1);
    vector<double> x_c_vec_minus;
    x_c_vec_minus.resize(N_z + 1);

    vector<double> vec_int_delta_0_z;
    vec_int_delta_0_z.resize(N_z + 1);
    vector<double> vec_int_delta_z_Lz;
    vec_int_delta_z_Lz.resize(N_z + 1);

    vector<double> vec_int_delta_0_z_2;
    vec_int_delta_0_z_2.resize(N_z + 1);
    vector<double> vec_int_delta_z_Lz_2;
    vec_int_delta_z_Lz_2.resize(N_z + 1);

    vector<double> vec_multiply_0_j_1;
    vec_multiply_0_j_1.resize(N_z + 1);

    vector<double> vec_multiply_0111;
    vec_multiply_0111.resize(N_z + 1);

    vector<double> vec_multiply_0111_min_pl;
    vec_multiply_0111_min_pl.resize(N_z + 1);

    vector<double> vec_multiply_0111_min;
    vec_multiply_0111_min.resize(N_z + 1);

    vector<double> vec_multiply_0_j_1_per;
    vec_multiply_0_j_1_per.resize(N_z + 1);

    vector<double> vec_multiply_0_j_1_per_minus;
    vec_multiply_0_j_1_per_minus.resize(N_z + 1);

    vector<double> vec_multiply_0_j_1_minus;
    vec_multiply_0_j_1_minus.resize(N_z + 1);

    vector<double> for_T;
    for_T.resize(N_z + 1);

    vector<double> for_T_m;
    for_T_m.resize(N_z + 1);
    std::ofstream out;
    std::ofstream out2;
    std::ofstream out3;
    std::ofstream out4;
    std::ofstream out5;
    std::ofstream out8;
    std::ofstream out9;
    std::ofstream out10;
    std::ofstream out11;
    std::ofstream out12;
    std::ofstream out101;
    std::ofstream out102;
    std::ofstream out6;
    std::ofstream out103;
    std::ofstream out104;
    std::ofstream out105;
    std::ofstream out106;
    std::ofstream out201;
    std::ofstream out202;
    std::ofstream out203;
    std::ofstream out204;
    std::ofstream out205;
    std::ofstream out206;

    std::ofstream out3011;
    std::ofstream out3012;

    std::ofstream out4011;
    std::ofstream out4012;

    std::ofstream out5011;
    std::ofstream out5012;

    std::ofstream out5013;

    std::ofstream out6011;
    std::ofstream out6012;
    std::ofstream out6021;
    std::ofstream out6022;

    std::ofstream out7011;
    std::ofstream out7012;

    std::ofstream out8011;
    std::ofstream out8012;
    std::ofstream out8021;
    std::ofstream out8022;

    std::ofstream out91;
    std::ofstream out92;

    std::ofstream out71;
    std::ofstream out72;
    std::ofstream out73;
    std::ofstream out74;

    std::ofstream out71_;
    std::ofstream out72_;
    std::ofstream out73_;
    std::ofstream out74_;

    std::ofstream out71__;
    std::ofstream out72__;
    std::ofstream out73__;
    std::ofstream out74__;

    std::ofstream out81;
    std::ofstream out82;
    std::ofstream out83;
    std::ofstream out84;

    std::ofstream out81_;
    std::ofstream out82_;
    std::ofstream out83_;
    std::ofstream out84_;

    std::ofstream out81__;
    std::ofstream out82__;
    std::ofstream out83__;
    std::ofstream out84__;




    std::ofstream out471;
    std::ofstream out472;
    std::ofstream out473;
    std::ofstream out474;

    std::ofstream out471_;
    std::ofstream out472_;
    std::ofstream out473_;
    std::ofstream out474_;

    std::ofstream out471__;
    std::ofstream out472__;
    std::ofstream out473__;
    std::ofstream out474__;

    std::ofstream out481;
    std::ofstream out482;
    std::ofstream out483;
    std::ofstream out484;

    std::ofstream out481_;
    std::ofstream out482_;
    std::ofstream out483_;
    std::ofstream out484_;

    std::ofstream out481__;
    std::ofstream out482__;
    std::ofstream out483__;
    std::ofstream out484__;

    std::ofstream out0;

    std::ofstream out0909;
    std::ofstream out0909_1;

    std::ofstream out2009;
    std::ofstream out2009_1;
    std::ofstream out2009_2;
    std::ofstream out2009_3;

    std::ofstream outpogrminus;
    std::ofstream outpogrplus;

    std::ofstream out2809_1;
    std::ofstream out2809_2;

    std::ofstream out_2809_T_lxl;
    std::ofstream out_2809_T_lxl_f;
    std::ofstream out_2809_T_lxl_pogr;

    std::ofstream out0111_1;
    std::ofstream out0111_2;

    std::ofstream out0111_3;
    std::ofstream out0111_4;


    out0111_1.open("0111_1.csv");
    out0111_2.open("0111_2.csv");
    out0111_3.open("0111_3.csv");
    out0111_4.open("0111_4.csv");

    out_2809_T_lxl.open("out_2809_T_lxl.csv");
    out_2809_T_lxl_f.open("out_2809_T_lxl_f.csv");
    out_2809_T_lxl_pogr.open("out_2809_T_lxl_pogr.csv");

    out2809_1.open("2809_1.csv");
    out2809_2.open("2809_2.csv");

    outpogrminus.open("pogrminus.csv");
    outpogrplus.open("pogrplus.csv");

    out.open("tabl_A.csv");
    out0.open("mod_sum_A.csv");

    out2.open("tabl1.csv");
    out3.open("tabl2.csv");
    out4.open("tabl_xc.csv");
    out5.open("tabl_ax.csv");
    out8.open("alpha_.csv");
    out6.open("tabl_t.csv");
    out9.open("I_3.csv");
    out10.open("I_4.csv");
    out11.open("prI_3.csv");
    out12.open("prI_4.csv");
    out101.open("sss.csv");
    out102.open("del_al_v.csv");
    out103.open("tabl_xc_Aplus.csv");
    out104.open("tabl_xc_Aminus.csv");
    out105.open("tabl_ax_Aplus.csv");
    out106.open("tabl_ax_Aminus.csv");

    out201.open("int_delta_0_z.csv");
    out202.open("int_delta_z_Lz.csv");
    out203.open("int_delta_0_z_1.csv");
    out204.open("int_delta_z_Lz_1.csv");
    out205.open("int_delta_0_z_2.csv");
    out206.open("int_delta_z_Lz_2.csv");

    out3011.open("dif_an_11plus.csv");
    out3012.open("dif_an_12plus.csv");

    out4011.open("delta_0_21plus.csv");
    out4012.open("delta_0_22plus.csv");

    out5011.open("inv3_31plus.csv");
    out5012.open("inv3_32plus.csv");
    out5013.open("err3.csv");

    out6011.open("invariant1_r.csv");
    out6012.open("invariant1_l.csv");
    out6021.open("invariant3_r.csv");
    out6022.open("invariant3_l.csv");

    out7011.open("invariant1_r_minus.csv");
    out7012.open("invariant1_l_minus.csv");

    out8011.open("d0_invariant3_r_minus.csv");
    out8012.open("d0_invariant3_l_minus.csv");
    out8021.open("invariant3_r_minus.csv");
    out8022.open("invariant3_l_minus.csv");

    out91.open("T_1.csv");
    out92.open("T_2.csv");

    out71.open("t1.csv");
    out72.open("t2.csv");
    out73.open("t3.csv");
    out74.open("t4.csv");
    out71_.open("t1_real.csv");
    out72_.open("t2_real.csv");
    out73_.open("t3_real.csv");
    out74_.open("t4_real.csv");
    out71__.open("t1_imag.csv");
    out72__.open("t2_imag.csv");
    out73__.open("t3_imag.csv");
    out74__.open("t4_imag.csv");

    out81.open("tt1.csv");
    out82.open("tt2.csv");
    out83.open("tt3.csv");
    out84.open("tt4.csv");
    out81_.open("tt1_real.csv");
    out82_.open("tt2_real.csv");
    out83_.open("tt3_real.csv");
    out84_.open("tt4_real.csv");
    out81__.open("tt1_imag.csv");
    out82__.open("tt2_imag.csv");
    out83__.open("tt3_imag.csv");
    out84__.open("tt4_imag.csv");


    out471.open("qt1.csv");
    out472.open("qt2.csv");
    out473.open("qt3.csv");
    out474.open("qt4.csv");
    out471_.open("qt1_real.csv");
    out472_.open("qt2_real.csv");
    out473_.open("qt3_real.csv");
    out474_.open("qt4_real.csv");
    out471__.open("qt1_imag.csv");
    out472__.open("qt2_imag.csv");
    out473__.open("qt3_imag.csv");
    out474__.open("qt4_imag.csv");

    out481.open("qtt1.csv");
    out482.open("qtt2.csv");
    out483.open("qtt3.csv");
    out484.open("qtt4.csv");
    out481_.open("qtt1_real.csv");
    out482_.open("qtt2_real.csv");
    out483_.open("qtt3_real.csv");
    out484_.open("qtt4_real.csv");
    out481__.open("qtt1_imag.csv");
    out482__.open("qtt2_imag.csv");
    out483__.open("qtt3_imag.csv");
    out484__.open("qtt4_imag.csv");

    out0909.open("0909.csv");
    out0909_1.open("0909_1.csv");

    out2009.open("2009.csv");
    out2009_1.open("2009_1.csv");

    out2009_2.open("2009_2.csv");
    out2009_3.open("2009_3.csv");

    std::complex<double> im_unit = std::complex<double>(0, 1);
    //определяем расчетные шаги сетки по координатам
    double tau = double(L_t) / N_t;
    double h_x = double(L_xl - L_xb) / (N_x);
    double h_z = double(L_z) / N_z;
    N_s = double(L_s) / h_z;
    out_2809_T_lxl << L_z / h_z + 1 << "\t";
    out_2809_T_lxl << L_t / tau + 1 << "\t";
    out_2809_T_lxl << L_t << "\t";
    out_2809_T_lxl << N_t << "\n";

    out_2809_T_lxl_pogr << L_z / h_z + 1 << "\t";
    out_2809_T_lxl_pogr << L_t / tau + 1 << "\t";
    out_2809_T_lxl_pogr << L_t << "\t";
    out_2809_T_lxl_pogr << N_t << "\n";

    out_2809_T_lxl_f << L_z / h_z + 1 << "\t";
    out_2809_T_lxl_f << L_t / tau + 1 << "\t";
    out_2809_T_lxl_f << L_t << "\t";
    out_2809_T_lxl_f << N_t << "\n";

    outpogrplus << L_z / h_z + 1 << "\t";
    outpogrplus << L_t / tau + 1 << "\t";
    outpogrplus << L_t << "\t";
    outpogrplus << N_t << "\n";

    outpogrminus << L_z / h_z + 1 << "\t";
    outpogrminus << L_t / tau + 1 << "\t";
    outpogrminus << L_t << "\t";
    outpogrminus << N_t << "\n";


    out4 << L_z / h_z + 1 << "\t";
    out4 << L_t / tau + 1 << "\t";
    out4 << L_t << "\t";
    out4 << N_t << "\n";

    out5 << L_z / h_z + 1 << "\t";
    out5 << L_t / tau + 1 << "\t";
    out5 << L_t << "\t";
    out5 << N_t << "\n";

    out201 << L_z / h_z + 1 << "\t";
    out201 << L_t / tau + 1 << "\t";
    out201 << L_t << "\t";
    out201 << N_t << "\n";

    out202 << L_z / h_z + 1 << "\t";
    out202 << L_t / tau + 1 << "\t";
    out202 << L_t << "\t";
    out202 << N_t << "\n";

    out203 << L_z / h_z + 1 << "\t";
    out203 << L_t / tau + 1 << "\t";
    out203 << L_t << "\t";
    out203 << N_t << "\n";

    out204 << L_z / h_z + 1 << "\t";
    out204 << L_t / tau + 1 << "\t";
    out204 << L_t << "\t";
    out204 << N_t << "\n";

    out205 << L_z / h_z + 1 << "\t";
    out205 << L_t / tau + 1 << "\t";
    out205 << L_t << "\t";
    out205 << N_t << "\n";

    out206 << L_z / h_z + 1 << "\t";
    out206 << L_t / tau + 1 << "\t";
    out206 << L_t << "\t";
    out206 << N_t << "\n";

    out3011 << L_z / h_z + 1 << "\t";
    out3011 << L_t / tau + 1 << "\t";
    out3011 << L_t << "\t";
    out3011 << N_t << "\n";

    out3012 << L_z / h_z + 1 << "\t";
    out3012 << L_t / tau + 1 << "\t";
    out3012 << L_t << "\t";
    out3012 << N_t << "\n";

    out4011 << L_z / h_z + 1 << "\t";
    out4011 << L_t / tau + 1 << "\t";
    out4011 << L_t << "\t";
    out4011 << N_t << "\n";

    out4012 << L_z / h_z + 1 << "\t";
    out4012 << L_t / tau + 1 << "\t";
    out4012 << L_t << "\t";
    out4012 << N_t << "\n";

    out5011 << L_z / h_z + 1 << "\t";
    out5011 << L_t / tau + 1 << "\t";
    out5011 << L_t << "\t";
    out5011 << N_t << "\n";

    out5012 << L_z / h_z + 1 << "\t";
    out5012 << L_t / tau + 1 << "\t";
    out5012 << L_t << "\t";
    out5012 << N_t << "\n";

    out5013 << L_z / h_z + 1 << "\t";
    out5013 << L_t / tau + 1 << "\t";
    out5013 << L_t << "\t";
    out5013 << N_t << "\n";

    out6011 << L_z / h_z + 1 << "\t";
    out6011 << L_t / tau + 1 << "\t";
    out6011 << L_t << "\t";
    out6011 << N_t << "\n";

    out6012 << L_z / h_z + 1 << "\t";
    out6012 << L_t / tau + 1 << "\t";
    out6012 << L_t << "\t";
    out6012 << N_t << "\n";

    out6021 << L_z / h_z + 1 << "\t";
    out6021 << L_t / tau + 1 << "\t";
    out6021 << L_t << "\t";
    out6021 << N_t << "\n";

    out6022 << L_z / h_z + 1 << "\t";
    out6022 << L_t / tau + 1 << "\t";
    out6022 << L_t << "\t";
    out6022 << N_t << "\n";


    out7011 << L_z / h_z + 1 << "\t";
    out7011 << L_t / tau + 1 << "\t";
    out7011 << L_t << "\t";
    out7011 << N_t << "\n";

    out7012 << L_z / h_z + 1 << "\t";
    out7012 << L_t / tau + 1 << "\t";
    out7012 << L_t << "\t";
    out7012 << N_t << "\n";

    out8011 << L_z / h_z + 1 << "\t";
    out8011 << L_t / tau + 1 << "\t";
    out8011 << L_t << "\t";
    out8011 << N_t << "\n";

    out8012 << L_z / h_z + 1 << "\t";
    out8012 << L_t / tau + 1 << "\t";
    out8012 << L_t << "\t";
    out8012 << N_t << "\n";

    out8021 << L_z / h_z + 1 << "\t";
    out8021 << L_t / tau + 1 << "\t";
    out8021 << L_t << "\t";
    out8021 << N_t << "\n";

    out8022 << L_z / h_z + 1 << "\t";
    out8022 << L_t / tau + 1 << "\t";
    out8022 << L_t << "\t";
    out8022 << N_t << "\n";



    out91 << L_z / h_z + 1 << "\t";
    out91 << L_t / tau + 1 << "\t";
    out91 << L_t << "\t";
    out91 << N_t << "\n";

    out92 << L_z / h_z + 1 << "\t";
    out92 << L_t / tau + 1 << "\t";
    out92 << L_t << "\t";
    out92 << N_t << "\n";

    double t_end = tau * N_t, z_end = h_z * N_z, x_end = -L_xb + h_x * N_x;
    double z_j = 0, x_m = L_xb, t_l = 0;
    std::vector<vector<complex<double>>> A_plus;
    A_plus.assign(N_x + 1, vector<complex<double>>(N_z + 1));//A с предыд слоя по времени

    std::vector<vector<complex<double>>> A_0_plus;
    A_0_plus.assign(N_x + 1, vector<complex<double>>(N_z + 1));//A_0 при s-ой итерации

    std::vector<vector<complex<double>>> A_1_plus;
    A_1_plus.assign(N_x + 1, vector<complex<double>>(N_z + 1));//A_1 при (s+1)-ой итерации

    std::vector<vector<complex<double>>> A_11_plus;
    A_11_plus.assign(N_x + 1, vector<complex<double>>(N_z + 1));//A_1 при (s+1)-ой итерации

    std::vector<vector<complex<double>>> A_minus;
    A_minus.assign(N_x + 1, vector<complex<double>>(N_z + 1));//A с предыд слоя по времени

    std::vector<vector<complex<double>>> A_0_minus;
    A_0_minus.assign(N_x + 1, vector<complex<double>>(N_z + 1));//A_0 при s-ой итерации

    std::vector<vector<complex<double>>> A_1_minus;
    A_1_minus.assign(N_x + 1, vector<complex<double>>(N_z + 1));//A_1 при (s+1)-ой итерации


    std::vector<vector<double>> T;
    T.assign(N_x + 1, vector<double>(N_z + 1));//T с предыд слоя по времени

    std::vector<vector<double>> T_0;
    T_0.assign(N_x + 1, vector<double>(N_z + 1));//T_0 при s-ой итерации

    //std::vector<vector<double>> T_1;
    //T_1.assign(N_x + 1, vector<double>(N_z + 1));//T_1 при (s+1)-ой итерации
    vector<complex<double>> qqq;
    qqq.resize(N_t + 1);

    vector<complex<double>> qqq1;
    qqq1.resize(N_t + 1);


    vector<complex<double>> inv3_2109;
    inv3_2109.resize(N_t + 1);

    vector<complex<double>> a_m_plus;
    a_m_plus.resize(N_x + 1);
    vector<complex<double>> b_m_plus;
    b_m_plus.resize(N_x + 1);
    vector<complex<double>> c_m_plus;
    c_m_plus.resize(N_x + 1);
    std::vector<complex<double>> F_m_plus;
    F_m_plus.resize(N_x + 1);
    std::vector<complex<double>> pr_alpha_m_plus;
    pr_alpha_m_plus.resize(N_x + 2);
    std::vector<complex<double>> pr_beta_m_plus;
    pr_beta_m_plus.resize(N_x + 2);

    vector<complex<double>> a_m_minus;
    a_m_minus.resize(N_x + 1);
    vector<complex<double>> b_m_minus;
    b_m_minus.resize(N_x + 1);
    vector<complex<double>> c_m_minus;
    c_m_minus.resize(N_x + 1);
    std::vector<complex<double>> F_m_minus;
    F_m_minus.resize(N_x + 1);
    std::vector<complex<double>> pr_alpha_m_minus;
    pr_alpha_m_minus.resize(N_x + 2);
    std::vector<complex<double>> pr_beta_m_minus;
    pr_beta_m_minus.resize(N_x + 2);

    out0 << N_t << "\t";
    out0 << (N_x + 1) * (N_z + 1) << "\t";
    out0 << L_xl << "\t";
    out0 << L_xb << "\t";
    out0 << L_s << "\t";
    out0 << L_z << "\t";
    out0 << alpha_0 << "\t";

    out0 << delta_0 << "\t";
    out0 << x_c << "\t";
    out0 << D_x << "\t";
    out0 << a_x << "\t";
    out0 << tau_p << "\t";
    out0 << F_x << "\t";
    out0 << V_0 << "\t";
    out0 << q_0 << "\t";
    out0 << L_t << "\t";
    out0 << N_x << "\t";
    out0 << N_z << "\n";



    out << N_t << "\t";
    out << (N_x + 1) * (N_z + 1) << "\t";
    out << L_xl << "\t";
    out << L_xb << "\t";
    out << L_s << "\t";
    out << L_z << "\t";
    out << alpha_0 << "\t";
    out << delta_0 << "\t";
    out << x_c << "\t";
    out << D_x << "\t";
    out << a_x << "\t";
    out << tau_p << "\t";
    out << F_x << "\t";
    out << V_0 << "\t";
    out << q_0 << "\t";
    out << L_t << "\t";
    out << N_x << "\t";
    out << N_z << "\n";

    out6 << N_t << "\t";
    out6 << (N_x + 1) * (N_z + 1) << "\t";
    out6 << L_xl << "\t";
    out6 << L_xb << "\t";
    out6 << L_s << "\t";
    out6 << L_z << "\t";
    out6 << alpha_0 << "\t";
    out6 << delta_0 << "\t";
    out6 << x_c << "\t";
    out6 << D_x << "\t";
    out6 << a_x << "\t";
    out6 << tau_p << "\t";
    out6 << F_x << "\t";
    out6 << V_0 << "\t";
    out6 << q_0 << "\t";
    out6 << L_t << "\t";
    out6 << N_x << "\t";
    out6 << N_z << "\n";


    for (int j = 0; j <= N_z - 1; j++) {
        z_j = h_z * j + h_z / 2;
        if (((j + 1 / 2) > N_s) && ((j + 1 / 2) <= N_z)) {
            delta_j[j] = delta_0 * (z_j - L_s);
            V_j[j] = 1;//V_0 * (z_j - L_s);
            alpha_j[j] = alpha_0;
        }
        else {
            delta_j[j] = 0;
            V_j[j] = 1;
            alpha_j[j] = 0;
        }
        out102 << z_j << "\t";
        out102 << "delta_j = " << delta_j[j] << "\t";
        out102 << "V_j = " << V_j[j] << "\t";
        out102 << "alpha_j = " << alpha_j[j] << "\n";
    }


    for (int kk = 0; kk <= N_z - 1; kk++) {
        for (int qq = 0; qq <= kk; qq++) {
            sum_delta_0_z = sum_delta_0_z + delta_j[qq] * h_z / 2.0;
            sum_delta_0_z_2 = sum_delta_0_z_2 + delta_j[qq] * h_z;
            multiply_0_j_1_per = multiply_0_j_1_per * (1 + 0.25 * tau * delta_j[qq]) / (1 - 0.25 * tau * delta_j[qq]);
            multiply_0_j_1 = multiply_0_j_1 * (1 - 0.25 * tau * delta_j[qq]) / (1 + 0.25 * tau * delta_j[qq]);//1
            multiply_0111 = multiply_0111 * (2 + tau * delta_j[qq]) / (2 - tau * delta_j[qq]);
            multiply_0111_min_pl = multiply_0111_min_pl * (2 - tau * delta_j[qq]) / (2 + tau * delta_j[qq]);
        }
        integral_delta_0_z_2 = exp(sum_delta_0_z_2);
        integral_delta_0_z = exp(sum_delta_0_z);

        vec_int_delta_0_z[kk] = integral_delta_0_z;
        vec_int_delta_0_z_2[kk] = integral_delta_0_z_2;

        vec_multiply_0_j_1_per[kk] = multiply_0_j_1_per;
        vec_multiply_0_j_1[kk] = multiply_0_j_1;
        vec_multiply_0111[kk] = multiply_0111;
        vec_multiply_0111_min_pl[kk] = multiply_0111_min_pl;
        sum_delta_0_z = 0;
        integral_delta_0_z = 0;

        sum_delta_0_z_2 = 0;
        integral_delta_0_z_2 = 0;

        multiply_0_j_1 = 1;
        multiply_0_j_1_per = 1;
        multiply_0111 = 1;
        multiply_0111_min_pl = 1;
    }

    for (int kk = 0; kk <= N_z - 1; kk++) {
        for (int qq = kk; qq <= N_z - 1; qq++) {
            sum_delta_z_Lz = sum_delta_z_Lz + delta_j[qq] * h_z / 2.0;
            sum_delta_z_Lz_2 = sum_delta_z_Lz_2 + delta_j[qq] * h_z;
            multiply_0_j_1_minus = multiply_0_j_1_minus * (1 - 0.25 * tau * delta_j[qq]) / (1 + 0.25 * tau * delta_j[qq]);
            multiply_0_j_1_per_minus = multiply_0_j_1_per_minus * (1 + 0.25 * tau * delta_j[qq]) / (1 - 0.25 * tau * delta_j[qq]);

            multiply_0111_min = multiply_0111_min * (2 + tau * delta_j[qq]) / (2 - tau * delta_j[qq]);
        }


        vec_multiply_0111_min[kk] = multiply_0111_min;
        vec_multiply_0_j_1_minus[kk] = multiply_0_j_1_minus;
        vec_multiply_0_j_1_per_minus[kk] = multiply_0_j_1_per_minus;

        integral_delta_z_Lz = exp(sum_delta_z_Lz);
        integral_delta_z_Lz_2 = exp(sum_delta_z_Lz_2);

        vec_int_delta_z_Lz[kk] = integral_delta_z_Lz;
        vec_int_delta_z_Lz_2[kk] = integral_delta_z_Lz_2;

        multiply_0_j_1_per_minus = 1;
        multiply_0_j_1_minus = 1;
        multiply_0111_min = 1;
        sum_delta_z_Lz = 0;
        integral_delta_z_Lz = 0;

        sum_delta_z_Lz_2 = 0;
        integral_delta_z_Lz_2 = 0;
    }


    t_l = 0;
    D_xx = D_x;
    int s = 0;//для проверки на итерацию
    for (int l = 0; l <= N_t; l++) {
        t_l = tau * l;
        if (t_l <= 0.0) {//6 17
            D_x = 0;
            //D_x = D_xx;
        }
        else {
            D_x = D_xx;
        }
        if (l == 0)
        {
            for (int i = 0; i <= N_x; i++) {
                for (int j = 0; j <= N_z; j++) {
                    A_plus[i][j] = 0;
                    A_minus[i][j] = 0;

                }
            }

            for (int i = 0; i <= N_x; i++) {
                qqq[l] = qqq[l] + A_minus[i][N_z] * h_x;
                qqq1[l] = qqq1[l] + pow(abs(A_minus[i][N_z]), 2) * h_x;
            }

            for (int m = 0; m <= N_x; m++) {
                x_m = L_xb + h_x * m;
                std::complex<double> deg(-pow(((x_m - x_c) / a_x), 2) - pow(((tau * (l)-tt_0) / tau_p), 2), F_x * pow((x_m - x_c), 2));
                inv3_2109[l] = inv3_2109[l] + pow(abs(exp(deg)), 2) * h_x;
            }
            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                for (int m = 0; m <= N_x; m++) {
                    x_m = L_xb + h_x * m;
                    if ((m != 0) && (m != 1) && (m != N_x) && (m != N_x - 1)) {
                        sum_A_plus = sum_A_plus + A_plus[m][j] * h_x;
                        sum_A_minus = sum_A_minus + A_minus[m][j] * h_x;
                    }

                    sum_A_plus_1 = sum_A_plus_1 + A_plus[m][j] * h_x;
                    sum_A_minus_1 = sum_A_minus_1 + A_minus[m][j] * h_x;

                    sum_A_plus_2 = sum_A_plus_2 + pow(abs(A_plus[m][j]), 2) * h_x;
                    sum_A_minus_2 = sum_A_minus_2 + pow(abs(A_minus[m][j]), 2) * h_x;

                }
                integral_theta_plus = sum_A_plus * vec_int_delta_0_z[j];
                integral_theta_minus = sum_A_minus * vec_int_delta_z_Lz[j];

                integral_theta_plus_1 = pow(sum_A_plus_1, 2) * vec_int_delta_0_z_2[j];
                integral_theta_minus_1 = pow(sum_A_minus_1, 2) * vec_int_delta_z_Lz_2[j];

                integral_theta_plus_2 = sum_A_plus_2 * vec_int_delta_0_z_2[j];
                integral_theta_minus_2 = sum_A_minus_2 * vec_int_delta_z_Lz_2[j];

                out201 << z_j << "\t";
                out201 << t_l << "\t";
                out201 << abs(integral_theta_plus) << "\n";

                out202 << z_j << "\t";
                out202 << t_l << "\t";
                out202 << abs(integral_theta_minus) << "\n";

                out203 << z_j << "\t";
                out203 << t_l << "\t";
                out203 << abs(integral_theta_plus_1) << "\n";

                out204 << z_j << "\t";
                out204 << t_l << "\t";
                out204 << abs(integral_theta_minus_1) << "\n";

                out205 << z_j << "\t";
                out205 << t_l << "\t";
                out205 << integral_theta_plus_2 << "\n";

                out206 << z_j << "\t";
                out206 << t_l << "\t";
                out206 << integral_theta_minus_2 << "\n";

                out3011 << z_j << "\t";
                out3011 << t_l << "\t";
                out3011 << 0 << "\n";

                out3012 << z_j << "\t";
                out3012 << t_l << "\t";
                out3012 << 0 << "\n";

                out4011 << z_j << "\t";
                out4011 << t_l << "\t";
                out4011 << 0 << "\n";

                out4012 << z_j << "\t";
                out4012 << t_l << "\t";
                out4012 << 0 << "\n";

                out5011 << z_j << "\t";
                out5011 << t_l << "\t";
                out5011 << 0 << "\n";

                out5012 << z_j << "\t";
                out5012 << t_l << "\t";
                out5012 << 0 << "\n";

                out5013 << z_j << "\t";
                out5013 << t_l << "\t";
                out5013 << 0 << "\n";

                out6011 << z_j << "\t";
                out6011 << t_l << "\t";
                out6011 << 0 << "\n";

                out6012 << z_j << "\t";
                out6012 << t_l << "\t";
                out6012 << 0 << "\n";

                out6021 << z_j << "\t";
                out6021 << t_l << "\t";
                out6021 << 0 << "\n";

                out6022 << z_j << "\t";
                out6022 << t_l << "\t";
                out6022 << 0 << "\n";


                out7011 << z_j << "\t";
                out7011 << t_l << "\t";
                out7011 << 0 << "\n";


                out7012 << z_j << "\t";
                out7012 << t_l << "\t";
                out7012 << 0 << "\n";



                out8011 << z_j << "\t";
                out8011 << t_l << "\t";
                out8011 << 0 << "\n";

                out8012 << z_j << "\t";
                out8012 << t_l << "\t";
                out8012 << 0 << "\n";

                out8021 << z_j << "\t";
                out8021 << t_l << "\t";
                out8021 << 0 << "\n";

                out8022 << z_j << "\t";
                out8022 << t_l << "\t";
                out8022 << 0 << "\n";




                out92 << z_j << "\t";
                out92 << t_l << "\t";
                out92 << 0 << "\n";


                sum_A_plus = 0;
                sum_A_minus = 0;
                integral_theta_plus = 0;
                integral_theta_minus = 0;

                sum_A_plus_1 = 0;
                sum_A_minus_1 = 0;
                integral_theta_plus_1 = 0;
                integral_theta_minus_1 = 0;

                sum_A_plus_2 = 0;
                sum_A_minus_2 = 0;
                integral_theta_plus_2 = 0;
                integral_theta_minus_2 = 0;
            }

            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                for (int m = 0; m <= N_x; m++) {
                    x_m = L_xb + h_x * m;
                    int_xc_1_sum = (x_m - x_c) * (pow(abs(A_plus[m][j]), 2) + pow(abs(A_minus[m][j]), 2)) * h_x + int_xc_1_sum;
                    int_xc_2_sum = (pow(abs(A_plus[m][j]), 2) + pow(abs(A_minus[m][j]), 2)) * h_x + int_xc_2_sum;
                    int_xc_1_sum_plus = (x_m - x_c) * (pow(abs(A_plus[m][j]), 2)) * h_x + int_xc_1_sum_plus;
                    int_xc_2_sum_plus = pow(abs(A_plus[m][j]), 2) * h_x + int_xc_2_sum_plus;
                    int_xc_1_sum_minus = (x_m - x_c) * (pow(abs(A_minus[m][j]), 2)) * h_x + int_xc_1_sum_minus;
                    int_xc_2_sum_minus = pow(abs(A_minus[m][j]), 2) * h_x + int_xc_2_sum_minus;
                }
                if (int_xc_2_sum < 0.001) {
                    int_xc_end = 0;
                }
                else {
                    int_xc_end = int_xc_1_sum / int_xc_2_sum;
                }

                if (int_xc_2_sum_plus < 0.001) {
                    int_xc_end_plus = 0;
                }
                else {
                    int_xc_end_plus = int_xc_1_sum_plus / int_xc_2_sum_plus;
                }

                if (int_xc_2_sum_minus < 0.001) {
                    int_xc_end_minus = 0;
                }
                else {
                    int_xc_end_minus = int_xc_1_sum_minus / int_xc_2_sum_minus;
                }
                x_c_vec[j] = int_xc_end;
                x_c_vec_plus[j] = int_xc_end_plus;
                x_c_vec_minus[j] = int_xc_end_minus;

                out4 << z_j << "\t";
                out4 << t_l << "\t";
                out4 << int_xc_end << "\n";

                out103 << z_j << "\t";
                out103 << t_l << "\t";
                out103 << int_xc_end_plus << "\n";

                out104 << z_j << "\t";
                out104 << t_l << "\t";
                out104 << int_xc_end_minus << "\n";

                int_xc_1_sum = 0;
                int_xc_2_sum = 0;
                int_xc_1_sum_plus = 0;
                int_xc_2_sum_plus = 0;
                int_xc_1_sum_minus = 0;
                int_xc_2_sum_minus = 0;
            }

            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                for (int m = 0; m <= N_x; m++) {
                    x_m = L_xb + h_x * m;
                    int_ax_1_sum = pow((x_m - x_c_vec[j]), 2) * (pow(abs(A_plus[m][j]), 2) + pow(abs(A_minus[m][j]), 2)) * h_x + int_ax_1_sum;
                    int_ax_2_sum = (pow(abs(A_plus[m][j]), 2) + pow(abs(A_minus[m][j]), 2)) * h_x + int_ax_2_sum;
                    int_ax_1_sum_plus = pow((x_m - x_c_vec_plus[j]), 2) * pow(abs(A_plus[m][j]), 2) * h_x + int_ax_1_sum_plus;
                    int_ax_2_sum_plus = pow(abs(A_plus[m][j]), 2) * h_x + int_ax_2_sum_plus;
                    int_ax_1_sum_minus = pow((x_m - x_c_vec_minus[j]), 2) * pow(abs(A_minus[m][j]), 2) * h_x + int_ax_1_sum_minus;
                    int_ax_2_sum_minus = pow(abs(A_minus[m][j]), 2) * h_x + int_ax_2_sum_minus;
                }
                if (int_ax_2_sum < 0.001) {
                    int_ax_end = 0;
                }
                else {
                    int_ax_end = int_ax_1_sum / int_ax_2_sum;
                }

                if (int_ax_2_sum_plus < 0.001) {
                    int_ax_end_plus = 0;
                }
                else {
                    int_ax_end_plus = int_ax_1_sum_plus / int_ax_2_sum_plus;
                }

                if (int_ax_2_sum_minus < 0.001) {
                    int_ax_end_minus = 0;
                }
                else {
                    int_ax_end_minus = int_ax_1_sum_minus / int_ax_2_sum_minus;
                }
                out5 << z_j << "\t";
                out5 << t_l << "\t";
                out5 << int_ax_end << "\n";

                out105 << z_j << "\t";
                out105 << t_l << "\t";
                out105 << int_ax_end_plus << "\n";

                out106 << z_j << "\t";
                out106 << t_l << "\t";
                out106 << int_ax_end_minus << "\n";

                int_ax_1_sum = 0;
                int_ax_2_sum = 0;
                int_ax_1_sum_plus = 0;
                int_ax_2_sum_plus = 0;
                int_ax_1_sum_minus = 0;
                int_ax_2_sum_minus = 0;
            }
            for (int m = 0; m <= N_x; m++) {
                x_m = L_xb + h_x * m;
                for (int j = 0; j <= N_z; j++) {
                    if (out.is_open()) {
                        z_j = h_z * j;
                        if (j != N_z) {
                            if (m == 0) {
                                T[m][j] = 0;
                            }
                            else if (m == 1) {
                                T[m][j] = T[m - 1][j] + ((h_x * delta_j[j] * q_0) / V_j[j]) *
                                    (pow(abs(A_plus[m - 1][j + 1]), 2) +
                                        pow(abs(A_minus[m - 1][j]), 2));
                            }
                            else {
                                T[m][j] = T[m - 2][j] + ((2 * h_x * delta_j[j] * q_0) / V_j[j]) *
                                    (pow(abs(A_plus[m - 1][j + 1]), 2) +
                                        pow(abs(A_minus[m - 1][j]), 2));
                            }
                            if ((m % count_x == 0) && (j % count_z == 0)) {
                                out6 << x_m << "\t";
                                out6 << z_j << "\t";
                                out6 << T[m][j] << "\n";
                            }

                        }

                        if ((m % count_x == 0) && (j % count_z == 0)) {
                            out << x_m << "\t";
                            out << z_j << "\t";
                            out << pow(abs(A_plus[m][j]), 2) << "\n";
                        }


                        out0 << x_m << "\t";
                        out0 << z_j << "\t";
                        out0 << pow(abs(A_plus[m][j]), 2) << "\n";


                        if (m == N_x) {

                            out_2809_T_lxl << z_j << "\t";
                            out_2809_T_lxl << t_l << "\t";
                            out_2809_T_lxl << T[N_x][j] << "\n";

                            out_2809_T_lxl_f << z_j << "\t";
                            out_2809_T_lxl_f << t_l << "\t";
                            out_2809_T_lxl_f << 0 << "\n";

                            out_2809_T_lxl_pogr << z_j << "\t";
                            out_2809_T_lxl_pogr << t_l << "\t";
                            out_2809_T_lxl_pogr << T[N_x][j] - 0 << "\n";
                        }
                    }

                }

            }

            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                out91 << z_j << "\t";
                out91 << t_l << "\t";
                out91 << T[N_x][j] << "\n";
            }

        }
        else {
            s = 0;
            do {
                ok_strog = false;
                s++;
                if (s == 1) {
                    for (int m = 0; m <= N_x; m++) {
                        for (int j = 0; j <= N_z; j++) {
                            A_0_plus[m][j] = A_plus[m][j];
                            A_0_minus[m][j] = A_minus[m][j];
                        }
                    }
                }
                else {
                    for (int m = 0; m <= N_x; m++) {
                        for (int j = 0; j <= N_z; j++) {
                            A_0_plus[m][j] = A_1_plus[m][j];
                            A_0_minus[m][j] = A_1_minus[m][j];

                        }
                    }
                }
                for (int j = 0; j <= N_z; j++) {
                    if (j == 0) {
                       
                        x_m = L_xb;
                        for (int m = 0; m <= N_x; m++) {
                            x_m = L_xb + h_x * m;
                            if (m == 0) {
                                T_0[m][j] = 0;
                            }
                            else if (m == 1) {
                                T_0[m][j] = T_0[m - 1][j] +
                                    ((h_x * delta_j[j] * q_0) / V_j[j]) *
                                    ((pow(abs(A_0_plus[m - 1][j + 1]), 2) + pow(abs(A_plus[m - 1][j]), 2)) * 1 / 2 +
                                        (pow(abs(A_0_minus[m - 1][j]), 2) + pow(abs(A_minus[m - 1][j + 1]), 2)) * 1 / 2);
                            }
                            else {
                                T_0[m][j] = T_0[m - 2][j] +
                                    ((2 * h_x * delta_j[j] * q_0) / V_j[j]) *
                                    ((pow(abs(A_0_plus[m - 1][j + 1]), 2) + pow(abs(A_plus[m - 1][j]), 2)) * 1 / 2 +
                                        (pow(abs(A_0_minus[m - 1][j]), 2) + pow(abs(A_minus[m - 1][j + 1]), 2)) * 1 / 2);
                            }
                            std::complex<double> deg(-pow(((x_m - x_c) / a_x), 2) - pow(((t_l - tt_0) / tau_p), 2), F_x * pow((x_m - x_c), 2));
                            A_1_plus[m][j] = exp(deg);

                        }
                        // a_m, b_m, c_m, f_m из метода прогонки
                        for (int m = 0; m <= N_x; m++) {
                            if (m == 0) {
                                a_m_minus[0] = std::complex<double>(0, 0);
                                b_m_minus[0] = std::complex<double>(1, 0);//-1
                                c_m_minus[0] = std::complex<double>(0, 0);
                            }
                            if (m == N_x) {
                                //из краевых условий
                                c_m_minus[N_x] = std::complex<double>(0, 0);
                                b_m_minus[N_x] = std::complex<double>(1, 0);//-1
                                a_m_minus[N_x] = std::complex<double>(0, 0);
                            }
                            if ((m != 0) && (m != N_x)) {
                                b_m_minus[m] = std::complex<double>(-1 / tau - delta_j[j] / 4.0, D_x / (pow(h_x, 2)));
                                a_m_minus[m] = std::complex<double>(0, D_x / (2 * pow(h_x, 2)));
                                c_m_minus[m] = std::complex<double>(0, D_x / (2 * pow(h_x, 2)));
                            }

                            if (abs(b_m_minus[m]) < (abs(c_m_minus[m]) + abs(a_m_minus[m]))) {
                                ok_diag = false;
                                return -1;
                            }
                            if (abs(b_m_minus[m]) > (abs(c_m_minus[m]) + abs(a_m_minus[m])))
                            {
                                ok_strog = true;
                            }
                        }

                        if (!ok_strog || !ok_diag) {
                            return -1;
                        }

                        for (int m = 0; m <= N_x; m++) {
                            if ((m == 0) || (m == N_x)) {
                                F_m_minus[m] = std::complex<double>(0, 0);
                            }
                            else {
                                F_m_minus[m] = (-A_minus[m][j + 1] / tau +
                                    im_unit * (D_x / (h_x * h_x)) * (A_minus[m + 1][j + 1] / 2.0 - A_minus[m][j + 1] + A_minus[m - 1][j + 1] / 2.0)
                                    + im_unit * alpha_j[j] * (A_0_minus[m][j] + A_minus[m][j + 1]) * T_0[m][j] / 2.0
                                   + delta_j[j] * A_minus[m][j + 1] / 4.0);
                            }
                        }

                        for (int m = 1; m <= N_x + 1; m++) { //для подсчета прогоночных коэф alpha и beta (прямой ход)
                            if (m == 1) {
                                pr_alpha_m_minus[m] = c_m_minus[m - 1] / b_m_minus[m - 1];
                                pr_beta_m_minus[m] = F_m_minus[m - 1] / b_m_minus[m - 1];
                            }
                            else {
                                pr_alpha_m_minus[m] = c_m_minus[m - 1] / (b_m_minus[m - 1] - a_m_minus[m - 1] * pr_alpha_m_minus[m - 1]);
                                pr_beta_m_minus[m] = (F_m_minus[m - 1] + a_m_minus[m - 1] * pr_beta_m_minus[m - 1]) / (b_m_minus[m - 1] - a_m_minus[m - 1] * pr_alpha_m_minus[m - 1]);
                            }
                        }
                        A_1_minus[N_x][j] = pr_beta_m_minus[N_x + 1];
                        for (int m = N_x - 1; m >= 0; m--) { //для нахождения A на (s+1) итерации (обратный ход метода прогонки)
                            A_1_minus[m][j] = pr_alpha_m_minus[m + 1] * A_1_minus[m + 1][j] + pr_beta_m_minus[m + 1];
                        }
                    }
                    else if (j == N_z) {
                        for (int m = 0; m <= N_x; m++) {
                            if (m == 0) {
                                //из краевых условий
                                a_m_plus[0] = std::complex<double>(0, 0);
                                b_m_plus[0] = std::complex<double>(1, 0);
                                c_m_plus[0] = std::complex<double>(0, 0);
                            }
                            if (m == N_x) {
                                //из краевых условий
                                c_m_plus[N_x] = std::complex<double>(0, 0);
                                b_m_plus[N_x] = std::complex<double>(1, 0);
                                a_m_plus[N_x] = std::complex<double>(0, 0);
                            }
                            if ((m != 0) && (m != N_x)) {
                                b_m_plus[m] = std::complex<double>(-1 / tau - delta_j[j - 1] / 4.0, D_x / (pow(h_x, 2)));
                                a_m_plus[m] = std::complex<double>(0, D_x / (2 * pow(h_x, 2)));
                                c_m_plus[m] = std::complex<double>(0, D_x / (2 * pow(h_x, 2)));
                            }
                            if (abs(b_m_plus[m]) < (abs(c_m_plus[m]) + abs(a_m_plus[m]))) {
                                ok_diag = false;
                                return -1;
                            }
                            if (abs(b_m_plus[m]) > (abs(c_m_plus[m]) + abs(a_m_plus[m])))
                            {
                                ok_strog = true;
                            }
                        }
                        if (!ok_strog || !ok_diag) {
                            return -1;
                        }
                        
                        for (int m = 0; m <= N_x; m++) {
                            if ((m == 0) || (m == N_x)) {
                                F_m_plus[m] = std::complex<double>(0, 0);//из краевых(граничных) условий для х
                            }
                            else {//по обычной форумле считаем F_m
                                F_m_plus[m] = (-A_plus[m][j - 1] / tau +
                                    im_unit * (D_x / (h_x * h_x)) * (A_plus[m + 1][j - 1] / 2.0 - A_plus[m][j - 1] + A_plus[m - 1][j - 1] / 2.0)
                                    + im_unit * alpha_j[j - 1] * (A_0_plus[m][j] + A_plus[m][j - 1]) * T_0[m][j - 1] / 2.0
                                    + delta_j[j - 1] * A_plus[m][j - 1] / 4.0);
                            }
                        }
                        for (int m = 1; m <= N_x + 1; m++) { //для подсчета прогоночных коэф alpha и beta (прямой ход)
                            if (m == 1) {
                                pr_alpha_m_plus[m] = c_m_plus[m - 1] / b_m_plus[m - 1];
                                pr_beta_m_plus[m] = F_m_plus[m - 1] / b_m_plus[m - 1];
                            }
                            else {
                                pr_alpha_m_plus[m] = c_m_plus[m - 1] / (b_m_plus[m - 1] - a_m_plus[m - 1] * pr_alpha_m_plus[m - 1]);
                                pr_beta_m_plus[m] = (F_m_plus[m - 1] + a_m_plus[m - 1] * pr_beta_m_plus[m - 1]) / (b_m_plus[m - 1] - a_m_plus[m - 1] * pr_alpha_m_plus[m - 1]);
                            }
                        }
                        A_1_plus[N_x][j] = pr_beta_m_plus[N_x + 1];
                        A_1_minus[N_x][j] = R * A_1_plus[N_x][j];
                        for (int m = N_x - 1; m >= 0; m--) { //для нахождения A на (s+1) итерации (обратный ход метода прогонки)
                            A_1_plus[m][j] = pr_alpha_m_plus[m + 1] * A_1_plus[m + 1][j] + pr_beta_m_plus[m + 1];
                            A_1_minus[m][j] = R * A_1_plus[m][j];
                        }

                    }
                    else {
                        // a_m, b_m, c_m, f_m из метода прогонки
                        for (int m = 0; m <= N_x; m++) {
                            if (m == 0) {
                                //из краевых условий
                                a_m_plus[0] = std::complex<double>(0, 0);
                                b_m_plus[0] = std::complex<double>(1, 0);//-1
                                c_m_plus[0] = std::complex<double>(0, 0);

                                a_m_minus[0] = std::complex<double>(0, 0);
                                b_m_minus[0] = std::complex<double>(1, 0);//-1
                                c_m_minus[0] = std::complex<double>(0, 0);
                            }
                            if (m == N_x) {
                                //из краевых условий
                                c_m_plus[N_x] = std::complex<double>(0, 0);
                                b_m_plus[N_x] = std::complex<double>(1, 0);
                                a_m_plus[N_x] = std::complex<double>(0, 0);

                                c_m_minus[N_x] = std::complex<double>(0, 0);
                                b_m_minus[N_x] = std::complex<double>(1, 0);
                                a_m_minus[N_x] = std::complex<double>(0, 0);
                            }
                            if ((m != 0) && (m != N_x)) {
                                b_m_plus[m] = std::complex<double>(-1 / tau - delta_j[j - 1] / 4.0, D_x / (pow(h_x, 2)));
                                a_m_plus[m] = std::complex<double>(0, D_x / (2 * pow(h_x, 2)));
                                c_m_plus[m] = std::complex<double>(0, D_x / (2 * pow(h_x, 2)));

                                b_m_minus[m] = std::complex<double>(-1 / tau - delta_j[j] / 4.0, D_x / (pow(h_x, 2)));
                                a_m_minus[m] = std::complex<double>(0, D_x / (2 * pow(h_x, 2)));
                                c_m_minus[m] = std::complex<double>(0, D_x / (2 * pow(h_x, 2)));
                            }

                            if ((abs(b_m_plus[m]) < (abs(c_m_plus[m]) + abs(a_m_plus[m]))) ||
                                (abs(b_m_minus[m]) < (abs(c_m_minus[m]) + abs(a_m_minus[m])))) {
                                ok_diag = false;
                                return -1;
                            }
                            if ((abs(b_m_plus[m]) > (abs(c_m_plus[m]) + abs(a_m_plus[m]))) &&
                                (abs(b_m_minus[m]) > (abs(c_m_minus[m]) + abs(a_m_minus[m]))))
                            {
                                ok_strog = true;
                            }
                        }

                        if (!ok_strog || !ok_diag) {
                            return -1;
                        }
                        
                        for (int m = 0; m <= N_x; m++) {
                            if (m == 0) 
                            {
                                T_0[0][j] = 0;
                            }
                            else if (m == 1) {
                                T_0[m][j] = T_0[m - 1][j] +
                                    ((h_x * delta_j[j] * q_0) / V_j[j]) *
                                    ((pow(abs(A_0_plus[m - 1][j + 1]), 2) + pow(abs(A_plus[m - 1][j]), 2)) * 1 / 2 +
                                        (pow(abs(A_0_minus[m - 1][j]), 2) + pow(abs(A_minus[m - 1][j + 1]), 2)) * 1 / 2);
                            }
                            else {
                                
                                T_0[m][j] = T_0[m - 2][j] +
                                    ((2 * h_x * delta_j[j] * q_0) / V_j[j]) *
                                    ((pow(abs(A_0_plus[m - 1][j + 1]), 2) + pow(abs(A_plus[m - 1][j]), 2)) * 1 / 2 +
                                        (pow(abs(A_0_minus[m - 1][j]), 2) + pow(abs(A_minus[m - 1][j + 1]), 2)) * 1 / 2);
                            }
                        }

                        for (int m = 0; m <= N_x; m++) {
                            if ((m == 0) || (m == N_x)) {
                                F_m_plus[m] = std::complex<double>(0, 0);//из краевых(граничных) условий для х
                                F_m_minus[m] = std::complex<double>(0, 0);
                            }
                            else {
                                F_m_plus[m] = (-A_plus[m][j - 1] / tau +
                                    im_unit * (D_x / (h_x * h_x)) * (A_plus[m + 1][j - 1] / 2.0 - A_plus[m][j - 1] + A_plus[m - 1][j - 1] / 2.0)
                                    + im_unit * alpha_j[j - 1] * (A_0_plus[m][j] + A_plus[m][j - 1]) * T_0[m][j - 1] / 2.0
                                    + delta_j[j - 1] * A_plus[m][j - 1] / 4.0);

                                F_m_minus[m] = (-A_minus[m][j + 1] / tau +
                                    im_unit * (D_x / (h_x * h_x)) * (A_minus[m + 1][j + 1] / 2.0 - A_minus[m][j + 1] + A_minus[m - 1][j + 1] / 2.0)
                                    + im_unit * alpha_j[j] * (A_0_minus[m][j] + A_minus[m][j + 1]) * T_0[m][j] / 2.0
                                   = delta_j[j] * A_minus[m][j + 1] / 4.0);
                            }
                        }

                        for (int m = 1; m <= N_x + 1; m++) { //для подсчета прогоночных коэф alpha и beta (прямой ход)
                            if (m == 1) {
                                pr_alpha_m_plus[m] = c_m_plus[m - 1] / b_m_plus[m - 1];
                                pr_beta_m_plus[m] = F_m_plus[m - 1] / b_m_plus[m - 1];

                                pr_alpha_m_minus[m] = c_m_minus[m - 1] / b_m_minus[m - 1];
                                pr_beta_m_minus[m] = F_m_minus[m - 1] / b_m_minus[m - 1];
                            }
                            else {
                                pr_alpha_m_plus[m] = c_m_plus[m - 1] / (b_m_plus[m - 1] - a_m_plus[m - 1] * pr_alpha_m_plus[m - 1]);
                                pr_beta_m_plus[m] = (F_m_plus[m - 1] + a_m_plus[m - 1] * pr_beta_m_plus[m - 1]) / (b_m_plus[m - 1] - a_m_plus[m - 1] * pr_alpha_m_plus[m - 1]);

                                pr_alpha_m_minus[m] = c_m_minus[m - 1] / (b_m_minus[m - 1] - a_m_minus[m - 1] * pr_alpha_m_minus[m - 1]);
                                pr_beta_m_minus[m] = (F_m_minus[m - 1] + a_m_minus[m - 1] * pr_beta_m_minus[m - 1]) / (b_m_minus[m - 1] - a_m_minus[m - 1] * pr_alpha_m_minus[m - 1]);
                            }
                        }
                        A_1_plus[N_x][j] = pr_beta_m_plus[N_x + 1];
                        A_1_minus[N_x][j] = pr_beta_m_minus[N_x + 1];
                        for (int m = N_x - 1; m >= 0; m--) { //для нахождения A на (s+1) итерации (обратный ход метода прогонки)
                            A_1_plus[m][j] = pr_alpha_m_plus[m + 1] * A_1_plus[m + 1][j] + pr_beta_m_plus[m + 1];
                            A_1_minus[m][j] = pr_alpha_m_minus[m + 1] * A_1_minus[m + 1][j] + pr_beta_m_minus[m + 1];
                        }
                    }
                }
                //проверка условия останова итераций
                ok = true;
                double ost_A_plus, ost_A_minus;
                double ost_eps_plus, ost_eps_minus;
                int m_i = 0, j_i = 0;
                while ((m_i <= N_x) && ok) {
                    while ((j_i <= N_z) && ok) {
                        
                        ost_A_plus = abs(A_1_plus[m_i][j_i] - A_0_plus[m_i][j_i]);
                        ost_eps_plus = eps1 * abs(A_0_plus[m_i][j_i]) + eps2;
                        ost_A_minus = abs(A_1_minus[m_i][j_i] - A_0_minus[m_i][j_i]);
                        ost_eps_minus = eps1 * abs(A_0_minus[m_i][j_i]) + eps2;
                        if ((ost_A_plus > ost_eps_plus) || (ost_A_minus > ost_eps_minus)) {
                            ok = false;
                        }
                        j_i = j_i + 1;
                    }
                    m_i = m_i + 1;
                    j_i = 0;
                }
            } while (!ok);


            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                out91 << z_j << "\t";
                out91 << t_l << "\t";
                out91 << T_0[N_x][j] << "\n";
            }



            cout << t_l << "\n";
            out101 << s << "\n";

            for (int i = 0; i <= N_x; i++) {
                qqq[l] = qqq[l] + A_1_minus[i][N_z] * h_x;
                qqq1[l] = qqq1[l] + pow(abs(A_1_minus[i][N_z]), 2) * h_x;
            }


            for (int m = 0; m <= N_x; m++) {
                x_m = L_xb + h_x * m;
                std::complex<double> deg(-pow(((x_m - x_c) / a_x), 2) - pow(((tau * (l)-tt_0) / tau_p), 2), F_x * pow((x_m - x_c), 2));
                inv3_2109[l] = inv3_2109[l] + pow(abs(exp(deg)), 2) * h_x;
            }




            //A_2 записываем в A, так как А_2 это теперь предыдущий слой по времени
            // и T_1 записываем в Т, так как Т_1 теперь предыд слой
            //A_2 записываем в файл
            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                for (int m = 0; m <= N_x; m++) {
                    pogr_plus = pogr_plus + tau * h_x * delta_j[j] * (conj(A_1_plus[m][j]) * A_plus[m][j - 1] + A_1_plus[m][j] * conj(A_plus[m][j - 1])) / (4 + tau * delta_j[j]);
                    pogr_minus = pogr_minus + tau * h_x * delta_j[j] * (conj(A_1_minus[m][j]) * A_minus[m][j + 1] + A_1_minus[m][j] * conj(A_minus[m][j + 1])) / (4 + tau * delta_j[j]);
                }
                outpogrplus << z_j << "\t";
                outpogrplus << abs(pogr_plus) << "\n";

                outpogrminus << z_j << "\t";
                outpogrminus << abs(pogr_minus) << "\n";

                pogr_plus = 0;
                pogr_minus = 0;
            }

            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                for (int m = 0; m <= N_x; m++) {
                    x_m = L_xb + h_x * m;
                    if ((m != 0) && (m != 1) && (m != N_x) && (m != N_x - 1)) {
                        if (l >= j) {

                            std::complex<double> deg(-pow(((x_m - x_c) / a_x), 2) - pow(((tau * (l - j) - tt_0) / tau_p), 2), F_x * pow((x_m - x_c), 2));
                            A_11_plus[m][j] = exp(deg);
                            new_0111 = new_0111 + pow(abs(A_11_plus[m][j]), 2) * h_x;
                            dif_inv_plus_1 = dif_inv_plus_1 + A_11_plus[m][j] * h_x;
                            delta_0_dif_inv_p = delta_0_dif_inv_p + pow(abs(A_11_plus[m][j]), 2) * h_x;
                        }

                        sum_A_plus = sum_A_plus + A_1_plus[m][j] * h_x;
                        sum_A_minus = sum_A_minus + A_1_minus[m][j] * h_x;
                    }
                    if (j != N_z) {
                        sum1_3_inv_minus_o = sum1_3_inv_minus_o + pow(abs(A_minus[m][j + 1]), 2) * h_x;
                        sum2_3_inv_minus_o = sum2_3_inv_minus_o + (conj(A_1_minus[m][j]) * A_minus[m][j + 1] + A_1_minus[m][j] * conj(A_minus[m][j + 1])) * h_x;

                    }
                    if (j != 0) {
                        sum1_3_inv = sum1_3_inv + pow(abs(A_plus[m][j - 1]), 2) * h_x;
                        sum2_3_inv = sum2_3_inv + (conj(A_1_plus[m][j]) * A_plus[m][j - 1] + A_1_plus[m][j] * conj(A_plus[m][j - 1])) * h_x;
                    }

                    sum_A_plus_1 = sum_A_plus_1 + A_1_plus[m][j] * h_x;
                    sum_A_minus_1 = sum_A_minus_1 + A_1_minus[m][j] * h_x;

                    sum_A_plus_2 = sum_A_plus_2 + pow(abs(A_1_plus[m][j]), 2) * h_x;
                    sum_A_minus_2 = sum_A_minus_2 + pow(abs(A_1_minus[m][j]), 2) * h_x;

                    if (l >= j) {
                        sum_A_plus_2_2809 = sum_A_plus_2_2809 + pow(abs(A_1_plus[m][j]), 2) * h_x;
                    }
                    if (l + j >= N_z) {
                        sum_A_minus_2_2809 = sum_A_minus_2_2809 + pow(abs(A_1_minus[m][j]), 2) * h_x;
                    }

                    if ((l + j) >= N_z) {
                        sum_A_minus_2_2009 = sum_A_minus_2_2009 + pow(abs(A_1_minus[m][j]), 2) * h_x;
                    }

                    if (l >= j) {
                        sum_A_plus_2_2009 = sum_A_plus_2_2009 + pow(abs(A_1_plus[m][j]), 2) * h_x;
                    }

                }
                if ((l + j) >= N_z) {
                    invariant3_minus_r = qqq1[l + j - N_z];
                    invariant3_minus_l = sum_A_minus_2;
                    invariant1_minus_r = qqq[l + j - N_z];
                    invariant1_minus_l = sum_A_minus * vec_multiply_0_j_1_per_minus[j];
                    invariant3_minus_2009 = sum_A_minus_2_2009 * vec_multiply_0_j_1_minus[j];

                }

                if (l >= j) {
                    invariant3_plus_2009 = sum_A_plus_2_2009 * vec_multiply_0_j_1[j];
                }

                invariant3_l_ooo = sum_A_minus_2 * (1 + 0.25 * tau * delta_j[j]) / (1 - 0.25 * tau * delta_j[j]);
                if (j != N_z) {
                    invariant3_r_ooo = sum1_3_inv_minus_o - (tau * delta_j[j] / (4 + tau * delta_j[j])) * ((1 + 0.25 * tau * delta_j[j]) / (1 - 0.25 * tau * delta_j[j])) * sum2_3_inv_minus_o;
                }


                if (j != 0) {
                    invariant3_l = sum_A_plus_2 * (1 + 0.25 * tau * delta_j[j - 1]) / (1 - 0.25 * tau * delta_j[j - 1]);
                    invariant3_r = sum1_3_inv - (tau * delta_j[j - 1] / (4 + tau * delta_j[j - 1])) * ((1 + 0.25 * tau * delta_j[j - 1]) / (1 - 0.25 * tau * delta_j[j - 1])) * sum2_3_inv;
                    sum_3_inv = (1 - 0.25 * tau * delta_j[j - 1]) / (1 + 0.25 * tau * delta_j[j - 1]) * sum1_3_inv - (tau * delta_j[j - 1] / (4 + tau * delta_j[j - 1])) * sum2_3_inv;
                    error_3 = (1 - 0.25 * tau * delta_j[j - 1]) / (1 + 0.25 * tau * delta_j[j - 1]) * sum1_3_inv - sum_A_plus_2;
                }
                invariant1_lft = sum_A_plus * vec_multiply_0_j_1_per[j - 1];
                i_3_2809 = sum_A_plus_2 * vec_multiply_0_j_1_per[j - 1]; //sum_A_plus_2_2809
                i_3_2809_m = sum_A_minus_2 * vec_multiply_0_j_1_per_minus[j - 1]; //sum_A_minus_2_2809
                invariant1_rght = dif_inv_plus_1;
                dif_inv_plus_1 = dif_inv_plus_1 * vec_multiply_0_j_1[j - 1];


                new_0111 = new_0111 * vec_multiply_0111_min_pl[j - 1];

                invariant3_2009 = delta_0_dif_inv_p;


                integral_theta_plus = sum_A_plus * vec_int_delta_0_z[j];
                integral_theta_minus = sum_A_minus * vec_int_delta_z_Lz[j];

                integral_theta_plus_1 = pow(sum_A_plus_1, 2) * vec_int_delta_0_z_2[j];
                integral_theta_minus_1 = pow(sum_A_minus_1, 2) * vec_int_delta_z_Lz_2[j];

                integral_theta_plus_2 = sum_A_plus_2 * vec_int_delta_0_z_2[j];
                integral_theta_minus_2 = sum_A_minus_2 * vec_int_delta_z_Lz_2[j];
                
                for_T[j] = integral_theta_plus_2 / vec_int_delta_0_z_2[j];
                for_T_m[j] = integral_theta_minus_2 / vec_int_delta_z_Lz_2[j];

                out8021 << z_j << "\t";
                out8021 << t_l << "\t";
                out8021 << abs(invariant3_r_ooo) << "\n";


                out8022 << z_j << "\t";
                out8022 << t_l << "\t";
                out8022 << abs(invariant3_l_ooo) << "\n";

                out8011 << z_j << "\t";
                out8011 << t_l << "\t";
                out8011 << abs(invariant3_minus_r) << "\n";

                out8012 << z_j << "\t";
                out8012 << t_l << "\t";
                out8012 << abs(invariant3_minus_l) << "\n";

                out7011 << z_j << "\t";
                out7011 << t_l << "\t";
                out7011 << abs(invariant1_minus_r) << "\n";

                out7012 << z_j << "\t";
                out7012 << t_l << "\t";
                out7012 << abs(invariant1_minus_l) << "\n";

                out6021 << z_j << "\t";
                out6021 << t_l << "\t";
                out6021 << abs(invariant3_r) << "\n";

                out6022 << z_j << "\t";
                out6022 << t_l << "\t";
                out6022 << abs(invariant3_l) << "\n";

                out6011 << z_j << "\t";
                out6011 << t_l << "\t";
                out6011 << abs(invariant1_rght) << "\n";

                out6012 << z_j << "\t";
                out6012 << t_l << "\t";
                out6012 << abs(invariant1_lft) << "\n";

                out5013 << z_j << "\t";
                out5013 << t_l << "\t";
                out5013 << error_3 << "\n";

                out5011 << z_j << "\t";
                out5011 << t_l << "\t";
                out5011 << abs(sum_3_inv) << "\n";

                out5012 << z_j << "\t";
                out5012 << t_l << "\t";
                out5012 << sum_A_plus_2 << "\n";

                out3011 << z_j << "\t";
                out3011 << t_l << "\t";
                out3011 << abs(dif_inv_plus_1) << "\n";

                out3012 << z_j << "\t";
                out3012 << t_l << "\t";
                out3012 << abs(sum_A_plus) << "\n";

                out4011 << z_j << "\t";
                out4011 << t_l << "\t";
                out4011 << delta_0_dif_inv_p << "\n";

                out4012 << z_j << "\t";
                out4012 << t_l << "\t";
                out4012 << sum_A_plus_2 << "\n";


                out201 << z_j << "\t";
                out201 << t_l << "\t";
                out201 << abs(integral_theta_plus) << "\n";

                out202 << z_j << "\t";
                out202 << t_l << "\t";
                out202 << abs(integral_theta_minus) << "\n";

                out203 << z_j << "\t";
                out203 << t_l << "\t";
                out203 << abs(integral_theta_plus_1) << "\n";

                out204 << z_j << "\t";
                out204 << t_l << "\t";
                out204 << abs(integral_theta_minus_1) << "\n";

                out205 << z_j << "\t";
                out205 << t_l << "\t";
                out205 << integral_theta_plus_2 << "\n";

                out206 << z_j << "\t";
                out206 << t_l << "\t";
                out206 << integral_theta_minus_2 << "\n";

                if (t_l == 5.0) {
                    out71 << z_j << "\t";
                    out71 << abs(integral_theta_plus) << "\n";
                    out73 << z_j << "\t";
                    out73 << abs(invariant1_rght) << "\n";

                    out71_ << z_j << "\t";
                    out71_ << integral_theta_plus.real() << "\n";
                    out73_ << z_j << "\t";
                    out73_ << invariant1_rght.real() << "\n";

                    out71__ << z_j << "\t";
                    out71__ << integral_theta_plus.imag() << "\n";
                    out73__ << z_j << "\t";
                    out73__ << invariant1_rght.imag() << "\n";

                    out471 << z_j << "\t";
                    out471 << integral_theta_plus_2 << "\n";
                    out473 << z_j << "\t";
                    out473 << abs(invariant3_r) << "\n";

                    out0909 << z_j << "\t";
                    out0909 << abs(invariant3_l) << "\n";


                    out2009 << z_j << "\t";
                    out2009 << abs(i_3_2809) << "\n";

                    out0111_1 << z_j << "\t";
                    out0111_1 << sum_A_plus_2 * vec_multiply_0111[j] << "\n"; 
                }

                if (t_l == 15.0) {
                    out72 << z_j << "\t";
                    out72 << abs(integral_theta_plus) << "\n";
                    out74 << z_j << "\t";
                    out74 << abs(invariant1_rght) << "\n";

                    out72_ << z_j << "\t";
                    out72_ << integral_theta_plus.real() << "\n";
                    out74_ << z_j << "\t";
                    out74_ << invariant1_rght.real() << "\n";

                    out72__ << z_j << "\t";
                    out72__ << integral_theta_plus.imag() << "\n";
                    out74__ << z_j << "\t";
                    out74__ << invariant1_rght.imag() << "\n";



                    out472 << z_j << "\t";
                    out472 << integral_theta_plus_2 << "\n";
                    out474 << z_j << "\t";
                    out474 << abs(invariant3_r) << "\n";

                    out0909_1 << z_j << "\t";
                    out0909_1 << abs(invariant3_l) << "\n";

                    out2009_1 << z_j << "\t";
                    out2009_1 << abs(i_3_2809) << "\n";

                    
                    out0111_2 << z_j << "\t";
                    out0111_2 << sum_A_plus_2 * vec_multiply_0111[j - 1] << "\n";
                }

                if (t_l == 21.0) {
                    out81 << z_j << "\t";
                    out81 << abs(integral_theta_minus) << "\n";
                    out83 << z_j << "\t";
                    out83 << abs(invariant1_minus_r) << "\n";

                    out81_ << z_j << "\t";
                    out81_ << integral_theta_minus.real() << "\n";
                    out83_ << z_j << "\t";
                    out83_ << invariant1_minus_r.real() << "\n";

                    out81__ << z_j << "\t";
                    out81__ << integral_theta_minus.imag() << "\n";
                    out83__ << z_j << "\t";
                    out83__ << invariant1_minus_r.imag() << "\n";

                    out481 << z_j << "\t";
                    out481 << integral_theta_minus_2 << "\n";
                    out483 << z_j << "\t";
                    out483 << abs(invariant3_minus_r) << "\n";

                    out2009_2 << z_j << "\t";
                    out2009_2 << abs(i_3_2809_m) << "\n";

                    out0111_3 << z_j << "\t";
                    out0111_3 << sum_A_minus_2 * vec_multiply_0111_min[j] << "\n";
                }

                if (t_l == 30.0) {
                    out82 << z_j << "\t";
                    out82 << abs(integral_theta_minus) << "\n";
                    out84 << z_j << "\t";
                    out84 << abs(invariant1_minus_r) << "\n";

                    out82_ << z_j << "\t";
                    out82_ << integral_theta_minus.real() << "\n";
                    out84_ << z_j << "\t";
                    out84_ << invariant1_minus_r.real() << "\n";

                    out82__ << z_j << "\t";
                    out82__ << integral_theta_minus.imag() << "\n";
                    out84__ << z_j << "\t";
                    out84__ << invariant1_minus_r.imag() << "\n";


                    out482 << z_j << "\t";
                    out482 << integral_theta_minus_2 << "\n";
                    out484 << z_j << "\t";
                    out484 << abs(invariant3_minus_r) << "\n";

                    out2009_3 << z_j << "\t";
                    out2009_3 << abs(i_3_2809_m) << "\n";

                    out0111_4 << z_j << "\t";
                    out0111_4 << sum_A_minus_2 * vec_multiply_0111_min[j] << "\n";
                }

                sum1_3_inv_minus_o = 0;
                sum2_3_inv_minus_o = 0;
                invariant3_l_ooo = 0;
                invariant3_r_ooo = 0;

                error_3 = 0;
                sum1_3_inv = 0;
                sum2_3_inv = 0;
                sum_3_inv = 0;

                dif_inv_plus_1 = 0;
                new_0111 = 0;
                delta_0_dif_inv_p = 0;
                sum_A_plus = 0;
                sum_A_minus = 0;
                integral_theta_plus = 0;
                integral_theta_minus = 0;

                sum_A_plus_1 = 0;
                sum_A_minus_1 = 0;
                integral_theta_plus_1 = 0;
                integral_theta_minus_1 = 0;

                sum_A_plus_2 = 0;
                sum_A_minus_2 = 0;

                sum_A_plus_2_2809 = 0;
                sum_A_minus_2_2809 = 0;
                integral_theta_plus_2 = 0;
                integral_theta_minus_2 = 0;
                integral_theta_plus_2_2809 = 0;
                integral_theta_minus_2_2809 = 0;
                sum_A_minus_2_2009 = 0;
                sum_A_plus_2_2009 = 0;
            }

            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                for (int m = 0; m <= N_x; m++) {
                    x_m = L_xb + h_x * m;
                    int_xc_1_sum = (x_m - x_c) * (pow(abs(A_1_plus[m][j]), 2) + pow(abs(A_1_minus[m][j]), 2)) * h_x + int_xc_1_sum;
                    int_xc_2_sum = (pow(abs(A_1_plus[m][j]), 2) + pow(abs(A_1_minus[m][j]), 2)) * h_x + int_xc_2_sum;

                    int_xc_1_sum_plus = (x_m - x_c) * pow(abs(A_1_plus[m][j]), 2) * h_x + int_xc_1_sum_plus;
                    int_xc_2_sum_plus = pow(abs(A_1_plus[m][j]), 2) * h_x + int_xc_2_sum_plus;

                    int_xc_1_sum_minus = (x_m - x_c) * pow(abs(A_1_minus[m][j]), 2) * h_x + int_xc_1_sum_minus;
                    int_xc_2_sum_minus = pow(abs(A_1_minus[m][j]), 2) * h_x + int_xc_2_sum_minus;
                }
                if (int_xc_2_sum < 0.001) {
                    int_xc_end = 0;
                }
                else {
                    int_xc_end = int_xc_1_sum / int_xc_2_sum;
                }

                if (int_xc_2_sum_plus < 0.001) {
                    int_xc_end_plus = 0;
                }
                else {
                    int_xc_end_plus = int_xc_1_sum_plus / int_xc_2_sum_plus;
                }

                if (int_xc_2_sum_minus < 0.001) {
                    int_xc_end_minus = 0;
                }
                else {
                    int_xc_end_minus = int_xc_1_sum_minus / int_xc_2_sum_minus;
                }

                x_c_vec[j] = int_xc_end;
                x_c_vec_plus[j] = int_xc_end_plus;
                x_c_vec_minus[j] = int_xc_end_minus;

                out4 << z_j << "\t";
                out4 << t_l << "\t";
                out4 << int_xc_end << "\n";

                out103 << z_j << "\t";
                out103 << t_l << "\t";
                out103 << int_xc_end_plus << "\n";

                out104 << z_j << "\t";
                out104 << t_l << "\t";
                out104 << int_xc_end_minus << "\n";

                int_xc_1_sum = 0;
                int_xc_2_sum = 0;

                int_xc_1_sum_plus = 0;
                int_xc_2_sum_plus = 0;

                int_xc_1_sum_minus = 0;
                int_xc_2_sum_minus = 0;
            }

            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                for (int m = 0; m <= N_x; m++) {
                    x_m = L_xb + h_x * m;
                    int_ax_1_sum = pow(x_m - x_c_vec[j], 2) * (pow(abs(A_1_plus[m][j]), 2) + pow(abs(A_1_minus[m][j]), 2)) * h_x + int_ax_1_sum;
                    int_ax_2_sum = (pow(abs(A_1_plus[m][j]), 2) + pow(abs(A_1_minus[m][j]), 2)) * h_x + int_ax_2_sum;

                    int_ax_1_sum_plus = pow(x_m - x_c_vec_plus[j], 2) * pow(abs(A_1_plus[m][j]), 2) * h_x + int_ax_1_sum_plus;
                    int_ax_2_sum_plus = pow(abs(A_1_plus[m][j]), 2) * h_x + int_ax_2_sum_plus;

                    int_ax_1_sum_minus = pow(x_m - x_c_vec_minus[j], 2) * pow(abs(A_1_minus[m][j]), 2) * h_x + int_ax_1_sum_minus;
                    int_ax_2_sum_minus = pow(abs(A_1_minus[m][j]), 2) * h_x + int_ax_2_sum_minus;
                }
                if (int_ax_2_sum < 0.001) {
                    int_ax_end = 0;
                }
                else {
                    int_ax_end = int_ax_1_sum / int_ax_2_sum;
                }

                if (int_ax_2_sum_plus < 0.001) {
                    int_ax_end_plus = 0;
                }
                else {
                    int_ax_end_plus = int_ax_1_sum_plus / int_ax_2_sum_plus;
                }

                if (int_ax_2_sum_minus < 0.001) {
                    int_ax_end_minus = 0;
                }
                else {
                    int_ax_end_minus = int_ax_1_sum_minus / int_ax_2_sum_minus;
                }
                out5 << z_j << "\t";
                out5 << t_l << "\t";
                out5 << int_ax_end << "\n";

                out105 << z_j << "\t";
                out105 << t_l << "\t";
                out105 << int_ax_end_plus << "\n";

                out106 << z_j << "\t";
                out106 << t_l << "\t";
                out106 << int_ax_end_minus << "\n";

                int_ax_1_sum = 0;
                int_ax_2_sum = 0;

                int_ax_1_sum_plus = 0;
                int_ax_2_sum_plus = 0;

                int_ax_1_sum_minus = 0;
                int_ax_2_sum_minus = 0;
            }

            for (int m = 0; m <= N_x; m++) {
                x_m = L_xb + h_x * m;
                for (int j = 0; j <= N_z; j++) {
                    if (out.is_open()) {
                        z_j = h_z * j;
                        if (l % count_t == 0) {

                            if ((m % count_x == 0) && (j % count_z == 0)) {
                                out6 << x_m << "\t";
                                out6 << z_j << "\t";
                                out6 << T_0[m][j] << "\n";

                                out << x_m << "\t";
                                out << z_j << "\t";
                                out << pow(abs(A_1_plus[m][j]), 2) + pow(abs(A_1_minus[m][j]), 2) << "\n";
                            }

                            out0 << x_m << "\t";
                            out0 << z_j << "\t";
                            out0 << pow(abs(A_1_plus[m][j] + A_1_minus[m][j]), 2) << "\n";

                        }
                        if (m == N_x) {

                            out_2809_T_lxl << z_j << "\t";
                            out_2809_T_lxl << t_l << "\t";
                            out_2809_T_lxl << T_0[N_x][j] << "\n";



                            if (j == N_z - 1) {
                                out_2809_T_lxl_f << z_j << "\t";
                                out_2809_T_lxl_f << t_l << "\t";
                                out_2809_T_lxl_f << 0 << "\n";

                                out_2809_T_lxl_pogr << z_j << "\t";
                                out_2809_T_lxl_pogr << t_l << "\t";
                                out_2809_T_lxl_pogr << 0 << "\n";
                            }
                            else if (j == N_z) {
                                out_2809_T_lxl_f << z_j << "\t";
                                out_2809_T_lxl_f << t_l << "\t";
                                out_2809_T_lxl_f << 0 << "\n";

                                out_2809_T_lxl_pogr << z_j << "\t";
                                out_2809_T_lxl_pogr << t_l << "\t";
                                out_2809_T_lxl_pogr << 0 << "\n";
                            }
                            else
                            {
                                out_2809_T_lxl_f << z_j << "\t";
                                out_2809_T_lxl_f << t_l << "\t";
                                out_2809_T_lxl_f << delta_j[j] * q_0 * (for_T[j + 1] + for_T_m[j]) / V_j[j] << "\n";

                                out_2809_T_lxl_pogr << z_j << "\t";
                                out_2809_T_lxl_pogr << t_l << "\t";
                                out_2809_T_lxl_pogr << T_0[N_x][j] - delta_j[j] * q_0 * (for_T[j + 1] + for_T_m[j]) / V_j[j] << "\n";
                            }
                        }
                    }
                    A_plus[m][j] = A_1_plus[m][j];
                    A_minus[m][j] = A_1_minus[m][j];
                    T[m][j] = T_0[m][j];
                }
            }
        }
    }
}