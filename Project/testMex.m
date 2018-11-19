% clear all;clc;
% 
% q = 0;
% T = 1;
% 
% tic
% qnew = test_f(q,T)
% toc
% 
% tic
% qnew = test_f_mex(q,T)
% toc

%%
clear all;clc;

A = [1 0; 0 1];
B = [1;1];

K = test_lqr(A,B);