%Collects information to be used for classification, detection and tracking

%RGB = imread('HassanCropJPG.jpg');
%imshow(RGB)
%I = rgb2gray(RGB);
%figure
%imshow(I);

%Read in the image
I1 = imread('BiancaCropBMP.bmp');

%Begin Recording Time
A = rand(12000,400);
B = rand(400,12000);
f = @() sum(A.'.*B, 1);
timeit(f)

%Create the matrix with the extracted data
[hog1, visualization] = extractHOGFeatures(I1,'CellSize',[32 32]);

subplot(1,2,1);
imshow(I1);
title('Hog Extraction');
subplot(1,2,2);
plot(visualization);