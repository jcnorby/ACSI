function varargout = plotrotcube(varargin)
% PLOTCUBE - Display a 3D-cube in the current axes
%
%   PLOTCUBE(EDGES,ORIGIN,ALPHA,COLOR) displays a 3D-cube in the current axes
%   with the following properties:
%   * EDGES : 3-elements vector that defines the length of cube edges
%   * ORIGIN: 3-elements vector that defines the start point of the cube
%   * ALPHA : scalar that defines the transparency of the cube faces (from 0
%             to 1)
%   * COLOR : 3-elements vector that defines the faces color of the cube
%
% Example:
%   >> plotcube([5 5 5],[ 2  2  2],.8,[1 0 0]);
%   >> plotcube([5 5 5],[10 10 10],.8,[0 1 0]);
%   >> plotcube([5 5 5],[20 20 20],.8,[0 0 1]);

% Default input arguments
inArgs = { ...
  [10 56 100] , ... % Default edge sizes (x,y and z)
  [10 10  10] , ... % Default coordinates of the origin point of the cube
  .7          , ... % Default alpha value for the cube's faces
  [1 0 0] , ...     % Default Color for the cube
  0, ... % default roll
  0, ... % default pitch
  0      % default yaw
  };

% Replace default input arguments by input values
inArgs(1:nargin) = varargin;

% Create all variables
[edges,origin,alpha,clr, phi, theta, psi] = deal(inArgs{:});

XYZ = { ...
  [0 0 0 0]  [0 0 1 1]  [0 1 1 0] ; ...
  [1 1 1 1]  [0 0 1 1]  [0 1 1 0] ; ...
  [0 1 1 0]  [0 0 0 0]  [0 0 1 1] ; ...
  [0 1 1 0]  [1 1 1 1]  [0 0 1 1] ; ...
  [0 1 1 0]  [0 0 1 1]  [0 0 0 0] ; ...
  [0 1 1 0]  [0 0 1 1]  [1 1 1 1]   ...
  };

XYZ = cellfun( @(x,y) x*y , ...
    XYZ , ...
    repmat(mat2cell(edges,1,[1 1 1]),6,1) , ...
    'UniformOutput',false);

for i = 1:length(XYZ)
    temp = eul2rotm(fliplr([phi,theta,psi]))*[XYZ{i,1}; XYZ{i,2}; XYZ{i,3}];
    XYZ{i,1} = temp(1,:);
    XYZ{i,2} = temp(2,:);
    XYZ{i,3} = temp(3,:);
end

XYZ = mat2cell(...
  cellfun( @(x,y) x+y , ...
    XYZ , ...
    repmat(mat2cell(origin,1,[1 1 1]),6,1) , ...
    'UniformOutput',false), ...
  6,[1 1 1]);


a = cellfun(@patch,XYZ{1},XYZ{2},XYZ{3},...
  repmat({clr},6,1),...
  repmat({'FaceAlpha'},6,1),...
  repmat({alpha},6,1)...
  );

% rotate(a, [0 90], 0, origin)

varargout{1} = a;

% view(3);
