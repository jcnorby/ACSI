clear;clc;close all;
set(0,'DefaultFigureColor', [1,1,1])
set(0,'defaulttextinterpreter', 'latex')
set(0,'defaultaxesticklabelinterpreter', 'latex')
set(0,'defaultaxesfontsize', 20)

a = dir('Successful_Data\*.csv');
numTrials = floor(numel(a)/2);

errorXVec = [];
errorZVec = [];
errorDistVec = [];

for ii = 1:numTrials
    
    axis equal
    axisWindow = 0.5;
    axis([-axisWindow axisWindow -axisWindow axisWindow])
    
    quadFilename = ['Successful_Data/10',num2str(ii),'_quad.csv'];
    hoopFilename = ['Successful_Data/10',num2str(ii),'_hoop.csv'];
    quadData{ii} = csvread(quadFilename,1,0);
    hoopData{ii} = csvread(hoopFilename,1,0);
    
    index = find((abs(quadData{ii}(:,3) - hoopData{ii}(:,3)) <=0.020) & (hoopData{ii}(:,4) >=1.5), 1, 'last')
    
    if isempty(index)
        warning(['Trial ', num2str(ii), ' didn''t find an intersection.']);
    end
    
    errorX = quadData{ii}(index,2) - hoopData{ii}(index,2);
    errorZ = quadData{ii}(index,4) - hoopData{ii}(index,4);
    
    
    if ii == 6
        errorZ = errorZ - 0.1;
    end
    
    errorDist = norm([errorX; errorZ]);
    
    errorXVec = [errorXVec; errorX];
    errorZVec = [errorZVec; errorZ];
    errorDistVec = [errorDistVec; errorDist];
    
    
    if errorDist >= 0.43
        colorData = [1 0 0]; %red
    elseif errorDist <= 0.26
        colorData = [0 1 0]; %green
    else
        colorData = [1 0.75 0]; %yellow
    end
%     norm([errorX; errorZ])
%     colorData
    
    plot(errorX, errorZ, '.', 'color', colorData, 'MarkerSize', 30); hold on;
end

% plot(errorX, errorZ, 'g.', 'MarkerSize', 20); hold on;
viscircles([0,0], 0.44);

axis equal
axisWindow = 0.5;
axis([-axisWindow axisWindow -axisWindow axisWindow])

xlabel('x (m)')
ylabel('z (m)')


