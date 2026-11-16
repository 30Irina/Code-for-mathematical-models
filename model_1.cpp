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
    double sum_abs_A_2_0211 = 0, sum_abs_A_2_0211_2 = 0, integral_new_0811 = 0, all_sum_0811 = 0, sum_abs_A_2_1511 = 0, sum_abs_A_2_1511_n = 0, sum_abs_A_2_260125 = 0, sum_abs_A_2_260125_2 = 0;
    std::complex<double> invpogr3 = std::complex<double>(0, 0);
    std::complex<double> inv3_sep = std::complex<double>(0, 0);
    std::complex<double> pogr = std::complex<double>(0, 0);
    std::complex<double> inv3_bez2slag = std::complex<double>(0, 0);
    std::complex<double> inv_H_t = std::complex<double>(0, 0);
    double inv_dif_1 = 0, inv_dif_2 = 0;
    bool ok;
    double arg_phi = 0;
    double int_xc_1_sum = 0, int_xc_2_sum = 0, int_xc_end = 0, int_ax_1_sum = 0, int_ax_2_sum = 0, int_ax_end = 0;
    double int_zero = 0, sum_integral_new = 0, integral_new = 0, sum_abs_A_2 = 0, int_abs_A_2 = 0, all_sum = 0, int_3 = 0, int_0 = 0, sum_abs_A;
    double sum_der_z = 0, sum_der_x = 0;
    std::complex<double> int_der_z = std::complex<double>(0, 0);
    std::complex<double> int_der_x = std::complex<double>(0, 0);
    std::complex<double> int_der_ok = std::complex<double>(0, 0);
    std::complex<double> sum_conj = std::complex<double>(0, 0);
    std::complex<double> int_conj = std::complex<double>(0, 0);
    std::complex<double> int_beta = std::complex<double>(0, 0);
    bool ok_int = true;
    bool ok_diag = true, ok_strog = false;//проверка на диагональное преобладание в методе прогонки
    double D_x, delta_0, hi, D_z, beta;
    vector<double> delta_j;
    vector<double> V_j;
    vector<double> alpha_j;
    int alpha_0, L_s, L_z, L_t, N_t, N_x, N_z, z_c;
    double N_s;
    const double pi = 3.1415926535, eps1 = 0.001, eps2 = 0.01 * eps1;
    const int x_c = 0, F_x = 0, L_xb = -5, L_xl = 5, a_z = 1, a_x = 1, V_0 = 1, q_0 = 5; //a_z = 1
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
    std::cout << "Input hi: ";
    std::cin >> hi;
    std::cout << "Input z_c: ";
    std::cin >> z_c;
    beta = pi * hi;
    D_z = 1 / (4 * pi * hi);

    std::cout << "Input L_t: ";
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
    std::ofstream out6;

    std::ofstream out200;
    std::ofstream out201;

    std::ofstream out300;
    std::ofstream out301;

    std::ofstream out99;
    std::ofstream out999;
    std::ofstream out90;
    std::ofstream out110;
    std::ofstream out1100;

    std::ofstream out2333;
    std::ofstream out3333;
    std::ofstream out4333;
    std::ofstream out0408;

    std::ofstream out0909;
    std::ofstream out0909pogr;
    std::ofstream out0909A;

    std::ofstream out2009_0;
    std::ofstream out2009_5;
    std::ofstream out2009_15;
    std::ofstream out2009_24;
    std::ofstream out2009_9024;
    std::ofstream out2009_12;
    std::ofstream out2009_21024;
    std::ofstream out0211;
    std::ofstream out0211_1;
    std::ofstream out0211_2;

    std::ofstream out3_0811;

    std::ofstream out1511;
    std::ofstream out1511_1;

    std::ofstream out_060125;
    std::ofstream out_060125_conj;

    std::ofstream out260125;

    out260125.open("out260125.csv");
    out_060125.open("out_060125.csv");
    out_060125_conj.open("out_060125_conj.csv");

    out1511.open("1511.csv");
    out1511_1.open("1511_1.csv");

    out3_0811.open("3_0811.csv");

    out0211.open("0211.csv");
    out0211_1.open("0211_1.csv");
    out0211_2.open("0211_2.csv");

    out2009_0.open("2009_0.csv");
    out2009_5.open("2009_5.csv");
    out2009_15.open("2009_15.csv");
    out2009_24.open("2009_24.csv");
    out2009_9024.open("2009_9024.csv");
    out2009_12.open("2009_12.csv");
    out2009_21024.open("2009_21024.csv");

    out.open("tabl_A.csv");
    out2.open("tabl1.csv");
    out3.open("tabl2.csv");

    out0909.open("tabl0909.csv");
    out0909pogr.open("tabl0909pogr.csv");
    out0909A.open("tabl0909prc.csv");

    out2333.open("tabl3.csv");
    out3333.open("tabl4pogr.csv");
    out4333.open("tabl4pogrdif.csv");
    out0408.open("inv3bez2slag.csv");

    out4.open("tabl_xc.csv");
    out5.open("tabl_ax.csv");
    out8.open("alpha_.csv");
    out6.open("tabl_t.csv");
    out9.open("I_3.csv");
    out10.open("I_4.csv");
    out11.open("prI_3.csv");
    out12.open("prI_4.csv");
    out101.open("sss.csv");

    out200.open("inv_1.csv");
    out201.open("inv_1_2.csv");

    out300.open("inv_2.csv");
    out301.open("inv_2_2.csv");

    out99.open("I_3r.csv");
    out999.open("I_3m.csv");
    out90.open("I_30.csv");
    out110.open("I_4r.csv");
    out1100.open("I_4m.csv");

    std::complex<double> im_unit = std::complex<double>(0, 1);
    //определяем расчетные шаги сетки по координатам
    double tau = double(L_t) / N_t;
    double h_x = double(L_xl - L_xb) / (N_x);
    double h_z = double(L_z) / N_z;
    N_s = double(L_s) / h_z;
    out4 << L_z / h_z + 1 << "\t";
    out4 << L_t / tau + 1 << "\t";
    out4 << L_t << "\t";
    out4 << N_t << "\n";

    out5 << L_z / h_z + 1 << "\t";
    out5 << L_t / tau + 1 << "\t";
    out5 << L_t << "\t";
    out5 << N_t << "\n";


    out_060125 << L_xl - L_xb / h_x + 1 << "\t";
    out_060125 << L_t / tau + 1 << "\t";
    out_060125 << L_t << "\t";
    out_060125 << N_t << "\n";


    out_060125_conj << L_xl - L_xb / h_x + 1 << "\t";
    out_060125_conj << L_t / tau + 1 << "\t";
    out_060125_conj << L_t << "\t";
    out_060125_conj << N_t << "\n";
    
    double t_end = tau * N_t, z_end = h_z * N_z, x_end = -L_xb + h_x * N_x;
    double z_j = 0, x_m = L_xb, t_l = 0;
    std::vector<vector<complex<double>>> A;
    A.assign(N_x + 1, vector<complex<double>>(N_z + 1));//A с предыд слоя по времени

    std::vector<vector<complex<double>>> A_0;
    A_0.assign(N_x + 1, vector<complex<double>>(N_z + 1));//A_0 при s-ой итерации

    std::vector<vector<complex<double>>> A_1;
    A_1.assign(N_x + 1, vector<complex<double>>(N_z + 1));//A_1 при (s+1)-ой итерации

    std::vector<vector<complex<double>>> A_2;
    A_2.assign(N_x + 1, vector<complex<double>>(N_z + 1));//A_2 при (s+2)-ой итерации

    std::vector<vector<double>> T;
    T.assign(N_x + 1, vector<double>(N_z + 1));//T с предыд слоя по времени

    std::vector<vector<double>> T_0;
    T_0.assign(N_x + 1, vector<double>(N_z + 1));//T_0 при s-ой итерации

    std::vector<vector<double>> T_1;
    T_1.assign(N_x + 1, vector<double>(N_z + 1));//T_1 при (s+1)-ой итерации

    std::vector<vector<complex<double>>> A_conj;
    A_conj.assign(N_x + 1, vector<complex<double>>(N_z + 1));

    vector<complex<double>> a_j;
    a_j.resize(N_z + 1);
    vector<complex<double>> b_j;
    b_j.resize(N_z + 1);
    vector<complex<double>> c_j;
    c_j.resize(N_z + 1);
    std::vector<complex<double>> F_j;
    F_j.resize(N_z + 1);
    std::vector<complex<double>> pr_alpha_j;
    pr_alpha_j.resize(N_z + 2);
    std::vector<complex<double>> pr_beta_j;
    pr_beta_j.resize(N_z + 2);

    vector<complex<double>> a_m;
    a_m.resize(N_x + 1);
    vector<complex<double>> b_m;
    b_m.resize(N_x + 1);
    vector<complex<double>> c_m;
    c_m.resize(N_x + 1);
    std::vector<complex<double>> F_m;
    F_m.resize(N_x + 1);
    std::vector<complex<double>> pr_alpha_m;
    pr_alpha_m.resize(N_x + 2);
    std::vector<complex<double>> pr_beta_m;
    pr_beta_m.resize(N_x + 2);
    
    std::complex<double> A_der_z = std::complex<double>(0, 0);
    std::complex<double> A_der_x = std::complex<double>(0, 0);
    std::complex<double> A_conj_der_x = std::complex<double>(0, 0);

    out << N_t << "\t";
    out << (N_x + 1) * (N_z + 1) << "\t";
    out << L_xl << "\t";
    out << L_xb << "\t";
    out << L_s << "\t";
    out << L_z << "\t";
    out << alpha_0 << "\t";
    out << beta << "\t";
    out << delta_0 << "\t";
    out << x_c << "\t";
    out << z_c << "\t";
    out << D_x << "\t";
    out << D_z << "\t";
    out << a_x << "\t";
    out << a_z << "\t";
    out << F_x << "\t";
    out << V_0 << "\t";
    out << q_0 << "\t";
    out << hi << "\t";
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
    out6 << beta << "\t";
    out6 << delta_0 << "\t";
    out6 << x_c << "\t";
    out6 << z_c << "\t";
    out6 << D_x << "\t";
    out6 << D_z << "\t";
    out6 << a_x << "\t";
    out6 << a_z << "\t";
    out6 << F_x << "\t";
    out6 << V_0 << "\t";
    out6 << q_0 << "\t";
    out6 << hi << "\t";
    out6 << L_t << "\t";
    out6 << N_x << "\t";
    out6 << N_z << "\n";
    
    for (int j = 0; j <= N_z; j++) {
        z_j = h_z * j;
        if ((j > N_s) && (j <= N_z)) {
            delta_j[j] = delta_0 * (z_j - L_s);
            V_j[j] = 1;//V_0 * (z_j - L_s);
            alpha_j[j] = alpha_0;
        }
        else {
            delta_j[j] = 0;
            V_j[j] = 1;
            alpha_j[j] = 0;
        }
    }
    t_l = 0;
    int s = 0;//для проверки на итерацию
    for (int l = 0; l <= N_t; l++) {
        t_l = tau * l;
        if (l == 0) //на нулевом слое по времени A и T известны из начальных условий
        {
            for (int i = 0; i <= N_x; i++) {
                x_m = L_xb + h_x * i;
                for (int j = 0; j <= N_z; j++) {
                    z_j = h_z * j;
                    std::complex<double> deg(-pow(((z_j - z_c) / a_z), 2) - pow(((x_m - x_c) / a_x), 2),
                        -2 * pi * hi * (z_j - z_c) + F_x * pow((x_m - x_c), 2));
                    A[i][j] = exp(deg);
                }
            }

            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                for (int m = 0; m <= N_x; m++) {
                    x_m = L_xb + h_x * m;
                    int_xc_1_sum = (x_m - x_c) * pow(abs(A[m][j]), 2) * h_x + int_xc_1_sum;
                    int_xc_2_sum = pow(abs(A[m][j]), 2) * h_x + int_xc_2_sum;
                }
                if (int_xc_2_sum < 0.001)
                {
                    int_xc_end = 0;
                }
                else
                {
                    int_xc_end = int_xc_1_sum / int_xc_2_sum;
                }
                x_c_vec[j] = int_xc_end;

                out4 << z_j << "\t";
                out4 << t_l << "\t";
                out4 << int_xc_end << "\n";

                int_xc_1_sum = 0;
                int_xc_2_sum = 0;
            }

            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                for (int m = 0; m <= N_x; m++) {
                    x_m = L_xb + h_x * m;
                    int_ax_1_sum = pow(((x_m - x_c_vec[j]) * abs(A[m][j])), 2) * h_x + int_ax_1_sum;
                    int_ax_2_sum = pow(abs(A[m][j]), 2) * h_x + int_ax_2_sum;
                }
                if (int_ax_2_sum < 0.001)
                {
                    int_ax_end = 0;
                }
                else
                {
                    int_ax_end = int_ax_1_sum / int_ax_2_sum;
                }
                
                out5 << z_j << "\t";
                out5 << t_l << "\t";
                out5 << int_ax_end << "\n";

                int_ax_1_sum = 0;
                int_ax_2_sum = 0;
            }
            

            for (int mm = 0; mm <= N_x; mm++) {
                for (int jj = 0; jj <= N_z; jj++) {
                    A_conj[mm][jj] = conj(A[mm][jj]);
                }
            }

            for (int m = 0; m <= N_x; m++) {
                x_m = L_xb + h_x * m;
                for (int j = 0; j <= N_z; j++) {
                    if (out.is_open()) {
                        z_j = h_z * j;
                        if (m == 0) {
                            T[m][j] = 0;
                        }
                        else {
                            T[m][j] = (h_x * delta_j[j] * q_0 * pow(abs(A[m][j]), 2)) / V_j[j] + T[m - 1][j];
                        }
                        inv_dif_1 = inv_dif_1 + pow(abs(A[m][j]), 2);
                        inv_dif_2 = inv_dif_2 + pow(abs(A[m][j]), 2);
                        if ((j == N_z) && (m % count_x == 0)) {
                            out_060125 << x_m << "\t";
                            out_060125 << pow(abs(A[m][j]), 2) << "\n";

                            out_060125_conj << x_m << "\t";
                            out_060125_conj << pow(abs(conj(A[m][j])), 2) << "\n";
                        }
                        if ((j % count_z == 0) && (m % count_x == 0)) {
                            out6 << x_m << "\t";
                            out6 << z_j << "\t";
                            out6 << T[m][j] << "\n";

                            out << x_m << "\t";
                            out << z_j << "\t";

                            out << pow(abs(A[m][j]), 2) << "\n";

                            out2009_0 << x_m << "\t";
                            out2009_0 << z_j << "\t";

                            out2009_0 << pow(abs(A[m][j]), 2) << "\n";

                        }

                        if ((m != 0) && (m != N_x) && (j != 0) && (j != N_z)) {
                            inv3_sep = inv3_sep + pow(abs(A[m][j]), 2) * h_x * h_z * (1 + 0.25 * tau * delta_j[j]) / (1 - 0.25 * tau * delta_j[j]);
                            invpogr3 = invpogr3 + h_x * h_z * ((1 - 0.25 * tau * delta_j[j]) * pow(abs(A[m][j]), 2) /
                                (1 + 0.25 * tau * delta_j[j]) - 0.25 * tau * delta_j[j] * (A[m][j] *
                                    conj(A[m][j]) + A[m][j] * conj(A[m][j])) / (1 + 0.25 * tau * delta_j[j]));

                            pogr = pogr + h_x * h_z * 0.25 * tau * delta_j[j] *
                                (A[m][j] * conj(A[m][j]) + A[m][j] * conj(A[m][j])) /
                                (1 + 0.25 * tau * delta_j[j]);
                            inv3_bez2slag = inv3_bez2slag + h_x * h_z *
                                ((1 - 0.25 * tau * delta_j[j]) * pow(abs(A[m][j]), 2) /
                                    (1 + 0.25 * tau * delta_j[j]));
                        }
                        if ((m == 0) && (j == 0)) {
                            sum_abs_A_2 = sum_abs_A_2 + (1 / 2.0) * h_x * h_z * pow(abs(A[m][j]), 2) / 2.0;

                        }
                        else if ((m == 0) && (j == N_z)) {
                            sum_abs_A_2 = sum_abs_A_2 + (1 / 2.0) * h_x * h_z * pow(abs(A[m][j]), 2) / 2.0;
                        }
                        else if ((m == N_x) && (j == 0)) {
                            sum_abs_A_2 = sum_abs_A_2 + (1 / 2.0) * h_x * h_z * pow(abs(A[m][j]), 2) / 2.0;
                        }
                        else if ((m == N_x) && (j == N_z)) {
                            sum_abs_A_2 = sum_abs_A_2 + (1 / 2.0) * h_x * h_z * pow(abs(A[m][j]), 2) / 2.0;
                        }

                        if ((j != 0) && (j != N_z)) {
                            sum_abs_A_2 = sum_abs_A_2 + (1 / 2.0) * h_x * h_z * pow(abs(A[0][j]), 2) +
                                (1 / 2.0) * h_x * h_z * pow(abs(A[N_x][j]), 2);
                        }

                        if ((m != 0) && (m != N_z)) {
                            if ((j == 0) || (j == N_z)) {
                                sum_abs_A_2 = sum_abs_A_2 + (1 / 2.0) * h_x * h_z * pow(abs(A[m][j]), 2);
                            }
                            else {
                                sum_abs_A_2 = sum_abs_A_2 + h_x * h_z * pow(abs(A[m][j]), 2);
                            }
                        }

                        if (j >= N_s) {
                            if ((j == 0) || (j == N_z)) {
                                all_sum_0811 = all_sum_0811 + (1 / 2.0) * pow(abs(A[m][j]), 2) * delta_j[j];
                            }
                            all_sum_0811 = all_sum_0811 + pow(abs(A[m][j]), 2) * delta_j[j];
                            all_sum = all_sum + pow(abs(A[m][j]), 2) * delta_j[j];
                        }
                        if (j == 0) {
                            A_der_z = (A[m][j + 1] - A[m][j]) / h_z;
                        }
                        else if (j == N_z) {
                            A_der_z = (A[m][j] - A[m][j - 1]) / h_z;
                        }
                        else if ((j != 0) && (j != N_z)) {
                            A_der_z = (A[m][j + 1] - A[m][j - 1]) / (2 * h_z);
                        }

                        if (m == 0) {
                            A_der_x = (A[m + 1][j] - A[m][j]) / h_x;
                            A_conj_der_x = (A_conj[m + 1][j] - A_conj[m][j]) / h_x;
                        }
                        else if (m == N_x) {
                            A_der_x = (A[m][j] - A[m - 1][j]) / h_x;
                            A_conj_der_x = (A_conj[m][j] - A_conj[m - 1][j]) / h_x;
                        }
                        else if ((m != 0) && (m != N_x)) {
                            A_der_x = (A[m + 1][j] - A[m - 1][j]) / (2 * h_x);
                            A_conj_der_x = (A_conj[m + 1][j] - A_conj[m - 1][j]) / (2 * h_x);
                        }
                        sum_der_z = sum_der_z + pow(abs(A_der_z), 2);
                        sum_der_x = sum_der_x + pow(abs(A_der_x), 2);
                        sum_conj = sum_conj + A[m][j] * A_conj_der_x;

                        if ((j != 0) && (j != N_z) && (m != 0) && (m != N_x)) {
                            sum_abs_A_2_1511 = sum_abs_A_2_1511 + h_x * h_z * pow(abs(A[m][j]), 2) * (1 + 0.5 * tau * delta_j[j]);
                            sum_abs_A_2_0211 = sum_abs_A_2_0211 + h_x * h_z * pow(abs(A[m][j]), 2) * (1 + 0.25 * tau * delta_j[j]) / (1 - 0.25 * tau * delta_j[j]);
                            sum_abs_A_2_0211_2 = sum_abs_A_2_0211_2 + h_x * h_z * pow(abs(A[m][j]), 2) * (2 + tau * delta_j[j]) / (2 - tau * delta_j[j]);
                            sum_abs_A_2_260125 = sum_abs_A_2_260125 + h_x * h_z * tau * (delta_j[j] / (1 - 0.5 * tau * delta_j[j])) * pow(abs(A[m][j]), 2);
                        }
                    }
                }
            }
            inv_dif_1 = inv_dif_1 * h_x * h_z;
            inv_dif_2 = inv_dif_2 * h_x * h_z;
            out200 << t_l << "\t";
            out200 << inv_dif_1 << "\n";

            out201 << t_l << "\t";
            out201 << inv_dif_2 << "\n";
            inv_dif_2 = 0;

            int_beta = im_unit * beta * sum_abs_A_2;
            int_conj = sum_conj * h_x * h_z;

            out10 << t_l << "\t";
            out10 << int_conj.imag() << "\n";

            out110 << t_l << "\t";
            out110 << int_conj.real() << "\n";

            out1100 << t_l << "\t";
            out1100 << abs(int_conj) << "\n";

            int_der_z = -im_unit * D_z * sum_der_z * h_x * h_z;
            int_der_x = -im_unit * D_x * sum_der_x * h_x * h_z;
            int_der_ok = int_der_z + int_der_x + int_beta;
            inv_H_t = int_der_ok;

            out9 << t_l << "\t";
            out9 << int_der_ok.imag() << "\n";

            out99 << t_l << "\t";
            out99 << int_der_ok.real() << "\n";
            
            out999 << t_l << "\t";
            out999 << abs(int_der_ok) << "\n";
            
            out90 << t_l << "\t";
            out90 << inv_H_t.imag() << "\n";
            
            out11 << t_l << "\t";
            out11 << int_der_ok << "\n";

            out12 << t_l << "\t";
            out12 << int_conj << "\n";

            integral_new = all_sum * h_x * h_z * tau;
            integral_new_0811 = all_sum_0811 * h_x * h_z * tau;
            int_abs_A_2 = sum_abs_A_2;
            out0211 << t_l << "\t";
            out0211 << sum_abs_A_2_0211 << "\n";

            out0211_2 << t_l << "\t";
            out0211_2 << sum_abs_A_2_0211_2 << "\n";


            out0211_1 << t_l << "\t";
            out0211_1 << int_abs_A_2 + integral_new << "\n";

            int_0 = int_abs_A_2;
            out3 << t_l << "\t";
            out3 << int_0 - integral_new << "\n";

            out1511 << t_l << "\t";
            out1511 << int_abs_A_2 + integral_new << "\n";

            out1511_1 << t_l << "\t";
            out1511_1 << sum_abs_A_2_1511 + sum_abs_A_2_1511_n << "\n";

            out260125 << t_l << "\t";
            out260125 << sum_abs_A_2_260125 << "\n";

            out3_0811 << t_l << "\t";
            out3_0811 << int_0 - integral_new_0811 << "\n";


            out2 << t_l << "\t";
            out2 << int_abs_A_2 << "\n";

            out4333 << t_l << "\t";
            out4333 << int_abs_A_2 - int_0 + integral_new << "\n";
            sum_abs_A_2 = 0;
            sum_abs_A_2_0211 = 0;
            sum_abs_A_2_0211_2 = 0;
            sum_abs_A_2_1511 = 0;

            int_abs_A_2 = 0;

            out2333 << t_l << "\t";
            out2333 << abs(invpogr3) << "\n";
            invpogr3 = 0;

            out0909pogr << t_l << "\t";
            out0909pogr << abs(inv3_sep) - int_0 + integral_new << "\n";
            
            out0909A << t_l << "\t";
            out0909A << h_x * h_z * sum_abs_A_2 << "\n";


            out0909 << t_l << "\t";
            out0909 << abs(inv3_sep) << "\n";
            inv3_sep = 0;

            out3333 << t_l << "\t";
            out3333 << abs(pogr) << "\n";
            pogr = 0;

            out0408 << t_l << "\t";
            out0408 << abs(inv3_bez2slag) << "\n";
            inv3_bez2slag = 0;

            sum_conj = 0;
            int_conj = 0;
            sum_der_z = 0;
            sum_der_x = 0;
            int_der_z = 0;
            int_der_x = 0;
            int_der_ok = 0;
            int_beta = 0;
        }
        else {
            s = 0;
            
            do {
                ok_strog = false;
                s = s + 2;
                if (s == 2) {
                    for (int m = 0; m <= N_x; m++) {
                        for (int j = 0; j <= N_z; j++) {
                            A_0[m][j] = A[m][j];
                        }
                    }
                }
                else {
                    for (int m = 0; m <= N_x; m++) {
                        for (int j = 0; j <= N_z; j++) {
                            A_0[m][j] = A_2[m][j];
                        }
                    }
                }
                for (int m = 0; m <= N_x; m++) {
                    if (m == 0) {
                        for (int j = 0; j <= N_z; j++) {
                            T_0[m][j] = 0;
                            A_1[m][j] = 0;
                        }
                    }
                    else if (m == N_x) {
                        for (int j = 0; j <= N_z; j++) {
                            T_0[m][j] = h_x * delta_j[j] * q_0 * pow(abs(A_0[m][j]), 2) / V_j[j] + T_0[m - 1][j];
                            A_1[m][j] = 0;
                        }
                    }
                    else {
                        
                        // a_j, b_j, c_j, f_j из метода прогонки
                        for (int j = 0; j <= N_z; j++) {
                            if (j == 0) {
                                //из краевых условий
                                a_j[0] = std::complex<double>(0, 0);
                                b_j[0] = std::complex<double>(1, 0);//1
                                c_j[0] = std::complex<double>(0, 0);
                            }
                            if (j == N_z) {
                                //из краевых условий
                                c_j[N_z] = std::complex<double>(0, 0);
                                b_j[N_z] = std::complex<double>(1, 0);
                                a_j[N_z] = std::complex<double>(1, 0);
                            }
                            if ((j != 0) && (j != N_z)) {
                                b_j[j] = std::complex<double>(-1 - tau * delta_j[j] / 4.0, tau * D_z / (pow(h_z, 2)) - tau * (beta / 2.0));
                                a_j[j] = std::complex<double>(0, tau * D_z / (2 * pow(h_z, 2)));
                                c_j[j] = std::complex<double>(0, tau * D_z / (2 * pow(h_z, 2)));
                            }
                            if (abs(b_j[j]) < (abs(c_j[j]) + abs(a_j[j]))) {
                                ok_diag = false;
                                return -1;
                            }
                            if (abs(b_j[j]) > (abs(c_j[j]) + abs(a_j[j]))) {
                                ok_strog = true;
                            }
                        }
                        if (!ok_strog || !ok_diag) {
                            return -1;
                        }
                        

                        //найдем Т_0(x_m+1, z_j, t_l+1) через Т_0(х_m, z_j, t_l+1)

                        for (int j = 0; j <= N_z; j++) {
                            T_0[m][j] = h_x * delta_j[j] * q_0 * pow(abs(A_0[m][j]), 2) / V_j[j] + T_0[m - 1][j];
                        }

                        for (int j = 0; j <= N_z; j++) {
                            if ((j == 0) || (j == N_z)) {
                                F_j[j] = std::complex<double>(0, 0);//из краевых(граничных) условий для z
                            }
                            else { //по обычной форумле считаем F_j
                                F_j[j] = tau * (-A[m][j] / tau +
                                    im_unit * (D_z / (h_z * h_z)) * (A[m][j + 1] / 2.0 - A[m][j] + A[m][j - 1] / 2.0) +
                                    im_unit * (D_x / (h_x * h_x)) * ((A_0[m + 1][j] + A[m + 1][j]) / 2.0 - A_0[m][j] - A[m][j] + (A_0[m - 1][j] + A[m - 1][j]) / 2.0) +
                                    im_unit * alpha_j[j] * (T_0[m][j] + T[m][j]) * (A_0[m][j] + A[m][j]) / 4.0 +
                                    im_unit * beta * A[m][j] / 2.0 + delta_j[j] * A[m][j] / 4.0);
                            }
                        }

                        for (int j = 1; j <= N_z + 1; j++) {
                            //для подсчета прогоночных коэф alpha и beta (прямой ход)
                            if (j == 1) {
                                pr_alpha_j[j] = c_j[j - 1] / b_j[j - 1];
                                pr_beta_j[j] = F_j[j - 1] / b_j[j - 1];
                            }
                            else {
                                pr_alpha_j[j] = c_j[j - 1] / (b_j[j - 1] - a_j[j - 1] * pr_alpha_j[j - 1]);
                                pr_beta_j[j] = (F_j[j - 1] + a_j[j - 1] * pr_beta_j[j - 1]) / (b_j[j - 1] - a_j[j - 1] * pr_alpha_j[j - 1]);
                            }
                            
                        }
                        A_1[m][N_z] = pr_beta_j[N_z] / (1.0 - pr_alpha_j[N_z]);
                        for (int j = N_z - 1; j >= 0; j--)
                            //для нахождения A на (s+1) итерации (обратный ход метода прогонки)
                        {
                            A_1[m][j] = pr_alpha_j[j + 1] * A_1[m][j + 1] + pr_beta_j[j + 1];
                        }
                    }

                }

                ok_strog = false;
                for (int j = 0; j <= N_z; j++) {
                    if (j == 0) {
                        for (int m = 0; m <= N_x; m++) {
                            if (m == 0) {
                                T_1[m][j] = 0;
                            }
                            else {
                                T_1[m][j] = h_x * delta_j[j] * q_0 * pow(abs(A_1[m][j]), 2) / V_j[j] + T_1[m - 1][j];
                            }
                            A_2[m][j] = 0;
                        }
                    }
                    else if (j == N_z) {
                        for (int m = 0; m <= N_x; m++) {
                            if (m == 0) {
                                T_1[m][j] = 0;
                            }
                            else {
                                T_1[m][j] = h_x * delta_j[j] * q_0 * pow(abs(A_1[m][j]), 2) / V_j[j] + T_1[m - 1][j];
                            }
                            A_2[m][N_z] = A_2[m][N_z - 1];
                        }
                    }
                    else {
                        // a_m, b_m, c_m, f_m из метода прогонки
                        for (int m = 0; m <= N_x; m++) {
                            if (m == 0) {
                                //из краевых условий
                                a_m[0] = std::complex<double>(0, 0);
                                b_m[0] = std::complex<double>(1, 0);//-1
                                c_m[0] = std::complex<double>(0, 0);
                            }
                            if (m == N_x) {
                                //из краевых условий
                                c_m[N_x] = std::complex<double>(0, 0);
                                b_m[N_x] = std::complex<double>(1, 0);//-1
                                a_m[N_x] = std::complex<double>(0, 0);
                            }
                            if ((m != 0) && (m != N_x)) {
                                b_m[m] = std::complex<double>(-1 - tau * delta_j[j] / 4.0, tau * D_x / (pow(h_x, 2)) - tau * (beta / 2.0));
                                a_m[m] = std::complex<double>(0, tau * D_x / (2 * pow(h_x, 2)));
                                c_m[m] = std::complex<double>(0, tau * D_x / (2 * pow(h_x, 2)));
                            }
                            if (abs(b_m[m]) < (abs(c_m[m]) + abs(a_m[m]))) {
                                ok_diag = false;
                                return -1;
                            }
                            if (abs(b_m[m]) > (abs(c_m[m]) + abs(a_m[m]))) {
                                ok_strog = true;
                            }
                        }
                        if (!ok_strog || !ok_diag) {
                            return -1;
                        }

                        for (int m = 0; m <= N_x; m++) {
                            if (m == 0) // найдем Т_1 при х=0 на (s+1)-ой итерации через краевое усл
                            {
                                T_1[0][j] = 0;
                            }
                            else {
                                //найдем Т_1(x_m+1, z_j, t_l+1) через Т_1(х_m, z_j, t_l+1)
                                T_1[m][j] = h_x * delta_j[j] * q_0 * pow(abs(A_1[m][j]), 2) / V_j[j] + T_1[m - 1][j];
                            }
                        }

                        for (int m = 0; m <= N_x; m++) {
                            if ((m == 0) || (m == N_x)) {
                                F_m[m] = std::complex<double>(0, 0);//из краевых(граничных) условий для х
                            }
                            else {//по обычной форумле считаем F_m
                                F_m[m] = tau * (-A[m][j] / tau +
                                    im_unit * (D_z / (h_z * h_z)) *
                                    (A_1[m][j + 1] / 2.0 + A[m][j + 1] / 2.0 - A_1[m][j] - A[m][j] +
                                        (A_1[m][j - 1] + A[m][j - 1]) / 2.0) +
                                    im_unit * (D_x / (h_x * h_x)) * (A[m + 1][j] / 2.0 - A[m][j] + A[m - 1][j] / 2.0)
                                    + im_unit * alpha_j[j] * (T_1[m][j] + T[m][j]) * (A_1[m][j] + A[m][j]) / 4.0 +
                                    im_unit * beta * A[m][j] / 2.0 + delta_j[j] * A[m][j] / 4.0);
                            }
                        }

                        for (int m = 1; m <= N_x + 1; m++) { //для подсчета прогоночных коэф alpha и beta (прямой ход)
                            if (m == 1) {
                                pr_alpha_m[m] = c_m[m - 1] / b_m[m - 1];
                                pr_beta_m[m] = F_m[m - 1] / b_m[m - 1];
                            }
                            else {
                                pr_alpha_m[m] = c_m[m - 1] / (b_m[m - 1] - a_m[m - 1] * pr_alpha_m[m - 1]);
                                pr_beta_m[m] = (F_m[m - 1] + a_m[m - 1] * pr_beta_m[m - 1]) / (b_m[m - 1] - a_m[m - 1] * pr_alpha_m[m - 1]);
                            }
                        }
                        A_2[N_x][j] = pr_beta_m[N_x + 1];
                        for (int m = N_x - 1; m >= 0; m--) { //для нахождения A на (s+1) итерации (обратный ход метода прогонки)
                            A_2[m][j] = pr_alpha_m[m + 1] * A_2[m + 1][j] + pr_beta_m[m + 1];
                        }
                    }
                }

                //проверка условия останова итераций
                ok = true;
                double ost_A;
                double ost_eps;
                double ost_T;
                double ost_eps_T;
                int m_i = 0, j_i = 0;
                while ((m_i <= N_x) && ok) {
                    while ((j_i <= N_z) && ok) {
                        ost_T = abs(T_1[m_i][j_i] - T_0[m_i][j_i]);
                        ost_eps_T = eps1 * abs(T_0[m_i][j_i]) + eps2;
                        ost_A = abs(A_2[m_i][j_i] - A_0[m_i][j_i]);
                        ost_eps = eps1 * abs(A_0[m_i][j_i]) + eps2;
                        if ((ost_A > ost_eps) || (ost_T > ost_eps_T)) {
                            ok = false;
                        }
                        j_i = j_i + 1;
                    }
                    m_i = m_i + 1;
                    j_i = 0;
                }

            } while (!ok);
            cout << t_l << "\n";
            out101 << s << "\n";
            sum_abs_A = sum_abs_A_2;

            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                for (int m = 0; m <= N_x; m++) {
                    x_m = L_xb + h_x * m;
                    int_xc_1_sum = (x_m - x_c) * pow(abs(A_2[m][j]), 2) * h_x + int_xc_1_sum;
                    int_xc_2_sum = pow(abs(A_2[m][j]), 2) * h_x + int_xc_2_sum;
                }
                if (int_xc_2_sum < 0.001)
                {
                    int_xc_end = 0;
                }
                else
                {
                    int_xc_end = int_xc_1_sum / int_xc_2_sum;
                }
                x_c_vec[j] = int_xc_end;

                out4 << z_j << "\t";
                out4 << t_l << "\t";
                out4 << int_xc_end << "\n";
                int_xc_1_sum = 0;
                int_xc_2_sum = 0;
            }

            for (int j = 0; j <= N_z; j++) {
                z_j = h_z * j;
                for (int m = 0; m <= N_x; m++) {
                    x_m = L_xb + h_x * m;
                    int_ax_1_sum = pow((x_m - x_c_vec[j]) * abs(A_2[m][j]), 2) * h_x + int_ax_1_sum;
                    int_ax_2_sum = pow(abs(A_2[m][j]), 2) * h_x + int_ax_2_sum;
                }
                if (int_ax_2_sum < 0.001)
                {
                    int_ax_end = 0;
                }
                else
                {
                    int_ax_end = int_ax_1_sum / int_ax_2_sum;
                }
                
                out5 << z_j << "\t";
                out5 << t_l << "\t";
                out5 << int_ax_end << "\n";

                int_ax_1_sum = 0;
                int_ax_2_sum = 0;
            }
            
            for (int mm = 0; mm <= N_x; mm++) {
                for (int jj = 0; jj <= N_z; jj++) {
                    A_conj[mm][jj] = conj(A_2[mm][jj]);
                }
            }
            for (int m = 0; m <= N_x; m++) {
                x_m = L_xb + h_x * m;
                for (int j = 0; j <= N_z; j++) {
                    if (out.is_open()) {
                        z_j = h_z * j;

                        if (j != N_z) {
                            inv_dif_2 = inv_dif_2 + pow(abs(A_2[m][j]), 2);
                        }
                        if (l == 9.0) {
                            if (j % count_z == 0) {
                                out2009_9024 << x_m << "\t";
                                out2009_9024 << z_j << "\t";
                                out2009_9024 << pow(abs(A_2[m][j]), 2) << "\n";
                            }
                        }

                        if (l == 12.0) {
                            if (j % count_z == 0) {
                                out2009_12 << x_m << "\t";
                                out2009_12 << z_j << "\t";
                                out2009_12 << pow(abs(A_2[m][j]), 2) << "\n";
                            }
                        }

                        if (l == 21.0) {
                            if (j % count_z == 0) {
                                out2009_21024 << x_m << "\t";
                                out2009_21024 << z_j << "\t";
                                out2009_21024 << pow(abs(A_2[m][j]), 2) << "\n";
                            }
                        }

                        if (l == 5.0) {
                            if (j % count_z == 0) {
                                out2009_5 << x_m << "\t";
                                out2009_5 << z_j << "\t";
                                out2009_5 << pow(abs(A_2[m][j]), 2) << "\n";
                            }
                        }

                        if (l == 15.0) {
                            if (j % count_z == 0) {
                                out2009_15 << x_m << "\t";
                                out2009_15 << z_j << "\t";
                                out2009_15 << pow(abs(A_2[m][j]), 2) << "\n";
                            }
                        }

                        if (l == 24.0) {
                            if (j % count_z == 0) {
                                out2009_24 << x_m << "\t";
                                out2009_24 << z_j << "\t";
                                out2009_24 << pow(abs(A_2[m][j]), 2) << "\n";
                            }
                        }



                        if (l % count_t == 0) {
                            if ((j == N_z) && (m % count_x == 0)) {
                                out_060125 << x_m << "\t";
                                out_060125 << pow(abs(A_2[m][j]), 2) << "\n";

                                out_060125_conj << x_m << "\t";
                                out_060125_conj << pow(abs(conj(A_2[m][j])), 2) << "\n";
                            }



                            if ((j % count_z == 0) && (m % count_x == 0)) {
                                out6 << x_m << "\t";
                                out6 << z_j << "\t";
                                out6 << T_1[m][j] << "\n";

                                out << x_m << "\t";
                                out << z_j << "\t";
                                out << pow(abs(A_2[m][j]), 2) << "\n";
                            }

                        }
                        if ((m != 0) && (m != N_x) && (j != 0) && (j != N_z)) {
                            inv3_sep = inv3_sep + pow(abs(A_2[m][j]), 2) * h_x * h_z * (1 + 0.25 * tau * delta_j[j]) / (1 - 0.25 * tau * delta_j[j]);
                            invpogr3 = invpogr3 + h_x * h_z * ((1 - 0.25 * tau * delta_j[j]) * pow(abs(A[m][j]), 2) / (1 + 0.25 * tau * delta_j[j]) - 0.25 * tau * delta_j[j] * (A_2[m][j] * conj(A[m][j]) + A[m][j] * conj(A_2[m][j])) / (1 + 0.25 * tau * delta_j[j]));
                            pogr = pogr + h_x * h_z * 0.25 * tau * delta_j[j] * (A_2[m][j] * conj(A[m][j]) + A[m][j] * conj(A_2[m][j])) / (1 + 0.25 * tau * delta_j[j]);
                            inv3_bez2slag = inv3_bez2slag + h_x * h_z * ((1 - 0.25 * tau * delta_j[j]) * pow(abs(A[m][j]), 2) / (1 + 0.25 * tau * delta_j[j]));
                        }

                       
                        if ((m == 0) && (j == 0)) {
                            sum_abs_A_2 = sum_abs_A_2 + (1 / 2.0) * h_x * h_z * pow(abs(A_2[m][j]), 2) / 2.0;
                        }
                        else if ((m == 0) && (j == N_z)) {
                            sum_abs_A_2 = sum_abs_A_2 + (1 / 2.0) * h_x * h_z * pow(abs(A_2[m][j]), 2) / 2.0;
                        }
                        else if ((m == N_x) && (j == 0)) {
                            sum_abs_A_2 = sum_abs_A_2 + (1 / 2.0) * h_x * h_z * pow(abs(A_2[m][j]), 2) / 2.0;
                        }
                        else if ((m == N_x) && (j == N_z)) {
                            sum_abs_A_2 = sum_abs_A_2 + (1 / 2.0) * h_x * h_z * pow(abs(A_2[m][j]), 2) / 2.0;
                        }

                        if ((j != 0) && (j != N_z)) {
                            sum_abs_A_2 = sum_abs_A_2 + (1 / 2.0) * h_x * h_z * pow(abs(A_2[0][j]), 2) + (1 / 2.0) * h_x * h_z * pow(abs(A_2[N_x][j]), 2);
                        }

                        if ((m != 0) && (m != N_z)) {
                            if ((j == 0) || (j == N_z)) {

                                sum_abs_A_2 = sum_abs_A_2 + (1 / 2.0) * h_x * h_z * pow(abs(A_2[m][j]), 2);
                            }
                            else {
                                sum_abs_A_2 = sum_abs_A_2 + h_x * h_z * pow(abs(A_2[m][j]), 2);
                            }
                        }

                        if (j >= N_s) {
                            if ((j == 0) || (j == N_z)) {
                                all_sum_0811 = all_sum_0811 + (1 / 2.0) * pow(abs(A_2[m][j]), 2) * delta_j[j];
                            }
                            all_sum_0811 = all_sum_0811 + pow(abs(A_2[m][j]), 2) * delta_j[j];
                            all_sum = all_sum + pow(abs(A_2[m][j]), 2) * delta_j[j];
                        }

                        if (j == 0) {
                            A_der_z = (A_2[m][j + 1] - A_2[m][j]) / h_z;
                        }
                        else if (j == N_z) {
                            A_der_z = (A_2[m][j] - A_2[m][j - 1]) / h_z;
                        }
                        else if ((j != 0) && (j != N_z)) {
                            A_der_z = (A_2[m][j + 1] - A_2[m][j - 1]) / (2 * h_z);
                        }

                        if (m == 0) {
                            A_der_x = (A_2[m + 1][j] - A_2[m][j]) / h_x;
                            A_conj_der_x = (A_conj[m + 1][j] - A_conj[m][j]) / h_x;
                        }
                        else if (m == N_x) {
                            A_der_x = (A_2[m][j] - A_2[m - 1][j]) / h_x;
                            A_conj_der_x = (A_conj[m][j] - A_conj[m - 1][j]) / h_x;
                        }
                        else if ((m != 0) && (m != N_x)) {
                            A_der_x = (A_2[m + 1][j] - A_2[m - 1][j]) / (2 * h_x);
                            A_conj_der_x = (A_conj[m + 1][j] - A_conj[m - 1][j]) / (2 * h_x);
                        }

                        sum_der_z = sum_der_z + pow(abs(A_der_z), 2);
                        sum_der_x = sum_der_x + pow(abs(A_der_x), 2);
                        sum_conj = sum_conj + A_2[m][j] * A_conj_der_x;

                        if ((j != 0) && (j != N_z) && (m != 0) && (m != N_x)) {
                            sum_abs_A_2_1511 = sum_abs_A_2_1511 + h_x * h_z * pow(abs(A_2[m][j]), 2) * (1 + 0.5 * tau * delta_j[j]);
                            sum_abs_A_2_1511_n = sum_abs_A_2_1511_n + h_x * h_z * tau * delta_j[j] * pow(abs(A_2[m][j]), 2);

                            sum_abs_A_2_0211 = sum_abs_A_2_0211 + h_x * h_z * pow(abs(A_2[m][j]), 2) * (1 + 0.25 * tau * delta_j[j]) / (1 - 0.25 * tau * delta_j[j]);
                            sum_abs_A_2_0211_2 = sum_abs_A_2_0211_2 + h_x * h_z * pow(abs(A_2[m][j]), 2) * (2 + tau * delta_j[j]) / (2 - tau * delta_j[j]);
                            sum_abs_A_2_260125_2 = sum_abs_A_2_260125_2 + h_x * h_z * pow(abs(A_2[m][j]), 2) * (1 + 0.5 * tau * delta_j[j]) / (1 - 0.5 * tau * delta_j[j]);
                            sum_abs_A_2_260125 = sum_abs_A_2_260125 + h_x * h_z * tau * (delta_j[j] / (1 - 0.5 * tau * delta_j[j])) * pow(abs(A[m][j]), 2);
                        }

                    }
                    A[m][j] = A_2[m][j];
                    T[m][j] = T_1[m][j];
                }
            }
            inv_dif_2 = inv_dif_2 * h_x * h_z;
            out200 << t_l << "\t";
            out200 << inv_dif_1 << "\n";

            out201 << t_l << "\t";
            out201 << inv_dif_2 << "\n";
            inv_dif_2 = 0;

            int_beta = im_unit * beta * sum_abs_A_2;
            int_conj = sum_conj * h_x * h_z;

            out10 << t_l << "\t";
            out10 << int_conj.imag() << "\n";

            out110 << t_l << "\t";
            out110 << int_conj.real() << "\n";

            out1100 << t_l << "\t";
            out1100 << abs(int_conj) << "\n";

            int_der_z = -im_unit * D_z * sum_der_z * h_x * h_z;
            int_der_x = -im_unit * D_x * sum_der_x * h_x * h_z;
            int_der_ok = int_der_z + int_der_x + int_beta;

            out9 << t_l << "\t";
            out9 << int_der_ok.imag() << "\n";

            out99 << t_l << "\t";
            out99 << int_der_ok.real() << "\n";

            out999 << t_l << "\t";
            out999 << abs(int_der_ok) << "\n";

            out90 << t_l << "\t";
            out90 << inv_H_t.imag() << "\n";

            out11 << t_l << "\t";
            out11 << int_der_ok << "\n";

            out12 << t_l << "\t";
            out12 << int_conj << "\n";

            integral_new = all_sum * h_x * h_z * tau;
            integral_new_0811 = all_sum_0811 * h_x * h_z * tau;
            int_abs_A_2 = sum_abs_A_2;
            out0211 << t_l << "\t";
            out0211 << sum_abs_A_2_0211 << "\n";

            out0211_2 << t_l << "\t";
            out0211_2 << sum_abs_A_2_0211_2 << "\n";


            out1511 << t_l << "\t";
            out1511 << int_abs_A_2 + integral_new << "\n";

            out1511_1 << t_l << "\t";
            out1511_1 << sum_abs_A_2_1511 + sum_abs_A_2_1511_n << "\n";

            out260125 << t_l << "\t";
            out260125 << sum_abs_A_2_260125_2 + sum_abs_A_2_260125 << "\n";


            out2 << t_l << "\t";
            out2 << int_abs_A_2 << "\n";
            out3 << t_l << "\t";
            out3 << int_0 - integral_new << "\n";
            out3_0811 << t_l << "\t";
            out3_0811 << int_0 - integral_new_0811 << "\n";

            out0211_1 << t_l << "\t";
            out0211_1 << int_abs_A_2 + integral_new << "\n";


            out4333 << t_l << "\t";
            out4333 << int_abs_A_2 - int_0 + integral_new << "\n";

            sum_abs_A_2 = 0;
            sum_abs_A_2_0211 = 0;
            sum_abs_A_2_0211_2 = 0;
            int_abs_A_2 = 0;
            sum_abs_A_2_1511 = 0;
            sum_abs_A_2_260125_2 = 0;

            out2333 << t_l << "\t";
            out2333 << abs(invpogr3) << "\n";
            invpogr3 = 0;

            out0909pogr << t_l << "\t";
            out0909pogr << abs(inv3_sep) - int_0 + integral_new << "\n";

            out0909 << t_l << "\t";
            out0909 << abs(inv3_sep) << "\n";
            inv3_sep = 0;

            out0909A << t_l << "\t";
            out0909A << h_x * h_z * sum_abs_A << "\n";



            out3333 << t_l << "\t";
            out3333 << abs(pogr) << "\n";

            out0408 << t_l << "\t";
            out0408 << abs(inv3_bez2slag) << "\n";
            inv3_bez2slag = 0;

            pogr = 0;

            sum_conj = 0;
            int_conj = 0;
            sum_der_z = 0;
            sum_der_x = 0;
            int_der_z = 0;
            int_der_x = 0;
            int_der_ok = 0;
            int_beta = 0;
        }
    }
}