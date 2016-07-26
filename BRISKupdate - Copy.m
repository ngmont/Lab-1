%The BRISK code uses an algorithm to colect corner features

%1-THIS CODE CONVERTS THE IMAGES TO BLACK AND WHITE, THEY ONLY WORK WITH:
%BMP, PNG AND JPG
%RGB = imread('BiancaCropPNG.png');
%RGB = imread('BiancaCropJPG.jpg');
RGB = imread('BiancaCropBMP.bmp');
%imshow(RGB)
%I = rgb2gray(RGB);
%figure
%imshow(I)

%Original Image
%I = imread('BiancaCropGIF.GIF');

%2-THIS CODE CONVERTS THE GIF IMAGES INTO BLACK AND WHITE IMAGES
%[X,map] = imread('Saady3GIF.GIF');
%imshow(X,map)
%I = rgb2gray(map)
%imshow(X,I)

%Begin Recording Time
A = rand(12000,400);
B = rand(400,12000);
f = @() sum(A.'.*B, 1);
timeit(f)

%I = imread('Saady3BPM.bmp');
regions = detectMSERFeatures(I);
[features, valid_points] = extractFeatures(I,regions,'Upright',true);
figure; imshow(I); hold on;


%figure; imshow(I); hold on;
plot(regions); % by default, plot displays ellipses and centroids

%DisplayTime
imshow(tic); 

%plot(valid_points,'showOrientation',true);
%plot(regions, 'showPixelList', true, 'showEllipses', false);

