%This Surf code uses algorithm to extract blob features

%1-THIS CODE CONVERTS THE IMAGES TO BLACK AND WHITE, THEY ONLY WORK WITH:
%BMP, PNG AND JPG
RGB = imread('BiancaCropBMP.bmp');
%imshow(RGB)
I = rgb2gray(RGB);
figure
imshow(I)

%Begin Recording Time
A = rand(12000,400);
B = rand(400,12000);
f = @() sum(A.'.*B, 1);
timeit(f)

%This reads in the original image for FIG formats%
%I = imread('BiancaCropGIF.GIF'); 

%this part is the surf extracting code itself
points = detectSURFFeatures(I);
[features, valid_points] = extractFeatures(I, points);
figure; imshow(I); hold on;
plot(valid_points.selectStrongest(10),'showOrientation',true);