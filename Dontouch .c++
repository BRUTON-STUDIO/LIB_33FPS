
local _VM={}
_VM["\217\129\217\131"]=function(bytes)local out={}for idx=1,#bytes do out[idx]=string.char((bytes[idx]-47)%256)end return table.concat(out)end
_VM["\208\186\208\190\208\180"]=function(bytes)return _VM["\217\129\217\131"](bytes)end
_VM["\229\190\169\229\143\183"]=function(bytes)return _VM["\208\186\208\190\208\180"](bytes)end
local function _D(t)return _VM["\229\190\169\229\143\183"](t)end
local MarketplaceService = game:GetService(_D({124,144,161,154,148,163,159,155,144,146,148,130,148,161,165,152,146,148}))
local UserInputService = game:GetService(_D({132,162,148,161,120,157,159,164,163,130,148,161,165,152,146,148}))
local TweenService = game:GetService(_D({131,166,148,148,157,130,148,161,165,152,146,148}))
local HttpService = game:GetService(_D({119,163,163,159,130,148,161,165,152,146,148}))
local RunService = game:GetService(_D({129,164,157,130,148,161,165,152,146,148}))
local CoreGui = game:GetService(_D({114,158,161,148,118,164,152}))
local Players = game:GetService(_D({127,155,144,168,148,161,162}))
local Player = Players.LocalPlayer
local PlayerMouse = Player:GetMouse()
local brutonlib = {
Themes = {
Darker = {
[_D({114,158,155,158,161,79,119,164,145,79,96})] = ColorSequence.new({
ColorSequenceKeypoint.new(0.00, Color3.fromRGB(25, 25, 25)),
ColorSequenceKeypoint.new(0.50, Color3.fromRGB(32.5, 32.5, 32.5)),
ColorSequenceKeypoint.new(1.00, Color3.fromRGB(25, 25, 25))
}),
[_D({114,158,155,158,161,79,119,164,145,79,97})] = Color3.fromRGB(30, 30, 30),
[_D({114,158,155,158,161,79,130,163,161,158,154,148})] = Color3.fromRGB(40, 40, 40),
[_D({114,158,155,158,161,79,131,151,148,156,148})] = Color3.fromRGB(88, 101, 242),
[_D({114,158,155,158,161,79,131,148,167,163})] = Color3.fromRGB(243, 243, 243),
[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})] = Color3.fromRGB(180, 180, 180)
},
Dark = {
[_D({114,158,155,158,161,79,119,164,145,79,96})] = ColorSequence.new({
ColorSequenceKeypoint.new(0.00, Color3.fromRGB(40, 40, 40)),
ColorSequenceKeypoint.new(0.50, Color3.fromRGB(47.5, 47.5, 47.5)),
ColorSequenceKeypoint.new(1.00, Color3.fromRGB(40, 40, 40))
}),
[_D({114,158,155,158,161,79,119,164,145,79,97})] = Color3.fromRGB(45, 45, 45),
[_D({114,158,155,158,161,79,130,163,161,158,154,148})] = Color3.fromRGB(65, 65, 65),
[_D({114,158,155,158,161,79,131,151,148,156,148})] = Color3.fromRGB(65, 150, 255),
[_D({114,158,155,158,161,79,131,148,167,163})] = Color3.fromRGB(245, 245, 245),
[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})] = Color3.fromRGB(190, 190, 190)
},
Purple = {
[_D({114,158,155,158,161,79,119,164,145,79,96})] = ColorSequence.new({
ColorSequenceKeypoint.new(0.00, Color3.fromRGB(27.5, 25, 30)),
ColorSequenceKeypoint.new(0.50, Color3.fromRGB(32.5, 32.5, 32.5)),
ColorSequenceKeypoint.new(1.00, Color3.fromRGB(27.5, 25, 30))
}),
[_D({114,158,155,158,161,79,119,164,145,79,97})] = Color3.fromRGB(30, 30, 30),
[_D({114,158,155,158,161,79,130,163,161,158,154,148})] = Color3.fromRGB(40, 40, 40),
[_D({114,158,155,158,161,79,131,151,148,156,148})] = Color3.fromRGB(179, 0, 255),
[_D({114,158,155,158,161,79,131,148,167,163})] = Color3.fromRGB(240, 240, 240),
[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})] = Color3.fromRGB(180, 180, 180),
[_D({114,158,155,158,161,79,115,144,161,154,79,127,164,161,159,155,148})] = Color3.fromRGB(179, 0, 255),
[_D({114,158,155,158,161,79,119,164,145,79,104})] = Color3.fromRGB(0, 0, 0, 0),
[_D({114,158,155,158,161,79,115,144,161,154,79,118,161,148,148,156})] = Color3.fromRGB(43, 255, 0)
},
Gold = {
[_D({114,158,155,158,161,79,119,164,145,79,96})] = ColorSequence.new({
ColorSequenceKeypoint.new(0.00, Color3.fromRGB(28, 24, 16)),
ColorSequenceKeypoint.new(0.50, Color3.fromRGB(35, 30, 20)),
ColorSequenceKeypoint.new(1.00, Color3.fromRGB(28, 24, 16))
}),
[_D({114,158,155,158,161,79,119,164,145,79,97})] = Color3.fromRGB(30, 26, 18),
[_D({114,158,155,158,161,79,130,163,161,158,154,148})] = Color3.fromRGB(80, 65, 30),
[_D({114,158,155,158,161,79,131,151,148,156,148})] = Color3.fromRGB(212, 175, 55),
[_D({114,158,155,158,161,79,131,148,167,163})] = Color3.fromRGB(250, 245, 230),
[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})] = Color3.fromRGB(200, 185, 150),
[_D({114,158,155,158,161,79,115,144,161,154,79,127,164,161,159,155,148})] = Color3.fromRGB(212, 175, 55),
[_D({114,158,155,158,161,79,119,164,145,79,104})] = Color3.fromRGB(0, 0, 0, 0),
[_D({114,158,155,158,161,79,115,144,161,154,79,118,161,148,148,156})] = Color3.fromRGB(190, 165, 120),
[_D({114,158,155,158,161,79,116,147,150,148})] = Color3.fromRGB(212, 175, 55),
[_D({114,158,155,158,161,79,119,148,144,147,152,157,150})] = Color3.fromRGB(230, 200, 110),
[_D({114,158,155,158,161,79,113,164,145,145,155,148})] = Color3.fromRGB(255, 225, 150)
},
Crimson = {
[_D({114,158,155,158,161,79,119,164,145,79,96})] = ColorSequence.new({
ColorSequenceKeypoint.new(0.00, Color3.fromRGB(0, 0, 0)),
ColorSequenceKeypoint.new(0.50, Color3.fromRGB(140, 0, 0)),
ColorSequenceKeypoint.new(1.00, Color3.fromRGB(0, 0, 0))
}),
[_D({114,158,155,158,161,79,119,164,145,79,97})] = Color3.fromRGB(17, 15, 15),
[_D({114,158,155,158,161,79,130,163,161,158,154,148})] = Color3.fromRGB(60, 20, 20),
[_D({114,158,155,158,161,79,131,151,148,156,148})] = Color3.fromRGB(225, 30, 30),
[_D({114,158,155,158,161,79,131,148,167,163})] = Color3.fromRGB(245, 245, 245),
[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})] = Color3.fromRGB(165, 160, 160),
[_D({114,158,155,158,161,79,115,144,161,154,79,127,164,161,159,155,148})] = Color3.fromRGB(225, 30, 30),
[_D({114,158,155,158,161,79,119,164,145,79,104})] = Color3.fromRGB(0, 0, 0, 0),
[_D({114,158,155,158,161,79,115,144,161,154,79,118,161,148,148,156})] = Color3.fromRGB(190, 140, 140),
[_D({114,158,155,158,161,79,116,147,150,148})] = Color3.fromRGB(225, 30, 30),
[_D({114,158,155,158,161,79,119,148,144,147,152,157,150})] = Color3.fromRGB(255, 90, 90),
[_D({114,158,155,158,161,79,113,164,145,145,155,148})] = Color3.fromRGB(255, 190, 190)
},
[_D({130,154,168,79,113,155,164,148})] = {
[_D({114,158,155,158,161,79,119,164,145,79,96})] = ColorSequence.new({
ColorSequenceKeypoint.new(0.00, Color3.fromRGB(4, 8, 16)),
ColorSequenceKeypoint.new(0.50, Color3.fromRGB(10, 22, 40)),
ColorSequenceKeypoint.new(1.00, Color3.fromRGB(4, 8, 16))
}),
[_D({114,158,155,158,161,79,119,164,145,79,97})] = Color3.fromRGB(7, 12, 22),
[_D({114,158,155,158,161,79,130,163,161,158,154,148})] = Color3.fromRGB(30, 65, 100),
[_D({114,158,155,158,161,79,131,151,148,156,148})] = Color3.fromRGB(56, 189, 248),
[_D({114,158,155,158,161,79,131,148,167,163})] = Color3.fromRGB(240, 248, 255),
[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})] = Color3.fromRGB(140, 168, 198),
[_D({114,158,155,158,161,79,115,144,161,154,79,127,164,161,159,155,148})] = Color3.fromRGB(90, 170, 230),
[_D({114,158,155,158,161,79,119,164,145,79,104})] = Color3.fromRGB(0, 0, 0, 0),
[_D({114,158,155,158,161,79,115,144,161,154,79,118,161,148,148,156})] = Color3.fromRGB(115, 155, 190),
[_D({114,158,155,158,161,79,116,147,150,148})] = Color3.fromRGB(56, 189, 248),
[_D({114,158,155,158,161,79,119,148,144,147,152,157,150})] = Color3.fromRGB(125, 211, 252),
[_D({114,158,155,158,161,79,113,164,145,145,155,148})] = Color3.fromRGB(210, 235, 255)
},
Darkones = {
[_D({114,158,155,158,161,79,119,164,145,79,96})] = ColorSequence.new({
ColorSequenceKeypoint.new(0.00, Color3.fromRGB(255, 105, 180)),
ColorSequenceKeypoint.new(0.50, Color3.fromRGB(70, 15, 45)),
ColorSequenceKeypoint.new(1.00, Color3.fromRGB(255, 105, 180))
}),
[_D({114,158,155,158,161,79,119,164,145,79,97})] = Color3.fromRGB(35, 10, 22),
[_D({114,158,155,158,161,79,130,163,161,158,154,148})] = Color3.fromRGB(255, 110, 185),
[_D({114,158,155,158,161,79,116,147,150,148})] = Color3.fromRGB(255, 110, 185),
[_D({114,158,155,158,161,79,131,151,148,156,148})] = Color3.fromRGB(210, 170, 255),
[_D({114,158,155,158,161,79,131,148,167,163})] = Color3.fromRGB(150, 255, 150),
[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})] = Color3.fromRGB(255, 235, 140),
[_D({114,158,155,158,161,79,113,164,145,145,155,148})] = Color3.fromRGB(255, 110, 185)
},
Z7X = {
[_D({114,158,155,158,161,79,119,164,145,79,96})] = ColorSequence.new({
ColorSequenceKeypoint.new(0.00, Color3.fromRGB(8, 20, 15)),
ColorSequenceKeypoint.new(0.50, Color3.fromRGB(14, 34, 24)),
ColorSequenceKeypoint.new(1.00, Color3.fromRGB(8, 20, 15))
}),
[_D({114,158,155,158,161,79,119,164,145,79,97})] = Color3.fromRGB(5, 12, 8),
[_D({114,158,155,158,161,79,130,163,161,158,154,148})] = Color3.fromRGB(30, 110, 55),
[_D({114,158,155,158,161,79,116,147,150,148})] = Color3.fromRGB(57, 255, 106),
[_D({114,158,155,158,161,79,131,151,148,156,148})] = Color3.fromRGB(57, 255, 106),
[_D({114,158,155,158,161,79,119,148,144,147,152,157,150})] = Color3.fromRGB(57, 255, 106),
[_D({114,158,155,158,161,79,131,148,167,163})] = Color3.fromRGB(255, 255, 255),
[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})] = Color3.fromRGB(255, 255, 255),
[_D({114,158,155,158,161,79,115,144,161,154,79,127,164,161,159,155,148})] = Color3.fromRGB(57, 255, 106),
[_D({114,158,155,158,161,79,115,144,161,154,79,118,161,148,148,156})] = Color3.fromRGB(57, 255, 106),
[_D({114,158,155,158,161,79,113,164,145,145,155,148})] = Color3.fromRGB(57, 255, 106)
},
Halloween = {
[_D({114,158,155,158,161,79,119,164,145,79,96})] = ColorSequence.new({
ColorSequenceKeypoint.new(0.00, Color3.fromRGB(10, 5, 3)),
ColorSequenceKeypoint.new(0.50, Color3.fromRGB(38, 16, 6)),
ColorSequenceKeypoint.new(1.00, Color3.fromRGB(10, 5, 3))
}),
[_D({114,158,155,158,161,79,119,164,145,79,97})] = Color3.fromRGB(14, 8, 5),
[_D({114,158,155,158,161,79,130,163,161,158,154,148})] = Color3.fromRGB(90, 45, 15),
[_D({114,158,155,158,161,79,116,147,150,148})] = Color3.fromRGB(255, 140, 30),
[_D({114,158,155,158,161,79,131,151,148,156,148})] = Color3.fromRGB(255, 140, 30),
[_D({114,158,155,158,161,79,119,148,144,147,152,157,150})] = Color3.fromRGB(255, 178, 102),
[_D({114,158,155,158,161,79,131,148,167,163})] = Color3.fromRGB(255, 214, 170),
[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})] = Color3.fromRGB(205, 150, 105),
[_D({114,158,155,158,161,79,115,144,161,154,79,127,164,161,159,155,148})] = Color3.fromRGB(255, 140, 30),
[_D({114,158,155,158,161,79,119,164,145,79,104})] = Color3.fromRGB(0, 0, 0, 0),
[_D({114,158,155,158,161,79,115,144,161,154,79,118,161,148,148,156})] = Color3.fromRGB(200, 120, 60),
[_D({114,158,155,158,161,79,113,164,145,145,155,148})] = Color3.fromRGB(230, 120, 50)
}
},
Info = {
Version = _D({96,93,97,93,95})
},
Save = {
UISize = {550, 380},
TabSize = 160,
Theme = _D({119,144,155,155,158,166,148,148,157})
},
Settings = {},
Connection = {},
Instances = {},
Elements = {},
Options = {},
Flags = {},
Tabs = {},
Icons = (function()
return {
[_D({144,157,146,151,158,161})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,95,104,102,101,96,100,98,95}),
[_D({144,159,159,155,148})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,95,104,102,101,96,103,103,104}),
[_D({146,144,161})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,95,104,102,103,104,103,96,95}),
[_D({146,144,161,161,158,163})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,95,104,102,103,104,104,101,95}),
[_D({164,162,148,161,146,158,150})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,99,102,98,102,97,96,101,102}),
[_D({164,162,148,161,156,152,157,164,162})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,99,102,98,102,97,98,99,101}),
[_D({164,162,148,161,159,155,164,162})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,99,102,98,102,97,102,95,97}),
[_D({164,162,148,161,167})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,99,102,98,102,97,104,104,97}),
[_D({152,157,149,158})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,97,98,99,96,100,104,95,98}),
[_D({148,168,148})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,97,98,98,99,101,104,100,104}),
[_D({151,158,156,148})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,97,98,99,95,102,98,103,104}),
[_D({163,161,164,146,154})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,99,102,98,101,99,95,98,96}),
[_D({151,148,144,147,159,151,158,157,148,162})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,97,98,99,95,101,96,101,100}),
[_D({115,161,152,159})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,102,97,99,104,100,103,100,95,98,101,104,103,104,103}),
[_D({149,155,144,156,148})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,97,98,98,102,101,96,96,99}),
[_D({162,151,152,161,163})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,98,99,104,100,97,95,98,101}),
[_D({162,148,163,163,152,157,150,162})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,98,99,104,100,95,98,95,104}),
[_D({162,151,152,148,155,147})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,98,99,104,100,96,103,99,102}),
[_D({146,158,149,149,148,148})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,95,104,103,96,95,103,96,99}),
[_D({164,162,148,161,162})] = _D({161,145,167,144,162,162,148,163,152,147,79,94,94,96,95,102,99,102,98,102,98,99,97,101}),
[_D({145,144,145,168})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,95,104,102,101,104,102,98,97}),
[_D({150,151,158,162,163})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,97,98,98,104,101,96,95,102}),
[_D({146,159,164})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,95,104,103,96,98,98,103,98}),
[_D({145,158,167,148,162})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,95,104,102,103,97,100,103,97}),
[_D({149,152,155,148,162})] = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,97,98,98,102,99,102,100,104}),
}
end)()
}
local ViewportSize = workspace.CurrentCamera.ViewportSize
local UIScale = ViewportSize.Y / 450
local Settings = brutonlib.Settings
local Flags = brutonlib.Flags
local SetProps, SetChildren, InsertTheme, Create do
InsertTheme = function(Instance, Type)
table.insert(brutonlib.Instances, {
Instance = Instance,
Type = Type
})
return Instance
end
SetChildren = function(Instance, Children)
if Children then
table.foreach(Children, function(_,Child)
Child.Parent = Instance
end)
end
return Instance
end
SetProps = function(Instance, Props)
if Props then
table.foreach(Props, function(prop, value)
Instance[prop] = value
end)
end
return Instance
end
Create = function(...)
local args = {...}
if type(args) ~= _D({163,144,145,155,148}) then return end
local new = Instance.new(args[1])
local Children = {}
if type(args[2]) == _D({163,144,145,155,148}) then
SetProps(new, args[2])
SetChildren(new, args[3])
Children = args[3] or {}
elseif typeof(args[2]) == _D({120,157,162,163,144,157,146,148}) then
new.Parent = args[2]
SetProps(new, args[3])
SetChildren(new, args[4])
Children = args[4] or {}
end
return new
end
local function Save(file)
if readfile and isfile and isfile(file) then
local decode = HttpService:JSONDecode(readfile(file))
if type(decode) == _D({163,144,145,155,148}) then
if rawget(decode, _D({132,120,130,152,169,148})) then brutonlib.Save[_D({132,120,130,152,169,148})] = decode[_D({132,120,130,152,169,148})] end
if rawget(decode, _D({131,144,145,130,152,169,148})) then brutonlib.Save[_D({131,144,145,130,152,169,148})] = decode[_D({131,144,145,130,152,169,148})] end
if rawget(decode, _D({131,151,148,156,148})) and VerifyTheme(decode[_D({131,151,148,156,148})]) then brutonlib.Save[_D({131,151,148,156,148})] = decode[_D({131,151,148,156,148})] end
end
end
end
pcall(Save, _D({113,129,132,131,126,125,79,155,152,145,161,144,161,168,79,133,100,93,153,162,158,157}))
end
local Funcs = {} do
function Funcs:InsertCallback(tab, func)
if type(func) == _D({149,164,157,146,163,152,158,157}) then
table.insert(tab, func)
end
return func
end
function Funcs:FireCallback(tab, ...)
for _,v in ipairs(tab) do
if type(v) == _D({149,164,157,146,163,152,158,157}) then
task.spawn(v, ...)
end
end
end
function Funcs:ToggleVisible(Obj, Bool)
if Bool == nil then return end
Obj.Visible = Bool
end
function Funcs:ToggleParent(Obj, Bool, ParentTarget)
if Bool == nil then return end
if Bool then
Obj.Parent = ParentTarget or Obj.Parent
else
Obj.Parent = nil
end
end
function Funcs:GetConnectionFunctions(ConnectedFuncs, func)
local Connected = { Function = func, Connected = true }
function Connected:Disconnect()
if self.Connected then
table.remove(ConnectedFuncs, table.find(ConnectedFuncs, self.Function))
self.Connected = false
end
end
function Connected:Fire(...)
if self.Connected then
task.spawn(self.Function, ...)
end
end
return Connected
end
function Funcs:GetCallback(Configs, index)
local func = Configs[index] or Configs.Callback or function()end
if type(func) == _D({163,144,145,155,148}) then
return ({function(Value) func[1][func[2]] = Value end})
end
return {func}
end
end
local Connections, Connection = {}, brutonlib.Connection do
local function NewConnectionList(List)
if type(List) ~= _D({163,144,145,155,148}) then return end
for _,CoName in ipairs(List) do
local ConnectedFuncs, Connect = {}, {}
Connection[CoName] = Connect
Connections[CoName] = ConnectedFuncs
Connect.Name = CoName
function Connect:Connect(func)
if type(func) == _D({149,164,157,146,163,152,158,157}) then
table.insert(ConnectedFuncs, func)
return Funcs:GetConnectionFunctions(ConnectedFuncs, func)
end
end
local NotificationContainer = Create(_D({117,161,144,156,148}), ScreenGui, {
Name = _D({125,158,163,152,149,152,146,144,163,152,158,157,114,158,157,163,144,152,157,148,161}),
Size = UDim2.new(0, 280, 1, 0),
Position = UDim2.new(1, -300, 1, -20),
AnchorPoint = Vector2.new(0, 1),
BackgroundTransparency = 1,
ZIndex = 999
}, {
Create(_D({132,120,123,152,162,163,123,144,168,158,164,163}), {
SortOrder = _D({123,144,168,158,164,163,126,161,147,148,161}),
Padding = UDim.new(0, 8),
VerticalAlignment = _D({113,158,163,163,158,156})
})
})
function Connect:Once(func)
if type(func) == _D({149,164,157,146,163,152,158,157}) then
local Connected;
local _NFunc;_NFunc = function(...)
task.spawn(func, ...)
Connected:Disconnect()
end
Connected = Funcs:GetConnectionFunctions(ConnectedFuncs, _NFunc)
return Connected
end
end
end
end
function Connection:FireConnection(CoName, ...)
local Connection = type(CoName) == _D({162,163,161,152,157,150}) and Connections[CoName] or Connections[CoName.Name]
for _,Func in pairs(Connection) do
task.spawn(Func, ...)
end
end
NewConnectionList({_D({117,155,144,150,162,114,151,144,157,150,148,147}), _D({131,151,148,156,148,114,151,144,157,150,148,147}), _D({117,152,155,148,130,144,165,148,147}), _D({131,151,148,156,148,114,151,144,157,150,152,157,150}), _D({126,159,163,152,158,157,112,147,147,148,147})})
end
local GetFlag, SetFlag, CheckFlag do
CheckFlag = function(Name)
return type(Name) == _D({162,163,161,152,157,150}) and Flags[Name] ~= nil
end
GetFlag = function(Name)
return type(Name) == _D({162,163,161,152,157,150}) and Flags[Name]
end
SetFlag = function(Flag, Value)
if Flag and (Value ~= Flags[Flag] or type(Value) == _D({163,144,145,155,148})) then
Flags[Flag] = Value
Connection:FireConnection(_D({117,155,144,150,162,114,151,144,157,150,148,147}), Flag, Value)
end
end
local db
Connection.FlagsChanged:Connect(function(Flag, Value)
local ScriptFile = Settings.ScriptFile
if not db and ScriptFile and writefile then
db=true;task.wait(0.1);db=false
local Success, Encoded = pcall(function()
return HttpService:JSONEncode(Flags)
end)
if Success then
local Success = pcall(writefile, ScriptFile, Encoded)
if Success then
Connection:FireConnection(_D({117,152,155,148,130,144,165,148,147}), _D({130,146,161,152,159,163,92,117,155,144,150,162}), ScriptFile, Encoded)
end
end
end
end)
end
local ScreenGui = Create(_D({130,146,161,148,148,157,118,164,152}), CoreGui, {
Name = _D({113,129,132,131,126,125,79,123,152,145,161,144,161,168}),
}, {
Create(_D({132,120,130,146,144,155,148}), {
Scale = UIScale,
Name = _D({130,146,144,155,148})
})
})
local ScreenFind = CoreGui:FindFirstChild(ScreenGui.Name)
if ScreenFind and ScreenFind ~= ScreenGui then
ScreenFind:Destroy()
end
local function GetStr(val)
if type(val) == _D({149,164,157,146,163,152,158,157}) then
return val()
end
return val
end
local function ConnectSave(Instance, func)
Instance.InputBegan:Connect(function(Input)
if Input.UserInputType == Enum.UserInputType.MouseButton1 or Input.UserInputType == Enum.UserInputType.Touch then
while UserInputService:IsMouseButtonPressed(Enum.UserInputType.MouseButton1) do task.wait()
end
end
func()
end)
end
local function CreateTween(Configs)
local Instance = Configs[1] or Configs.Instance
local Prop = Configs[2] or Configs.Prop
local NewVal = Configs[3] or Configs.NewVal
local Time = Configs[4] or Configs.Time or 0.5
local TweenWait = Configs[5] or Configs.wait or false
local TweenInfo = TweenInfo.new(Time, Enum.EasingStyle.Quint)
local Tween = TweenService:Create(Instance, TweenInfo, {[Prop] = NewVal})
Tween:Play()
if TweenWait then
Tween.Completed:Wait()
end
return Tween
end
local function MakeDrag(Instance)
task.spawn(function()
SetProps(Instance, {
Active = true,
AutoButtonColor = false
})
local DragStart, StartPos, InputOn
local function Update(Input)
local delta = Input.Position - DragStart
local Position = UDim2.new(StartPos.X.Scale, StartPos.X.Offset + delta.X / UIScale, StartPos.Y.Scale, StartPos.Y.Offset + delta.Y / UIScale)
CreateTween({Instance, _D({127,158,162,152,163,152,158,157}), Position, 0.35})
end
Instance.MouseButton1Down:Connect(function()
InputOn = true
end)
Instance.InputBegan:Connect(function(Input)
if Input.UserInputType == Enum.UserInputType.MouseButton1 or Input.UserInputType == Enum.UserInputType.Touch then
StartPos = Instance.Position
DragStart = Input.Position
while UserInputService:IsMouseButtonPressed(Enum.UserInputType.MouseButton1) do RunService.Heartbeat:Wait()
if InputOn then
Update(Input)
end
end
InputOn = false
end
end)
end)
return Instance
end
local function VerifyTheme(Theme)
for name,_ in pairs(brutonlib.Themes) do
if name == Theme then
return true
end
end
end
local function SaveJson(FileName, save)
if writefile then
local json = HttpService:JSONEncode(save)
writefile(FileName, json)
end
end
local Theme = brutonlib.Themes[brutonlib.Save.Theme]
local function AddEle(Name, Func)
brutonlib.Elements[Name] = Func
end
local function Make(Ele, Instance, props, ...)
local Element = brutonlib.Elements[Ele](Instance, props, ...)
return Element
end
AddEle(_D({114,158,161,157,148,161}), function(parent, CornerRadius)
local New = SetProps(Create(_D({132,120,114,158,161,157,148,161}), parent, {
CornerRadius = CornerRadius or UDim.new(0, 7)
}), props)
return New
end)
AddEle(_D({130,163,161,158,154,148}), function(parent, props, ...)
local args = {...}
local New = InsertTheme(SetProps(Create(_D({132,120,130,163,161,158,154,148}), parent, {
Color = args[1] or Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})],
Thickness = args[2] or 1,
ApplyStrokeMode = _D({113,158,161,147,148,161})
}), props), _D({130,163,161,158,154,148}))
return New
end)
AddEle(_D({113,164,163,163,158,157}), function(parent, props, ...)
local args = {...}
local New = InsertTheme(SetProps(Create(_D({131,148,167,163,113,164,163,163,158,157}), parent, {
Text = _D({}),
Size = UDim2.fromScale(1, 1),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,119,164,145,79,97})],
AutoButtonColor = false
}), props), _D({117,161,144,156,148}))
local OriginalSize = New.Size
local IsMouseOver = false
New.MouseEnter:Connect(function()
IsMouseOver = true
New.BackgroundTransparency = 0.4
end)
New.MouseLeave:Connect(function()
IsMouseOver = false
New.BackgroundTransparency = 0
end)
New.MouseButton1Down:Connect(function()
CreateTween({New, _D({130,152,169,148}), OriginalSize - UDim2.fromOffset(4, 2), 0.1})
CreateTween({New, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), 0.6, 0.1})
end)
New.MouseButton1Up:Connect(function()
CreateTween({New, _D({130,152,169,148}), OriginalSize, 0.15})
CreateTween({New, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), IsMouseOver and 0.4 or 0, 0.15})
end)
if args[1] then
New.Activated:Connect(args[1])
end
return New
end)
AddEle(_D({118,161,144,147,152,148,157,163}), function(parent, props, ...)
local args = {...}
local New = InsertTheme(SetProps(Create(_D({132,120,118,161,144,147,152,148,157,163}), parent, {
Color = Theme[_D({114,158,155,158,161,79,119,164,145,79,96})]
}), props), _D({118,161,144,147,152,148,157,163}))
return New
end)
local function ButtonFrame(Instance, Title, Description, HolderSize)
local TitleL = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), {
Font = Enum.Font.FredokaOne,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
Size = UDim2.new(1, -20),
AutomaticSize = _D({136}),
Position = UDim2.new(0, 0, 0.5),
AnchorPoint = Vector2.new(0, 0.5),
BackgroundTransparency = 1,
TextTruncate = _D({112,163,116,157,147}),
TextSize = 10,
TextXAlignment = _D({123,148,149,163}),
Text = _D({}),
RichText = true
}), _D({131,148,167,163}))
local DescL = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), {
Font = Enum.Font.Gotham,
TextColor3 = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})],
Size = UDim2.new(1, -20),
AutomaticSize = _D({136}),
Position = UDim2.new(0, 12, 0, 15),
BackgroundTransparency = 1,
TextWrapped = true,
TextSize = 8,
TextXAlignment = _D({123,148,149,163}),
Text = _D({}),
RichText = true
}), _D({115,144,161,154,131,148,167,163}))
local Frame = Make(_D({113,164,163,163,158,157}), Instance, {
Size = UDim2.new(1, 0, 0, 25),
AutomaticSize = _D({136}),
Name = _D({126,159,163,152,158,157})
})Make(_D({114,158,161,157,148,161}), Frame, UDim.new(0, 6))
LabelHolder = Create(_D({117,161,144,156,148}), Frame, {
AutomaticSize = _D({136}),
BackgroundTransparency = 1,
Size = HolderSize,
Position = UDim2.new(0, 10, 0),
AnchorPoint = Vector2.new(0, 0)
}, {
Create(_D({132,120,123,152,162,163,123,144,168,158,164,163}), {
SortOrder = _D({123,144,168,158,164,163,126,161,147,148,161}),
VerticalAlignment = _D({114,148,157,163,148,161}),
Padding = UDim.new(0, 2)
}),
Create(_D({132,120,127,144,147,147,152,157,150}), {
PaddingBottom = UDim.new(0, 5),
PaddingTop = UDim.new(0, 5)
}),
TitleL,
DescL,
})
local Label = {}
function Label:SetTitle(NewTitle)
if type(NewTitle) == _D({162,163,161,152,157,150}) and NewTitle:gsub(_D({79}), _D({})):len() > 0 then
TitleL.Text = NewTitle
end
end
function Label:SetDesc(NewDesc)
if type(NewDesc) == _D({162,163,161,152,157,150}) and NewDesc:gsub(_D({79}), _D({})):len() > 0 then
DescL.Visible = true
DescL.Text = NewDesc
LabelHolder.Position = UDim2.new(0, 10, 0)
LabelHolder.AnchorPoint = Vector2.new(0, 0)
else
DescL.Visible = false
DescL.Text = _D({})
LabelHolder.Position = UDim2.new(0, 10, 0.5)
LabelHolder.AnchorPoint = Vector2.new(0, 0.5)
end
end
Label:SetTitle(Title)
Label:SetDesc(Description)
return Frame, Label
end
local function GetColor(Instance)
if Instance:IsA(_D({117,161,144,156,148})) then
return _D({113,144,146,154,150,161,158,164,157,147,114,158,155,158,161,98})
elseif Instance:IsA(_D({120,156,144,150,148,123,144,145,148,155})) then
return _D({120,156,144,150,148,114,158,155,158,161,98})
elseif Instance:IsA(_D({131,148,167,163,123,144,145,148,155})) then
return _D({131,148,167,163,114,158,155,158,161,98})
elseif Instance:IsA(_D({130,146,161,158,155,155,152,157,150,117,161,144,156,148})) then
return _D({130,146,161,158,155,155,113,144,161,120,156,144,150,148,114,158,155,158,161,98})
elseif Instance:IsA(_D({132,120,130,163,161,158,154,148})) then
return _D({114,158,155,158,161})
end
return _D({})
end
local function ColorToHex(Color)
return string.format(_D({82,84,95,97,135,84,95,97,135,84,95,97,135}), math.floor(Color.R * 255 + 0.5), math.floor(Color.G * 255 + 0.5), math.floor(Color.B * 255 + 0.5))
end
local function HexToColor(Hex)
Hex = tostring(Hex):gsub(_D({82}), _D({})):gsub(_D({79}), _D({}))
if #Hex ~= 6 then return nil end
local r = tonumber(Hex:sub(1, 2), 16)
local g = tonumber(Hex:sub(3, 4), 16)
local b = tonumber(Hex:sub(5, 6), 16)
if not (r and g and b) then return nil end
return Color3.fromRGB(r, g, b)
end
function brutonlib:GetIcon(index)
if type(index) ~= _D({162,163,161,152,157,150}) or index:find(_D({161,145,167,144,162,162,148,163,152,147,105,94,94})) or #index == 0 then
return index
end
local firstMatch = nil
index = string.lower(index):gsub(_D({155,164,146,152,147,148}), _D({})):gsub(_D({92}), _D({}))
for Name, Icon in self.Icons do
Name = Name:gsub(_D({155,164,146,152,147,148}), _D({})):gsub(_D({92}), _D({}))
if Name == index then
return Icon
elseif not firstMatch and Name:find(index, 1, true) then
firstMatch = Icon
end
end
return firstMatch or index
end
function brutonlib:SetTheme(NewTheme)
if not VerifyTheme(NewTheme) then return end
brutonlib.Save.Theme = NewTheme
SaveJson(_D({113,129,132,131,126,125,79,155,152,145,161,144,161,168,79,133,100,93,153,162,158,157}), brutonlib.Save)
Theme = brutonlib.Themes[NewTheme]
Comnection:FireConnection(_D({131,151,148,156,148,114,151,144,157,150,148,147}), NewTheme)
table.foreach(brutonlib.Instances, function(_,Val)
if Val.Type == _D({118,161,144,147,152,148,157,163}) then
Val.Instance.Color = Theme[_D({114,158,155,158,161,79,119,164,145,79,96})]
elseif Val.Type == _D({117,161,144,156,148}) then
Val.Instance.BackgroundColor3 = Theme[_D({114,158,155,158,161,79,119,164,145,79,97})]
elseif Val.Type == _D({130,163,161,158,154,148}) then
Val.Instance[GetColor(Val.Instance)] = Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})]
elseif Val.Type == _D({116,147,150,148}) then
Val.Instance[GetColor(Val.Instance)] = Theme[_D({114,158,155,158,161,79,116,147,150,148})]
elseif Val.Type == _D({131,151,148,156,148}) then
Val.Instance[GetColor(Val.Instance)] = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})]
elseif Val.Type == _D({119,148,144,147,152,157,150}) then
Val.Instance[GetColor(Val.Instance)] = Theme[_D({114,158,155,158,161,79,119,148,144,147,152,157,150})] or Theme[_D({114,158,155,158,161,79,131,151,148,156,148})]
elseif Val.Type == _D({131,148,167,163}) then
Val.Instance[GetColor(Val.Instance)] = Theme[_D({114,158,155,158,161,79,131,148,167,163})]
elseif Val.Type == _D({115,144,161,154,131,148,167,163}) then
Val.Instance[GetColor(Val.Instance)] = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})]
elseif Val.Type == _D({130,146,161,158,155,155,113,144,161}) then
Val.Instance[GetColor(Val.Instance)] = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})]
end
end)
end
function brutonlib:SetScale(NewScale)
NewScale = ViewportSize.Y / math.clamp(NewScale, 300, 2000)
UIScale, ScreenGui.Scale.Scale = NewScale, NewScale
end
local NotificationContainer = Create(_D({117,161,144,156,148}), ScreenGui, {
Name = _D({125,158,163,152,149,152,146,144,163,152,158,157,114,158,157,163,144,152,157,148,161}),
Size = UDim2.new(0, 280, 1, 0),
Position = UDim2.new(1, -300, 1, -20),
AnchorPoint = Vector2.new(0, 1),
BackgroundTransparency = 1,
ZIndex = 999
}, {
Create(_D({132,120,123,152,162,163,123,144,168,158,164,163}), {
SortOrder = _D({123,144,168,158,164,163,126,161,147,148,161}),
Padding = UDim.new(0, 8),
VerticalAlignment = _D({113,158,163,163,158,156})
})
})
function brutonlib:Notify(Configs)
local Title = Configs[1] or Configs.Title or _D({125,158,163,152,149,152,146,144,163,152,158,157})
local Description = Configs[2] or Configs.Description or Configs.Text or _D({})
local Duration = Configs[3] or Configs.Duration or 5
local Type = Configs.Type or _D({120,157,149,158})
local Image = Configs.Image or _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,96,98,99,99,104,95,101,95,99,104,96,103,104,101})
local Colors = {
Info = Color3.fromRGB(88, 101, 242),
Success = Color3.fromRGB(82, 75, 87),
Warning = Color3.fromRGB(255, 193, 7),
Error = Color3.fromRGB(255, 17, 0)
}
local TypeColor = Colors[Type] or Colors.Info
local NotificationFrame = Create(_D({117,161,144,156,148}), NotificationContainer, {
Size = UDim2.new(1, 0, 0, 45),
BackgroundColor3 = Color3.fromRGB(15, 15, 15),
BackgroundTransparency = 0,
BorderSizePixel = 0,
ClipsDescendants = true
})
Make(_D({114,158,161,157,148,161}), NotificationFrame, UDim.new(0, 12))
local NotificationStroke = Create(_D({132,120,130,163,161,158,154,148}), NotificationFrame, {
Color = Color3.fromRGB(42, 38, 43),
Thickness = 2,
ApplyStrokeMode = _D({113,158,161,147,148,161})
})
local TitleLabel = Create(_D({131,148,167,163,123,144,145,148,155}), NotificationFrame, {
Size = UDim2.new(1, -50, 0, 16),
Position = UDim2.new(0, 44, 0, 4),
BackgroundTransparency = 1,
Text = Title,
TextColor3 = Color3.fromRGB(255, 255, 255),
TextSize = 11,
Font = Enum.Font.GothamBold,
TextXAlignment = _D({123,148,149,163}),
TextTruncate = _D({112,163,116,157,147})
})
local DescLabel = Create(_D({131,148,167,163,123,144,145,148,155}), NotificationFrame, {
Size = UDim2.new(1, -50, 0, 20),
Position = UDim2.new(0, 44, 0, 15),
BackgroundTransparency = 1,
Text = Description,
TextColor3 = Color3.fromRGB(180, 180, 180),
TextSize = 9,
Font = Enum.Font.Gotham,
TextXAlignment = _D({123,148,149,163}),
TextWrapped = true
})
local Icon = Create(_D({120,156,144,150,148,123,144,145,148,155}), NotificationFrame, {
Name = _D({125,158,163,152,149,152,146,144,163,152,158,157,120,146,158,157}),
Size = UDim2.new(0, 32, 0, 32),
Position = UDim2.new(0, 6, 0.5, -20),
BackgroundTransparency = 1,
Image = Image,
ZIndex = 1000
})
local CounterLabel = Create(_D({131,148,167,163,123,144,145,148,155}), NotificationFrame, {
Size = UDim2.new(0, 30, 0, 16),
Position = UDim2.new(1, -35, 0, 4),
BackgroundTransparency = 1,
Text = tostring(Duration),
TextColor3 = TypeColor,
TextSize = 10,
Font = Enum.Font.GothamBold,
TextXAlignment = _D({129,152,150,151,163})
})
local function RemoveNotification()
CreateTween({NotificationFrame, _D({127,158,162,152,163,152,158,157}), UDim2.new(1, 50, NotificationFrame.Position.Y.Scale, 0), 0.3})
CreateTween({NotificationFrame, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), 1, 0.3})
CreateTween({NotificationStroke, _D({131,161,144,157,162,159,144,161,148,157,146,168}), 1, 0.3, true})
NotificationFrame:Destroy()
end
NotificationFrame.Position = UDim2.new(1, 50, 0, 0)
CreateTween({NotificationFrame, _D({127,158,162,152,163,152,158,157}), UDim2.new(0, 0, 0, 0), 0.4})
if Duration > 0 then
local timeLeft = Duration
local updateInterval = 0.1
local connection
connection = task.spawn(function()
while timeLeft > 0 do
task.wait(updateInterval)
timeLeft = timeLeft - updateInterval
if timeLeft <= 0 then
CounterLabel.Text = _D({95,93,95})
task.wait(0.1)
if NotificationFrame and NotificationFrame.Parent then
RemoveNotification()
end
break
else
CounterLabel.Text = string.format(_D({84,93,96,149}), timeLeft)
end
end
end)
end
local Notification = {}
function Notification:Remove()
RemoveNotification()
end
return Notification
end
function brutonlib:MakeWindow(Configs)
local WTitle = Configs[1] or Configs.Name or Configs.Title or _D({113,129,132,131,126,125,79,123,152,145,161,144,161,168})
local WMiniText = Configs[2] or Configs.SubTitle or _D({145,168,79,105,79,145,161,164,163,158,157,155,152,145})
Settings.ScriptFile = Configs[3] or Configs.SaveFolder or false
local function LoadFile()
local File = Settings.ScriptFile
if type(File) ~= _D({162,163,161,152,157,150}) then return end
if not readfile or not isfile then return end
local s, r = pcall(isfile, File)
if s and r then
local s, _Flags = pcall(readfile, File)
if s and type(_Flags) == _D({162,163,161,152,157,150}) then
local s,r = pcall(function() return HttpService:JSONDecode(_Flags) end)
Flags = s and r or {}
end
end
end;LoadFile()
local UISizeX, UISizeY = unpack(brutonlib.Save.UISize)
local MainFrame = InsertTheme(Create(_D({120,156,144,150,148,113,164,163,163,158,157}), ScreenGui, {
Size = UDim2.fromOffset(UISizeX, UISizeY),
Position = UDim2.new(0.5, -UISizeX/2, 0.5, -UISizeY/2),
BackgroundTransparency = 0.15,
Name = _D({119,164,145})
}), _D({124,144,152,157}))
Make(_D({118,161,144,147,152,148,157,163}), MainFrame, {
Rotation = 45
})MakeDrag(MainFrame)
local MainCorner = Make(_D({114,158,161,157,148,161}), MainFrame)
local Components = Create(_D({117,158,155,147,148,161}), MainFrame, {
Name = _D({114,158,156,159,158,157,148,157,163,162})
})
local DropdownHolder = Create(_D({117,158,155,147,148,161}), ScreenGui, {
Name = _D({115,161,158,159,147,158,166,157})
})
local TopBar = Create(_D({117,161,144,156,148}), Components, {
Size = UDim2.new(1, 0, 0, 28),
BackgroundTransparency = 1,
Name = _D({131,158,159,79,113,144,161})
})
local Title = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), TopBar, {
Position = UDim2.new(0, 15, 0.5),
AnchorPoint = Vector2.new(0, 0.5),
AutomaticSize = _D({135,136}),
Text = WTitle,
TextXAlignment = _D({123,148,149,163}),
TextSize = 12,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
BackgroundTransparency = 1,
Font = Enum.Font.FredokaOne,
Name = _D({131,152,163,155,148})
}, {
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), {
Size = UDim2.fromScale(0, 1),
AutomaticSize = _D({135}),
AnchorPoint = Vector2.new(0, 1),
Position = UDim2.new(1, 5, 0.9),
Text = WMiniText,
TextColor3 = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,118,161,148,148,156})],
BackgroundTransparency = 1,
TextXAlignment = _D({123,148,149,163}),
TextYAlignment = _D({113,158,163,163,158,156}),
TextSize = 9,
Font = Enum.Font.Gotham,
Name = _D({130,164,145,131,152,163,155,148})
}), _D({115,144,161,154,131,148,167,163}))
}), _D({131,148,167,163}))
local MainScroll = InsertTheme(Create(_D({130,146,161,158,155,155,152,157,150,117,161,144,156,148}), Components, {
Size = UDim2.new(0, brutonlib.Save.TabSize, 1, -TopBar.Size.Y.Offset),
ScrollBarImageColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
Position = UDim2.new(0, 0, 1, 0),
AnchorPoint = Vector2.new(0, 1),
ScrollBarThickness = 1.5,
BackgroundTransparency = 1,
ScrollBarImageTransparency = 0.2,
CanvasSize = UDim2.new(),
AutomaticCanvasSize = _D({136}),
ScrollingDirection = _D({136}),
BorderSizePixel = 0,
Name = _D({131,144,145,79,130,146,161,158,155,155})
}, {
Create(_D({132,120,127,144,147,147,152,157,150}), {
PaddingLeft = UDim.new(0, 10),
PaddingRight = UDim.new(0, 10),
PaddingTop = UDim.new(0, 10),
PaddingBottom = UDim.new(0, 10)
}), Create(_D({132,120,123,152,162,163,123,144,168,158,164,163}), {
Padding = UDim.new(0, 5)
})
}), _D({130,146,161,158,155,155,113,144,161}))
local Containers = Create(_D({117,161,144,156,148}), Components, {
Size = UDim2.new(1, -MainScroll.Size.X.Offset, 1, -TopBar.Size.Y.Offset),
AnchorPoint = Vector2.new(1, 1),
Position = UDim2.new(1, 0, 1, 0),
BackgroundTransparency = 1,
ClipsDescendants = true,
Name = _D({114,158,157,163,144,152,157,148,161,162})
})
local ParticleContainer = Create(_D({117,161,144,156,148}), Containers, {
Size = UDim2.new(1, 0, 1, 0),
BackgroundTransparency = 1,
Name = _D({131,151,148,156,148,127,144,161,163,152,146,155,148,162}),
ZIndex = -5,
ClipsDescendants = true
})
local ParticleConfig = {
MaxParticles = 90,
StarSize = {Min = 1, Max = 3},
TwinkleSpeed = {Min = 0.6, Max = 2.2}
}
local ActiveParticles = {}
local function CreateStar()
local containerSize = ParticleContainer.AbsoluteSize
local x = math.random(0, math.max(containerSize.X, 1))
local y = math.random(0, math.max(containerSize.Y, 1))
local size = math.random(ParticleConfig.StarSize.Min * 10, ParticleConfig.StarSize.Max * 10) / 10 * 6
local Star = Create(_D({120,156,144,150,148,123,144,145,148,155}), ParticleContainer, {
Size = UDim2.fromOffset(size, size),
Position = UDim2.fromOffset(x, y),
AnchorPoint = Vector2.new(0.5, 0.5),
BackgroundTransparency = 1,
Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,103,99,95,95,95,97,104,96,102,100,103,104,96,97}),
ImageColor3 = Theme[_D({114,158,155,158,161,79,113,164,145,145,155,148})] or Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
ImageTransparency = 0.5,
ScaleType = Enum.ScaleType.Fit,
Rotation = math.random(0, 360)
})
local StarData = {
Frame = Star,
Phase = math.random() * math.pi * 2,
Speed = ParticleConfig.TwinkleSpeed.Min + math.random() * (ParticleConfig.TwinkleSpeed.Max - ParticleConfig.TwinkleSpeed.Min),
RotSpeed = (math.random() - 0.5) * 12,
Rotation = Star.Rotation
}
table.insert(ActiveParticles, StarData)
end
local function CreateStarField()
for _ = 1, ParticleConfig.MaxParticles do
CreateStar()
end
end
local function UpdateStarField()
local StarColor = Theme[_D({114,158,155,158,161,79,113,164,145,145,155,148})] or Theme[_D({114,158,155,158,161,79,131,151,148,156,148})]
for _, star in ipairs(ActiveParticles) do
if star.Frame and star.Frame.Parent then
local pulse = 0.5 + 0.5 * math.sin(tick() * star.Speed + star.Phase)
star.Frame.ImageTransparency = 0.85 - (pulse * 0.75)
star.Frame.ImageColor3 = StarColor
star.Rotation = star.Rotation + star.RotSpeed * 0.03
star.Frame.Rotation = star.Rotation
end
end
end
local ParticleConnection = nil
local BackgroundImage = Create(_D({120,156,144,150,148,123,144,145,148,155}), ParticleContainer, {
Size = UDim2.new(1, 0, 1, 0),
Position = UDim2.new(0, 0, 0, 0),
BackgroundTransparency = 1,
ImageTransparency = 0.45,
ScaleType = Enum.ScaleType.Crop,
ZIndex = -4,
Visible = false
})
local BackgroundDim = Create(_D({117,161,144,156,148}), ParticleContainer, {
Size = UDim2.new(1, 0, 1, 0),
BackgroundColor3 = Color3.fromRGB(0, 0, 0),
BackgroundTransparency = 0.45,
BorderSizePixel = 0,
ZIndex = -3,
Visible = false
})
Make(_D({114,158,161,157,148,161}), BackgroundDim)
local function StopParticles()
if ParticleConnection then
ParticleConnection:Disconnect()
ParticleConnection = nil
end
for _, p in ipairs(ActiveParticles) do
if p.Frame and p.Frame.Parent then
p.Frame:Destroy()
end
end
ActiveParticles = {}
ParticleContainer.Visible = false
end
local function StartParticles()
ParticleContainer.Visible = true
BackgroundImage.Visible   = false
BackgroundDim.Visible     = false
if #ActiveParticles == 0 then
CreateStarField()
end
if not ParticleConnection then
ParticleConnection = RunService.Heartbeat:Connect(UpdateStarField)
end
end
local function StartImage(url, transparency, dim)
StopParticles()
BackgroundImage.Image             = url or _D({})
BackgroundImage.ImageTransparency = transparency or 0.45
BackgroundDim.BackgroundTransparency = dim or 0.45
BackgroundImage.Visible  = true
BackgroundDim.Visible    = true
ParticleContainer.Visible = true
end
local ControlSize1, ControlSize2 = MakeDrag(Create(_D({120,156,144,150,148,113,164,163,163,158,157}), MainFrame, {
Size = UDim2.new(0, 35, 0, 35),
Position = MainFrame.Size,
Active = true,
AnchorPoint = Vector2.new(0.8, 0.8),
BackgroundTransparency = 1,
Name = _D({114,158,157,163,161,158,155,79,119,164,145,79,130,152,169,148})
})), MakeDrag(Create(_D({120,156,144,150,148,113,164,163,163,158,157}), MainFrame, {
Size = UDim2.new(0, 20, 1, -30),
Position = UDim2.new(0, MainScroll.Size.X.Offset, 1, 0),
AnchorPoint = Vector2.new(0.5, 1),
Active = true,
BackgroundTransparency = 1,
Name = _D({114,158,157,163,161,158,155,79,131,144,145,79,130,152,169,148})
}))
local function ControlSize()
local Pos1, Pos2 = ControlSize1.Position, ControlSize2.Position
ControlSize1.Position = UDim2.fromOffset(math.clamp(Pos1.X.Offset, 430, 1000), math.clamp(Pos1.Y.Offset, 200, 500))
ControlSize2.Position = UDim2.new(0, math.clamp(Pos2.X.Offset, 135, 250), 1, 0)
MainScroll.Size = UDim2.new(0, ControlSize2.Position.X.Offset, 1, -TopBar.Size.Y.Offset)
Containers.Size = UDim2.new(1, -MainScroll.Size.X.Offset, 1, -TopBar.Size.Y.Offset)
MainFrame.Size = ControlSize1.Position
end
ControlSize1:GetPropertyChangedSignal(_D({127,158,162,152,163,152,158,157})):Connect(ControlSize)
ControlSize2:GetPropertyChangedSignal(_D({127,158,162,152,163,152,158,157})):Connect(ControlSize)
ConnectSave(ControlSize1, function()
if not Minimized then
brutonlib.Save.UISize = {MainFrame.Size.X.Offset, MainFrame.Size.Y.Offset}
SaveJson(_D({113,129,132,131,126,125,79,155,152,145,161,144,161,168,79,133,100,93,153,162,158,157}), brutonlib.Save)
end
end)
ConnectSave(ControlSize2, function()
brutonlib.Save.TabSize = MainScroll.Size.X.Offset
SaveJson(_D({113,129,132,131,126,125,79,155,152,145,161,144,161,168,79,133,100,93,153,162,158,157}), brutonlib.Save)
end)
local ButtonsFolder = Create(_D({117,158,155,147,148,161}), TopBar, {
Name = _D({113,164,163,163,158,157,162})
})
local CloseButton = Create(_D({120,156,144,150,148,113,164,163,163,158,157}), {
Size = UDim2.new(0, 14, 0, 14),
Position = UDim2.new(1, -10, 0.5),
AnchorPoint = Vector2.new(1, 0.5),
BackgroundTransparency = 1,
Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,99,102,98,103,99,98,104,99}),
AutoButtonColor = false,
Name = _D({114,155,158,162,148})
})
local MinimizeButton = SetProps(CloseButton:Clone(), {
Position = UDim2.new(1, -35, 0.5),
Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,98,99,103,104,101,97,95,101}),
Name = _D({124,152,157,152,156,152,169,148})
})
local SettingButton = SetProps(CloseButton:Clone(), {
Position = UDim2.new(1, -60, 0.5),
Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,96,98,103,100,97,97,95,102,95,99}),
ImageColor3 = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})],
Name = _D({130,148,163,163,152,157,150,162})
})
SetChildren(ButtonsFolder, {
CloseButton,
MinimizeButton,
SettingButton
})
local Minimized, SaveSize, WaitClick
local Window, FirstTab = {}, false
function Window:CloseBtn()
local Dialog = Window:Dialog({
Title = _D({114,155,158,162,148}),
Text = _D({112,161,148,79,168,158,164,79,162,164,161,148,79,168,158,164,79,166,144,157,163,79,163,158,79,146,155,158,162,148,79,163,151,148,79,145,161,164,163,158,157,79,162,146,161,152,159,163,110,79}),
Options = {
{_D({114,158,157,149,152,161,156}), function()
ScreenGui:Destroy()
end},
{_D({114,144,157,146,148,155})}
}
})
end
function Window:MinimizeBtn()
if WaitClick then return end
WaitClick = true
if Minimized then
MinimizeButton.Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,98,99,103,104,101,97,95,101})
CreateTween({MainFrame, _D({130,152,169,148}), SaveSize, 0.25, true})
ControlSize1.Visible = true
ControlSize2.Visible = true
for _, particle in pairs(ActiveParticles) do
if particle.Frame and particle.Frame.Parent then
particle.Frame.Visible = true
end
end
Minimized = false
else
MinimizeButton.Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,98,99,104,97,99,100,98,97})
SaveSize = MainFrame.Size
ControlSize1.Visible = false
ControlSize2.Visible = false
for _, particle in pairs(ActiveParticles) do
if particle.Frame and particle.Frame.Parent then
particle.Frame.Visible = false
end
end
CreateTween({MainFrame, _D({130,152,169,148}), UDim2.fromOffset(MainFrame.Size.X.Offset, 28), 0.25, true})
Minimized = true
end
WaitClick = false
end
function Window:Minimize()
MainFrame.Visible = not MainFrame.Visible
end
function Window:SetBackground(mode, configs)
if mode == _D({127,144,161,163,152,146,155,148,162}) then
StartParticles()
elseif mode == _D({120,156,144,150,148}) then
local url, transparency, dim
if type(configs) == _D({162,163,161,152,157,150}) then
url = configs
elseif type(configs) == _D({163,144,145,155,148}) then
url          = configs[1] or configs.URL or configs.Image or _D({})
transparency = configs.Transparency or configs.Alpha
dim          = configs.Dim or configs.Overlay
end
StartImage(url, transparency, dim)
elseif mode == _D({125,158,157,148}) then
StopParticles()
BackgroundImage.Visible  = false
BackgroundDim.Visible    = false
ParticleContainer.Visible = false
end
end
function Window:SetThemeParticles(enabled)
Window:SetBackground(enabled and _D({127,144,161,163,152,146,155,148,162}) or _D({125,158,157,148}))
end
function Window:Minimize()
MainFrame.Visible = not MainFrame.Visible
end
function Window:AddMinimizeButton(Configs)
local Button = MakeDrag(Create(_D({120,156,144,150,148,113,164,163,163,158,157}), ScreenGui, {
Size = UDim2.fromOffset(60, 60),
Position = UDim2.fromScale(0.15, 0.15),
BackgroundTransparency = 1,
AutoButtonColor = false
}))
local Stroke, Corner
if Configs.Corner then
Corner = Make(_D({114,158,161,157,148,161}), Button)
SetProps(Corner, Configs.Corner)
end
if Configs.Stroke then
Stroke = Make(_D({130,163,161,158,154,148}), Button)
SetProps(Stroke, Configs.Stroke)
end
SetProps(Button, Configs.Button)
Button.Activated:Connect(Window.Minimize)
return {
Stroke = Stroke,
Corner = Corner,
Button = Button
}
end
function Window:Set(Val1, Val2)
if type(Val1) == _D({162,163,161,152,157,150}) and type(Val2) == _D({162,163,161,152,157,150}) then
Title.Text = Val1
Title.SubTitle.Text = Val2
elseif type(Val1) == _D({162,163,161,152,157,150}) then
Title.Text = Val1
end
end
function Window:Dialog(Configs)
if MainFrame:FindFirstChild(_D({115,152,144,155,158,150})) then return end
if Minimized then
Window:MinimizeBtn()
end
local DTitle = Configs[1] or Configs.Title or _D({115,152,144,155,158,150})
local DText = Configs[2] or Configs.Text or _D({131,151,152,162,79,152,162,79,144,79,115,152,144,155,158,150})
local DOptions = Configs[3] or Configs.Options or {}
local Frame = Create(_D({117,161,144,156,148}), {
Active = true,
Size = UDim2.fromOffset(250 * 1.08, 150 * 1.08),
Position = UDim2.fromScale(0.5, 0.5),
AnchorPoint = Vector2.new(0.5, 0.5)
}, {
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), {
Font = Enum.Font.GothamBold,
Size = UDim2.new(1, 0, 0, 20),
Text = DTitle,
TextXAlignment = _D({123,148,149,163}),
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
TextSize = 15,
Position = UDim2.fromOffset(15, 5),
BackgroundTransparency = 1
}), _D({131,148,167,163})),
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), {
Font = Enum.Font.GothamMedium,
Size = UDim2.new(1, -25),
AutomaticSize = _D({136}),
Text = DText,
TextXAlignment = _D({123,148,149,163}),
TextColor3 = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})],
TextSize = 12,
Position = UDim2.fromOffset(15, 25),
BackgroundTransparency = 1,
TextWrapped = true
}), _D({115,144,161,154,131,148,167,163}))
})Make(_D({118,161,144,147,152,148,157,163}), Frame, {Rotation = 270})Make(_D({114,158,161,157,148,161}), Frame)
local ButtonsHolder = Create(_D({117,161,144,156,148}), Frame, {
Size = UDim2.fromScale(1, 0.35),
Position = UDim2.fromScale(0, 1),
AnchorPoint = Vector2.new(0, 1),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,119,164,145,79,97})],
BackgroundTransparency = 1
}, {
Create(_D({132,120,123,152,162,163,123,144,168,158,164,163}), {
Padding = UDim.new(0, 10),
VerticalAlignment = _D({114,148,157,163,148,161}),
FillDirection = _D({119,158,161,152,169,158,157,163,144,155}),
HorizontalAlignment = _D({114,148,157,163,148,161})
})
})
local Screen = InsertTheme(Create(_D({117,161,144,156,148}), MainFrame, {
BackgroundTransparency = 0.6,
Active = true,
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,119,164,145,79,97})],
Size = UDim2.new(1, 0, 1, 0),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})],
Name = _D({115,152,144,155,158,150})
}), _D({130,163,161,158,154,148}))
MainCorner:Clone().Parent = Screen
Frame.Parent = Screen
CreateTween({Frame, _D({130,152,169,148}), UDim2.fromOffset(250, 150), 0.2})
CreateTween({Frame, _D({131,161,144,157,162,159,144,161,148,157,146,168}), 0, 0.15})
CreateTween({Screen, _D({131,161,144,157,162,159,144,161,148,157,146,168}), 0.3, 0.15})
local ButtonCount, Dialog = 1, {}
function Dialog:Button(Configs)
local Name = Configs[1] or Configs.Name or Configs.Title or _D({})
local Callback = Configs[2] or Configs.Callback or function()end
ButtonCount = ButtonCount + 1
local Button = Make(_D({113,164,163,163,158,157}), ButtonsHolder)
Make(_D({114,158,161,157,148,161}), Button)
SetProps(Button, {
Text = Name,
Font = Enum.Font.GothamBold,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
TextSize = 12
})
for _,Button in pairs(ButtonsHolder:GetChildren()) do
if Button:IsA(_D({131,148,167,163,113,164,163,163,158,157})) then
Button.Size = UDim2.new(1 / ButtonCount, -(((ButtonCount - 1) * 20) / ButtonCount), 0, 32)
end
end
Button.Activated:Connect(Dialog.Close)
Button.Activated:Connect(Callback)
end
function Dialog:Close()
CreateTween({Frame, _D({130,152,169,148}), UDim2.fromOffset(250 * 1.08, 150 * 1.08), 0.2})
CreateTween({Screen, _D({131,161,144,157,162,159,144,161,148,157,146,168}), 1, 0.15})
CreateTween({Frame, _D({131,161,144,157,162,159,144,161,148,157,146,168}), 1, 0.15, true})
Screen:Destroy()
end
table.foreach(DOptions, function(_,Button)
Dialog:Button(Button)
end)
return Dialog
end
function Window:SelectTab(TabSelect)
if type(TabSelect) == _D({157,164,156,145,148,161}) then
brutonlib.Tabs[TabSelect].func:Enable()
else
for _,Tab in pairs(brutonlib.Tabs) do
if Tab.Cont == TabSelect.Cont then
Tab.func:Enable()
end
end
end
end
function Window:LoadTab(URL, WaitTime, ...)
if type(URL) ~= _D({162,163,161,152,157,150}) or URL == _D({}) then
warn(_D({138,145,161,164,163,158,157,155,152,145,140,79,123,158,144,147,131,144,145,105,79,152,157,165,144,155,152,147,79,132,129,123}))
return nil
end
local Success, Result = pcall(function(...)
return loadstring(game:HttpGet(URL))(Window, ...)
end, ...)
if not Success then
warn(_D({138,145,161,164,163,158,157,155,152,145,140,79,117,144,152,155,148,147,79,163,158,79,155,158,144,147,79,163,144,145,79,149,161,158,156,79,86}) .. URL .. _D({86,105,79}) .. tostring(Result))
return nil
end
task.wait(type(WaitTime) == _D({157,164,156,145,148,161}) and WaitTime or 0.15)
return Result
end
local ContainerList = {}
function Window:MakeTab(paste, Configs)
if type(paste) == _D({163,144,145,155,148}) then Configs = paste end
local TName = Configs[1] or Configs.Title or _D({131,144,145,80})
local TIcon = Configs[2] or Configs.Icon or _D({})
local IsSettingsTab = Configs.IsSettings == true
TIcon = brutonlib:GetIcon(TIcon)
if not TIcon:find(_D({161,145,167,144,162,162,148,163,152,147,105,94,94})) or TIcon:gsub(_D({161,145,167,144,162,162,148,163,152,147,105,94,94}), _D({})):len() < 6 then
TIcon = false
end
local TabSelect = Make(_D({113,164,163,163,158,157}), MainScroll, {
Size = UDim2.new(1, 0, 0, 24)
})Make(_D({114,158,161,157,148,161}), TabSelect)
local LabelTitle = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), TabSelect, {
Size = UDim2.new(1, TIcon and -25 or -15, 1),
Position = UDim2.fromOffset(TIcon and 25 or 15),
BackgroundTransparency = 1,
Font = Enum.Font.BuilderSansBold,
Text = TName,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
TextSize = 10,
TextXAlignment = Enum.TextXAlignment.Left,
TextTransparency = (FirstTab and 0.3) or 0,
TextTruncate = _D({112,163,116,157,147})
}), _D({131,148,167,163}))
local LabelIcon = InsertTheme(Create(_D({120,156,144,150,148,123,144,145,148,155}), TabSelect, {
Position = UDim2.new(0, 8, 0.5),
Size = UDim2.new(0, 13, 0, 13),
AnchorPoint = Vector2.new(0, 0.5),
Image = TIcon or _D({}),
BackgroundTransparency = 1,
ImageTransparency = (FirstTab and 0.3) or 0
}), _D({131,148,167,163}))
local Selected = InsertTheme(Create(_D({117,161,144,156,148}), TabSelect, {
Size = FirstTab and UDim2.new(0, 4, 0, 4) or UDim2.new(0, 4, 0, 13),
Position = UDim2.new(0, 1, 0.5),
AnchorPoint = Vector2.new(0, 0.5),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
BackgroundTransparency = FirstTab and 1 or 0
}), _D({131,151,148,156,148}))Make(_D({114,158,161,157,148,161}), Selected, UDim.new(0.5, 0))
local Container = InsertTheme(Create(_D({130,146,161,158,155,155,152,157,150,117,161,144,156,148}), {
Size = UDim2.new(1, 0, 1, 0),
Position = UDim2.new(0, 0, 1),
AnchorPoint = Vector2.new(0, 1),
ScrollBarThickness = 1.5,
BackgroundTransparency = 1,
ScrollBarImageTransparency = 0.2,
ScrollBarImageColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
AutomaticCanvasSize = _D({136}),
ScrollingDirection = _D({136}),
BorderSizePixel = 0,
CanvasSize = UDim2.new(),
Name = (_D({114,158,157,163,144,152,157,148,161,79,84,152,79,138,79,84,162,79,140})):format(#ContainerList + 1, TName)
}, {
Create(_D({132,120,127,144,147,147,152,157,150}), {
PaddingLeft = UDim.new(0, 10),
PaddingRight = UDim.new(0, 10),
PaddingTop = UDim.new(0, 10),
PaddingBottom = UDim.new(0, 10)
}), Create(_D({132,120,123,152,162,163,123,144,168,158,164,163}), {
Padding = UDim.new(0, 5)
})
}), _D({130,146,161,158,155,155,113,144,161}))
table.insert(ContainerList, Container)
if not FirstTab and not IsSettingsTab then Container.Parent = Containers end
local function Tabs()
if Container.Parent then return end
for _,Frame in pairs(ContainerList) do
if Frame:IsA(_D({130,146,161,158,155,155,152,157,150,117,161,144,156,148})) and Frame ~= Container then
Frame.Parent = nil
end
end
Container.Parent = Containers
Container.Size = UDim2.new(1, 0, 1, 150)
table.foreach(brutonlib.Tabs, function(_,Tab)
if Tab.Cont ~= Container then
Tab.func:Disable()
end
end)
CreateTween({Container, _D({130,152,169,148}), UDim2.new(1, 0, 1, 0), 0.3})
CreateTween({LabelTitle, _D({131,148,167,163,131,161,144,157,162,159,144,161,148,157,146,168}), 0, 0.35})
CreateTween({LabelIcon, _D({120,156,144,150,148,131,161,144,157,162,159,144,161,148,157,146,168}), 0, 0.35})
CreateTween({Selected, _D({130,152,169,148}), UDim2.new(0, 4, 0, 13), 0.35})
CreateTween({Selected, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), 0, 0.35})
end
TabSelect.Activated:Connect(Tabs)
if not IsSettingsTab then
FirstTab = true
end
local Tab = {}
table.insert(brutonlib.Tabs, {TabInfo = {Name = TName, Icon = TIcon}, func = Tab, Cont = Container})
Tab.Cont = Container
if Container.Parent and not IsSettingsTab then
Window.LastTab = Tab
end
function  Tab:Disable()
Container.Parent = nil
CreateTween({LabelTitle, _D({131,148,167,163,131,161,144,157,162,159,144,161,148,157,146,168}), 0.3, 0.35})
CreateTween({LabelIcon, _D({120,156,144,150,148,131,161,144,157,162,159,144,161,148,157,146,168}), 0.3, 0.35})
CreateTween({Selected, _D({130,152,169,148}), UDim2.new(0, 4, 0, 4), 0.35})
CreateTween({Selected, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), 1, 0.35})
end
function Tab:Enable()
Tabs()
if not IsSettingsTab then
Window.LastTab = Tab
end
end
function Tab:Visible(Bool)
Funcs:ToggleVisible(TabSelect, Bool)
Funcs:ToggleParent(Container, Bool, Containers)
end
function Tab:Destroy() TabSelect:Destroy() Container:Destroy() end
function Tab:AddSection(Configs)
local SectionName = type(Configs) == _D({162,163,161,152,157,150}) and Configs or Configs[1] or Configs.Name or Configs.Title or Configs.Section
local SectionFrame = Create(_D({117,161,144,156,148}), Container, {
Size = UDim2.new(1, 0, 0, 20),
BackgroundTransparency = 1,
Name = _D({126,159,163,152,158,157})
})
local SectionLabel = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), SectionFrame, {
Font = Enum.Font.BuilderSansExtraBold,
Text = SectionName,
TextColor3 = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,127,164,161,159,155,148})],
Size = UDim2.new(1, -25, 1, 0),
Position = UDim2.new(0, 30),
BackgroundTransparency = 1,
TextTruncate = _D({112,163,116,157,147}),
TextSize = 11,
TextXAlignment = _D({123,148,149,163})
}), _D({131,148,167,163}))
local Section = {}
table.insert(brutonlib.Options, {type = _D({130,148,146,163,152,158,157}), Name = SectionName, func = Section})
function Section:Visible(Bool)
if Bool == nil then SectionFrame.Visible = not SectionFrame.Visible return end
SectionFrame.Visible = Bool
end
function Section:Destroy()
SectionFrame:Destroy()
end
function Section:Set(New)
if New then
SectionLabel.Text = GetStr(New)
end
end
return Section
end
function Tab:AddImage(Configs)
local ImageURL  = Configs[1] or Configs.Image or Configs.URL or _D({})
local ImageSize = Configs[2] or Configs.Size or 80
local CornerTL  = Configs.CornerTL  or Configs.TopLeft     or 0
local CornerTR  = Configs.CornerTR  or Configs.TopRight    or 0
local CornerBL  = Configs.CornerBL  or Configs.BottomLeft  or 0
local CornerBR  = Configs.CornerBR  or Configs.BottomRight or 0
local ImageHolder = Create(_D({117,161,144,156,148}), Container, {
Size = UDim2.new(1, 0, 0, ImageSize),
BackgroundTransparency = 1,
Name = _D({126,159,163,152,158,157}),
ClipsDescendants = true
})
local ImageLabel = Create(_D({120,156,144,150,148,123,144,145,148,155}), ImageHolder, {
Size = UDim2.new(1, 0, 1, 0),
Position = UDim2.new(0, 0, 0, 0),
BackgroundTransparency = 1,
Image = ImageURL,
ScaleType = Enum.ScaleType.Crop,
})
local function MakeCornerMask(anchorX, anchorY, posX, posY, radius)
if radius <= 0 then return end
local Mask = Create(_D({117,161,144,156,148}), ImageHolder, {
Size = UDim2.new(0, radius * 2, 0, radius * 2),
Position = UDim2.new(posX, posX == 0 and 0 or -radius * 2, posY, posY == 0 and 0 or -radius * 2),
AnchorPoint = Vector2.new(anchorX, anchorY),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,119,164,145,79,97})],
BorderSizePixel = 0,
ZIndex = 2
})
end
local maxCorner = math.max(CornerTL, CornerTR, CornerBL, CornerBR)
if maxCorner > 0 then
Create(_D({132,120,114,158,161,157,148,161}), ImageLabel, {
CornerRadius = UDim.new(0, maxCorner)
})
end
if CornerTL == 0 and maxCorner > 0 then MakeCornerMask(0, 0, 0, 0, maxCorner) end
if CornerTR == 0 and maxCorner > 0 then MakeCornerMask(1, 0, 1, 0, maxCorner) end
if CornerBL == 0 and maxCorner > 0 then MakeCornerMask(0, 1, 0, 1, maxCorner) end
if CornerBR == 0 and maxCorner > 0 then MakeCornerMask(1, 1, 1, 1, maxCorner) end
local Image = {}
table.insert(brutonlib.Options, {type = _D({120,156,144,150,148}), URL = ImageURL, func = Image})
function Image:Visible(Bool)
if Bool == nil then ImageHolder.Visible = not ImageHolder.Visible return end
ImageHolder.Visible = Bool
end
function Image:Destroy()
ImageHolder:Destroy()
end
function Image:Set(NewURL)
if type(NewURL) == _D({162,163,161,152,157,150}) then
ImageLabel.Image = NewURL
end
end
function Image:SetSize(NewSize)
if type(NewSize) == _D({157,164,156,145,148,161}) then
ImageHolder.Size = UDim2.new(1, 0, 0, NewSize)
end
end
return Image
end
function Tab:AddParagraph(Configs)
local PName = Configs[1] or Configs.Title or _D({127,144,161,144,150,161,144,159,151})
local PDesc = Configs[2] or Configs.Text or _D({})
local Frame, LabelFunc = ButtonFrame(Container, PName, PDesc, UDim2.new(1, -20))
local Paragraph = {}
function Paragraph:Visible(...) Funcs:ToggleVisible(Frame, ...) end
function Paragraph:Destroy() Frame:Destroy() end
function Paragraph:SetTitle(Val)
LabelFunc:SetTitle(GetStr(Val))
end
function Paragraph:SetDesc(Val)
LabelFunc:SetDesc(GetStr(Val))
end
function Paragraph:Set(Val1, Val2)
if Val1 and Val2 then
LabelFunc:SetTitle(GetStr(Val1))
LabelFunc:SetDesc(GetStr(Val2))
elseif Val1 then
LabelFunc:SetDesc(GetStr(Val1))
end
end
return Paragraph
end
function Tab:AddButton(Configs)
local BName = Configs[1] or Configs.Name or Configs.Title or _D({113,164,163,163,158,157,80})
local BDescription = Configs.Desc or Configs.Description or _D({})
local Callback = Funcs:GetCallback(Configs, 2)
local FButton, LabelFunc = ButtonFrame(Container, BName, BDescription, UDim2.new(1, -20))
local ButtonIcon = Create(_D({120,156,144,150,148,123,144,145,148,155}), FButton, {
Size = UDim2.new(0, 14, 0, 14),
Position = UDim2.new(1, -10, 0.5),
AnchorPoint = Vector2.new(1, 0.5),
BackgroundTransparency = 1,
Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,97,101,99,101,98,99,95,98,102,99,99,98,98,102})
})
FButton.Activated:Connect(function()
Funcs:FireCallback(Callback)
end)
local Button = {}
function Button:Visible(...) Funcs:ToggleVisible(FButton, ...) end
function Button:Destroy() FButton:Destroy() end
function Button:Callback(...) Funcs:InsertCallback(Callback, ...) end
function Button:Set(Val1, Val2)
if type(Val1) == _D({162,163,161,152,157,150}) and type(Val2) == _D({162,163,161,152,157,150}) then
LabelFunc:SetTitle(Val1)
LabelFunc:SetDesc(Val2)
elseif type(Val1) == _D({162,163,161,152,157,150}) then
LabelFunc:SetTitle(Val1)
elseif type(Val1) == _D({149,164,157,146,163,152,158,157}) then
Callback = Val1
end
end
return Button
end
function Tab:AddToggle(Configs)
local TName = Configs[1] or Configs.Name or Configs.Title or _D({131,158,150,150,155,148})
local TDesc = Configs.Desc or Configs.Description or _D({})
local Callback = Funcs:GetCallback(Configs, 3)
local Flag = Configs[4] or Configs.Flag or false
local Default = Configs[2] or Configs.Default or false
if CheckFlag(Flag) then Default = GetFlag(Flag) end
local Button, LabelFunc = ButtonFrame(Container, TName, TDesc, UDim2.new(1, -38))
local ToggleHolder = InsertTheme(Create(_D({117,161,144,156,148}), Button, {
Size = UDim2.new(0, 35, 0, 18),
Position = UDim2.new(1, -10, 0.5),
AnchorPoint = Vector2.new(1, 0.5),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})]
}), _D({130,163,161,158,154,148}))Make(_D({114,158,161,157,148,161}), ToggleHolder, UDim.new(0.5, 0))
local Slider = Create(_D({117,161,144,156,148}), ToggleHolder, {
BackgroundTransparency = 1,
Size = UDim2.new(0.8, 0, 0.8, 0),
Position = UDim2.new(0.5, 0, 0.5, 0),
AnchorPoint = Vector2.new(0.5, 0.5)
})
local Toggle = InsertTheme(Create(_D({117,161,144,156,148}), Slider, {
Size = UDim2.new(0, 12, 0, 12),
Position = UDim2.new(0, 0, 0.5),
AnchorPoint = Vector2.new(0, 0.5),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})]
}), _D({131,151,148,156,148}))Make(_D({114,158,161,157,148,161}), Toggle, UDim.new(0.5, 0))
local WaitClick
local function SetToggle(Val)
if WaitClick then return end
WaitClick, Default = true, Val
SetFlag(Flag, Default)
Funcs:FireCallback(Callback, Default)
if Default then
CreateTween({Toggle, _D({127,158,162,152,163,152,158,157}), UDim2.new(1, 0, 0.5), 0.25})
CreateTween({Toggle, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), 0, 0.25})
CreateTween({Toggle, _D({112,157,146,151,158,161,127,158,152,157,163}), Vector2.new(1, 0.5), 0.25, Wait or false})
else
CreateTween({Toggle, _D({127,158,162,152,163,152,158,157}), UDim2.new(0, 0, 0.5), 0.25})
CreateTween({Toggle, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), 0.8, 0.25})
CreateTween({Toggle, _D({112,157,146,151,158,161,127,158,152,157,163}), Vector2.new(0, 0.5), 0.25, Wait or false})
end
WaitClick = false
end;task.spawn(SetToggle, Default)
Button.Activated:Connect(function()
SetToggle(not Default)
end)
local Toggle = {}
function Toggle:Visible(...) Funcs:ToggleVisible(Button, ...) end
function Toggle:Destroy() Button:Destroy() end
function Toggle:Callback(...) Funcs:InsertCallback(Callback, ...)() end
function Toggle:Set(Val1, Val2)
if type(Val1) == _D({162,163,161,152,157,150}) and type(Val2) == _D({162,163,161,152,157,150}) then
LabelFunc:SetTitle(Val1)
LabelFunc:SetDesc(Val2)
elseif type(Val1) == _D({162,163,161,152,157,150}) then
LabelFunc:SetTitle(Val1, false, true)
elseif type(Val1) == _D({145,158,158,155,148,144,157}) then
if WaitClick and Val2 then
repeat task.wait() until not WaitClick
end
task.spawn(SetToggle, Val1)
elseif type(Val1) == _D({149,164,157,146,163,152,158,157}) then
Callback = Val1
end
end
return Toggle
end
function Tab:AddDropdown(Configs)
local DName = Configs[1] or Configs.Name or Configs.Title or _D({115,161,158,159,147,158,166,157})
local DDesc = Configs.Desc or Configs.Description or _D({})
local DOptions = Configs[2] or Configs.Options or {}
local OpDefault = Configs[3] or Configs.Default or {}
local Flag = Configs[5] or Configs.Flag or false
local DMultiSelect = Configs.MultiSelect or false
local Callback = Funcs:GetCallback(Configs, 4)
local Button, LabelFunc = ButtonFrame(Container, DName, DDesc, UDim2.new(1, -180))
local SelectedFrame = InsertTheme(Create(_D({117,161,144,156,148}), Button, {
Size = UDim2.new(0, 150, 0, 18),
Position = UDim2.new(1, -10, 0.5),
AnchorPoint = Vector2.new(1, 0.5),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})]
}), _D({130,163,161,158,154,148}))Make(_D({114,158,161,157,148,161}), SelectedFrame, UDim.new(0, 4))
local ActiveLabel = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), SelectedFrame, {
Size = UDim2.new(0.85, 0, 0.85, 0),
AnchorPoint = Vector2.new(0.5, 0.5),
Position = UDim2.new(0.5, 0, 0.5, 0),
BackgroundTransparency = 1,
Font = Enum.Font.GothamBold,
TextScaled = true,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
Text = _D({93,93,93})
}), _D({131,148,167,163}))
local Arrow = Create(_D({120,156,144,150,148,123,144,145,148,155}), SelectedFrame, {
Size = UDim2.new(0, 15, 0, 15),
Position = UDim2.new(0, -5, 0.5),
AnchorPoint = Vector2.new(1, 0.5),
Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,95,104,102,104,96,100,97,98}),
BackgroundTransparency = 1
})
local NoClickFrame = Create(_D({131,148,167,163,113,164,163,163,158,157}), DropdownHolder, {
Name = _D({112,157,163,152,114,155,152,146,154}),
Size = UDim2.new(1, 0, 1, 0),
BackgroundTransparency = 1,
Visible = false,
Text = _D({})
})
local DropFrame = Create(_D({117,161,144,156,148}), NoClickFrame, {
Size = UDim2.new(SelectedFrame.Size.X, 0, 0),
BackgroundTransparency = 0.1,
BackgroundColor3 = Color3.fromRGB(255, 255, 255),
AnchorPoint = Vector2.new(0, 1),
Name = _D({115,161,158,159,147,158,166,157,117,161,144,156,148}),
ClipsDescendants = true,
Active = true
})Make(_D({114,158,161,157,148,161}), DropFrame)Make(_D({130,163,161,158,154,148}), DropFrame)Make(_D({118,161,144,147,152,148,157,163}), DropFrame, {Rotation = 60})
local ScrollFrame = InsertTheme(Create(_D({130,146,161,158,155,155,152,157,150,117,161,144,156,148}), DropFrame, {
ScrollBarImageColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
Size = UDim2.new(1, 0, 1, 0),
ScrollBarThickness = 1.5,
BackgroundTransparency = 1,
BorderSizePixel = 0,
CanvasSize = UDim2.new(),
ScrollingDirection = _D({136}),
AutomaticCanvasSize = _D({136}),
Active = true
}, {
Create(_D({132,120,127,144,147,147,152,157,150}), {
PaddingLeft = UDim.new(0, 8),
PaddingRight = UDim.new(0, 8),
PaddingTop = UDim.new(0, 5),
PaddingBottom = UDim.new(0, 5)
}), Create(_D({132,120,123,152,162,163,123,144,168,158,164,163}), {
Padding = UDim.new(0, 4)
})
}), _D({130,146,161,158,155,155,113,144,161}))
local ScrollSize, WaitClick = 5
local function Disable()
WaitClick = true
CreateTween({Arrow, _D({129,158,163,144,163,152,158,157}), 0, 0.2})
CreateTween({DropFrame, _D({130,152,169,148}), UDim2.new(0, 152, 0, 0), 0.2, true})
CreateTween({Arrow, _D({120,156,144,150,148,114,158,155,158,161,98}), Color3.fromRGB(255, 255, 255), 0.2})
Arrow.Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,95,104,102,104,96,100,97,98})
NoClickFrame.Visible = false
WaitClick = false
end
local function GetFrameSize()
return UDim2.fromOffset(152, ScrollSize)
end
local function CalculateSize()
local Count = 0
for _,Frame in pairs(ScrollFrame:GetChildren()) do
if Frame:IsA(_D({117,161,144,156,148})) or Frame.Name == _D({126,159,163,152,158,157}) then
Count = Count + 1
end
end
ScrollSize = (math.clamp(Count, 0, 10) * 25) + 10
if NoClickFrame.Visible then
NoClickFrame.Visible = true
CreateTween({DropFrame, _D({130,152,169,148}), GetFrameSize(), 0.2, true})
end
end
local function Minimize()
if WaitClick then return end
WaitClick = true
if NoClickFrame.Visible then
Arrow.Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,95,104,102,104,96,100,97,98})
CreateTween({Arrow, _D({120,156,144,150,148,114,158,155,158,161,98}), Color3.fromRGB(255, 255, 255), 0.2})
CreateTween({DropFrame, _D({130,152,169,148}), UDim2.new(0, 152, 0, 0), 0.2, true})
NoClickFrame.Visible = false
else
NoClickFrame.Visible = true
Arrow.Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,95,104,102,104,95,104,99,103})
CreateTween({Arrow, _D({120,156,144,150,148,114,158,155,158,161,98}), Theme[_D({114,158,155,158,161,79,131,151,148,156,148})], 0.2})
CreateTween({DropFrame, _D({130,152,169,148}), GetFrameSize(), 0.2, true})
end
WaitClick = false
end
local function CalculatePos()
local FramePos = SelectedFrame.AbsolutePosition
local ScreenSize = ScreenGui.AbsoluteSize
local ClampX = math.clamp((FramePos.X / UIScale), 0, ScreenSize.X / UIScale - DropFrame.Size.X.Offset)
local ClampY = math.clamp((FramePos.Y / UIScale) , 0, ScreenSize.Y / UIScale)
local NewPos = UDim2.fromOffset(ClampX, ClampY)
local AnchorPoint = FramePos.Y > ScreenSize.Y / 1.4 and 1 or ScrollSize > 80 and 0.5 or 0
DropFrame.AnchorPoint = Vector2.new(0, AnchorPoint)
CreateTween({DropFrame, _D({127,158,162,152,163,152,158,157}), NewPos, 0.1})
end
local AddNewOptions, GetOptions, AddOption, RemoveOption, Selected do
local Default = type(OpDefault) ~= _D({163,144,145,155,148}) and {OpDefault} or OpDefault
local MultiSelect = DMultiSelect
local Options = {}
Selected = MultiSelect and {} or CheckFlag(Flag) and GetFlag(Flag) or Default[1]
if MultiSelect then
for index, Value in pairs(CheckFlag(Flag) and GetFlag(Flag) or Default) do
if type(index) == _D({162,163,161,152,157,150}) and (DOptions[index] or table.find(DOptions, index)) then
Selected[index] = Value
elseif DOptions[Value] then
Selected[Value] = true
end
end
end
local function CallbackSelected()
SetFlag(Flag, MultiSelect and Selected or tostring(Selected))
Funcs:FireCallback(Callback, Selected)
end
local function UpdateLabel()
if MultiSelect then
local list = {}
for index, Value in pairs(Selected) do
if Value then
table.insert(list, index)
end
end
ActiveLabel.Text = #list > 0 and table.concat(list, _D({91,79})) or _D({93,93,93})
else
ActiveLabel.Text = tostring(Selected or _D({93,93,93}))
end
end
local function UpdateSelected()
if MultiSelect then
for _,v in pairs(Options) do
local nodes, Stats = v.nodes, v.Stats
CreateTween({nodes[2], _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), Stats and 0 or 0.8, 0.35})
CreateTween({nodes[2], _D({130,152,169,148}), Stats and UDim2.fromOffset(4, 12) or UDim2.fromOffset(4, 4), 0.35})
CreateTween({nodes[3], _D({131,148,167,163,131,161,144,157,162,159,144,161,148,157,146,168}), Stats and 0 or 0.4, 0.35})
end
else
for _,v in pairs(Options) do
local Slt = v.Value == Selected
local nodes = v.nodes
CreateTween({nodes[2], _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), Slt and 0 or 1, 0.35})
CreateTween({nodes[2], _D({130,152,169,148}), Slt and UDim2.fromOffset(4, 14) or UDim2.fromOffset(4, 4), 0.35})
CreateTween({nodes[3], _D({131,148,167,163,131,161,144,157,162,159,144,161,148,157,146,168}), Slt and 0 or 0.4, 0.35})
end
end
UpdateLabel()
end
local function Select(Option)
if MultiSelect then
Option.Stats = not Option.Stats
Option.LastCB = tick()
Selected[Option.Name] = Option.Stats
CallbackSelected()
else
Option.LastCB = tick()
Selected = Option.Value
CallbackSelected()
end
UpdateSelected()
end
AddOption = function(index, Value)
local Name = tostring(type(index) == _D({162,163,161,152,157,150}) and index or Value)
if Options[Name] then return end
Options[Name] = {
index = index,
Value = Value,
Name = Name,
Stats = false,
LastCB = 0
}
if MultiSelect then
local Stats = Selected[Name]
Selected[Name] = Stats or false
Options[Name].Stats = Stats
end
local Button = Make(_D({113,164,163,163,158,157}), ScrollFrame, {
Name = _D({126,159,163,152,158,157}),
Size = UDim2.new(1, 0, 0, 21),
Position = UDim2.new(0, 0, 0.5),
AnchorPoint = Vector2.new(0, 0.5)
})Make(_D({114,158,161,157,148,161}), Button, UDim.new(0, 4))
local IsSelected = InsertTheme(Create(_D({117,161,144,156,148}), Button, {
Position = UDim2.new(0, 1, 0.5),
Size = UDim2.new(0, 4, 0, 4),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
BackgroundTransparency = 1,
AnchorPoint = Vector2.new(0, 0.5)
}), _D({131,151,148,156,148}))Make(_D({114,158,161,157,148,161}), IsSelected, UDim.new(0.5, 0))
local OptioneName = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), Button, {
Size = UDim2.new(1, 0, 1),
Position = UDim2.new(0, 10),
Text = Name,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
Font = Enum.Font.FredokaOne,
TextXAlignment = _D({123,148,149,163}),
BackgroundTransparency = 1,
TextTransparency = 0.4
}), _D({131,148,167,163}))
Button.Activated:Connect(function()
Select(Options[Name])
end)
Options[Name].nodes = {Button, IsSelected, OptioneName}
end
RemoveOption = function(index, Value)
local Name = tostring(type(index) == _D({162,163,161,152,157,150}) and index or Value)
if Options[Name] then
if MultiSelect then Selected[Name] = nil else Selected = nil end
Options[Name].nodes[1]:Destroy()
table.clear(Options[Name])
Options[Name] = nil
end
end
GetOptions = function()
return Options
end
AddNewOptions = function(List, Clear)
if Clear then
table.foreach(Options, RemoveOption)
end
table.foreach(List, AddOption)
CallbackSelected()
UpdateSelected()
end
table.foreach(DOptions, AddOption)
CallbackSelected()
UpdateSelected()
end
Button.Activated:Connect(Minimize)
NoClickFrame.MouseButton1Down:Connect(Disable)
NoClickFrame.MouseButton1Click:Connect(Disable)
MainFrame:GetPropertyChangedSignal(_D({133,152,162,152,145,155,148})):Connect(Disable)
SelectedFrame:GetPropertyChangedSignal(_D({112,145,162,158,155,164,163,148,127,158,162,152,163,152,158,157})):Connect(CalculatePos)
Button.Activated:Connect(CalculateSize)
ScrollFrame.ChildAdded:Connect(CalculateSize)
ScrollFrame.ChildRemoved:Connect(CalculateSize)
CalculatePos()
CalculateSize()
local Dropdown = {}
function Dropdown:Visible(...) Funcs:ToggleVisible(Button, ...) end
function Dropdown:Destroy() Button:Destroy() end
function Dropdown:Callback(...) Funcs:InsertCallback(Callback, ...)(Selected) end
function Dropdown:Add(...)
local NewOptions = {...}
if type(NewOptions[1]) == _D({163,144,145,155,148}) then
table.foreach(Option, function(_,Name)
AddOption(Name)
end)
else
table.foreach(NewOptions, function(_,Name)
AddOption(Name)
end)
end
end
function Dropdown:Remove(Option)
for index, Value in pairs(GetOptions()) do
if type(Option) == _D({157,164,156,145,148,161}) and index == Option or Value.Name == _D({126,159,163,152,158,157}) then
RemoveOption(index, Value.Value)
end
end
end
function Dropdown:Select(Option)
if type(Option) == _D({162,163,161,152,157,150}) then
for _,Val in pairs(Options) do
if Val.Name == Option then
Val.Active()
end
end
elseif type(Option) == _D({157,164,156,145,148,161}) then
for ind,Val in pairs(Options) do
if ind == Option then
Val.Active()
end
end
end
end
function Dropdown:Set(Val1, Clear)
if type(Val1) == _D({163,144,145,155,148}) then
AddNewOptions(Val1, not Clear)
elseif type(Val1) == _D({149,164,157,146,163,152,158,157}) then
Callback = Val1
end
end
return Dropdown
end
function Tab:AddColorPicker(Configs)
local CPName = Configs[1] or Configs.Name or Configs.Title or _D({114,158,155,158,161,79,127,152,146,154,148,161})
local CPDesc = Configs.Desc or Configs.Description or _D({})
local Callback = Funcs:GetCallback(Configs, 3)
local Flag = Configs[4] or Configs.Flag or false
local Default = Configs[2] or Configs.Default or Color3.fromRGB(57, 255, 106)
if CheckFlag(Flag) then Default = GetFlag(Flag) end
local Button, LabelFunc = ButtonFrame(Container, CPName, CPDesc, UDim2.new(1, -60))
local Swatch = Create(_D({117,161,144,156,148}), Button, {
Size = UDim2.new(0, 38, 0, 18),
Position = UDim2.new(1, -10, 0.5),
AnchorPoint = Vector2.new(1, 0.5),
BackgroundTransparency = 1
})Make(_D({114,158,161,157,148,161}), Swatch, UDim.new(0, 5))
InsertTheme(Create(_D({132,120,130,163,161,158,154,148}), Swatch, {
Thickness = 1,
ApplyStrokeMode = _D({113,158,161,147,148,161})
}), _D({130,163,161,158,154,148}))
local SwatchFill = Create(_D({117,161,144,156,148}), Swatch, {
Size = UDim2.new(1, -4, 1, -4),
Position = UDim2.fromScale(0.5, 0.5),
AnchorPoint = Vector2.new(0.5, 0.5),
BackgroundColor3 = Default,
BorderSizePixel = 0
})Make(_D({114,158,161,157,148,161}), SwatchFill, UDim.new(0, 4))
local SwatchButton = Create(_D({131,148,167,163,113,164,163,163,158,157}), Swatch, {
Size = UDim2.fromScale(1, 1),
BackgroundTransparency = 1,
Text = _D({}),
AutoButtonColor = false
})
local NoClickFrame = Create(_D({131,148,167,163,113,164,163,163,158,157}), DropdownHolder, {
Name = _D({112,157,163,152,114,155,152,146,154}),
Size = UDim2.new(1, 0, 1, 0),
BackgroundTransparency = 1,
Visible = false,
Text = _D({})
})
local PickerFrame = Create(_D({117,161,144,156,148}), NoClickFrame, {
Size = UDim2.new(0, 190, 0, 0),
BackgroundTransparency = 0.08,
BackgroundColor3 = Color3.fromRGB(255, 255, 255),
AnchorPoint = Vector2.new(0, 1),
Name = _D({114,158,155,158,161,127,152,146,154,148,161,117,161,144,156,148}),
ClipsDescendants = true,
Active = true
})Make(_D({114,158,161,157,148,161}), PickerFrame)Make(_D({130,163,161,158,154,148}), PickerFrame)Make(_D({118,161,144,147,152,148,157,163}), PickerFrame, {Rotation = 60})
local Inner = Create(_D({117,161,144,156,148}), PickerFrame, {
Size = UDim2.new(1, -16, 1, -16),
Position = UDim2.new(0.5, 0, 0, 8),
AnchorPoint = Vector2.new(0.5, 0)
}, {
Create(_D({132,120,123,152,162,163,123,144,168,158,164,163}), {
SortOrder = _D({123,144,168,158,164,163,126,161,147,148,161}),
Padding = UDim.new(0, 8)
})
})
local PreviewRow = Create(_D({117,161,144,156,148}), Inner, {
Size = UDim2.new(1, 0, 0, 26),
BackgroundTransparency = 1,
LayoutOrder = 1
})
local PreviewSwatch = Create(_D({117,161,144,156,148}), PreviewRow, {
Size = UDim2.new(0, 26, 0, 26),
BackgroundColor3 = Default,
BorderSizePixel = 0
})Make(_D({114,158,161,157,148,161}), PreviewSwatch, UDim.new(0, 6))
Create(_D({132,120,130,163,161,158,154,148}), PreviewSwatch, {
Color = Color3.fromRGB(255, 255, 255),
Thickness = 1,
Transparency = 0.4,
ApplyStrokeMode = _D({113,158,161,147,148,161})
})
local HexBox = InsertTheme(Create(_D({131,148,167,163,113,158,167}), PreviewRow, {
Size = UDim2.new(1, -34, 1, 0),
Position = UDim2.new(0, 34, 0, 0),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})],
Font = Enum.Font.GothamBold,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
TextScaled = true,
ClearTextOnFocus = false,
Text = ColorToHex(Default)
}), _D({130,163,161,158,154,148}))Make(_D({114,158,161,157,148,161}), HexBox, UDim.new(0, 6))
local SVPlane = Create(_D({131,148,167,163,113,164,163,163,158,157}), Inner, {
Size = UDim2.new(1, 0, 0, 100),
BackgroundColor3 = Color3.fromRGB(255, 0, 0),
AutoButtonColor = false,
Text = _D({}),
LayoutOrder = 2,
ClipsDescendants = true
})Make(_D({114,158,161,157,148,161}), SVPlane, UDim.new(0, 6))
Create(_D({117,161,144,156,148}), SVPlane, {
Size = UDim2.fromScale(1, 1),
BackgroundColor3 = Color3.fromRGB(255, 255, 255),
BorderSizePixel = 0
}, {
Create(_D({132,120,118,161,144,147,152,148,157,163}), {
Transparency = NumberSequence.new({
NumberSequenceKeypoint.new(0, 0),
NumberSequenceKeypoint.new(1, 1)
})
})
})
Create(_D({117,161,144,156,148}), SVPlane, {
Size = UDim2.fromScale(1, 1),
BackgroundColor3 = Color3.fromRGB(0, 0, 0),
BorderSizePixel = 0
}, {
Create(_D({132,120,118,161,144,147,152,148,157,163}), {
Rotation = 90,
Transparency = NumberSequence.new({
NumberSequenceKeypoint.new(0, 1),
NumberSequenceKeypoint.new(1, 0)
})
})
})
local SVCursor = Create(_D({117,161,144,156,148}), SVPlane, {
Size = UDim2.fromOffset(10, 10),
AnchorPoint = Vector2.new(0.5, 0.5),
BackgroundColor3 = Color3.fromRGB(255, 255, 255),
BorderSizePixel = 0,
ZIndex = 5
})Make(_D({114,158,161,157,148,161}), SVCursor, UDim.new(0.5, 0))
Create(_D({132,120,130,163,161,158,154,148}), SVCursor, {
Color = Color3.fromRGB(20, 20, 20),
Thickness = 1.5,
ApplyStrokeMode = _D({113,158,161,147,148,161})
})
local HueStrip = Create(_D({131,148,167,163,113,164,163,163,158,157}), Inner, {
Size = UDim2.new(1, 0, 0, 16),
AutoButtonColor = false,
Text = _D({}),
LayoutOrder = 3,
BackgroundColor3 = Color3.fromRGB(255, 255, 255)
}, {
Create(_D({132,120,118,161,144,147,152,148,157,163}), {
Color = ColorSequence.new({
ColorSequenceKeypoint.new(0.000, Color3.fromRGB(255, 0, 0)),
ColorSequenceKeypoint.new(0.167, Color3.fromRGB(255, 255, 0)),
ColorSequenceKeypoint.new(0.333, Color3.fromRGB(0, 255, 0)),
ColorSequenceKeypoint.new(0.500, Color3.fromRGB(0, 255, 255)),
ColorSequenceKeypoint.new(0.667, Color3.fromRGB(0, 0, 255)),
ColorSequenceKeypoint.new(0.833, Color3.fromRGB(255, 0, 255)),
ColorSequenceKeypoint.new(1.000, Color3.fromRGB(255, 0, 0))
})
})
})Make(_D({114,158,161,157,148,161}), HueStrip, UDim.new(0, 6))
local HueCursor = Create(_D({117,161,144,156,148}), HueStrip, {
Size = UDim2.new(0, 4, 1, 4),
Position = UDim2.new(0, 0, 0.5, 0),
AnchorPoint = Vector2.new(0.5, 0.5),
BackgroundColor3 = Color3.fromRGB(255, 255, 255),
BorderSizePixel = 0,
ZIndex = 5
})Make(_D({114,158,161,157,148,161}), HueCursor, UDim.new(0, 2))
Create(_D({132,120,130,163,161,158,154,148}), HueCursor, {
Color = Color3.fromRGB(20, 20, 20),
Thickness = 1.25,
ApplyStrokeMode = _D({113,158,161,147,148,161})
})
local PresetHolder = Create(_D({117,161,144,156,148}), Inner, {
Size = UDim2.new(1, 0, 0, 44),
BackgroundTransparency = 1,
LayoutOrder = 4
}, {
Create(_D({132,120,118,161,152,147,123,144,168,158,164,163}), {
CellSize = UDim2.fromOffset(18, 18),
CellPadding = UDim2.fromOffset(4, 4),
SortOrder = _D({123,144,168,158,164,163,126,161,147,148,161})
})
})
local Presets = {
Color3.fromRGB(255, 255, 255), Color3.fromRGB(0, 0, 0), Color3.fromRGB(120, 120, 120),
Color3.fromRGB(255, 0, 0), Color3.fromRGB(255, 128, 0), Color3.fromRGB(255, 220, 0),
Color3.fromRGB(60, 255, 90), Color3.fromRGB(57, 255, 106), Color3.fromRGB(0, 200, 120),
Color3.fromRGB(0, 255, 242), Color3.fromRGB(0, 140, 255), Color3.fromRGB(60, 90, 255),
Color3.fromRGB(140, 60, 255), Color3.fromRGB(200, 0, 255), Color3.fromRGB(255, 0, 200),
Color3.fromRGB(255, 0, 120), Color3.fromRGB(150, 90, 40), Color3.fromRGB(255, 180, 200)
}
local currentHue, currentSat, currentVal = Default:ToHSV()
local function UpdateVisual(Color)
SwatchFill.BackgroundColor3 = Color
PreviewSwatch.BackgroundColor3 = Color
HexBox.Text = ColorToHex(Color)
end
local function ApplyColor(FireCallback)
local Color = Color3.fromHSV(currentHue, currentSat, currentVal)
UpdateVisual(Color)
SVPlane.BackgroundColor3 = Color3.fromHSV(currentHue, 1, 1)
SetFlag(Flag, Color)
if FireCallback ~= false then
Funcs:FireCallback(Callback, Color)
end
return Color
end
local function SetCursorsFromHSV()
SVCursor.Position = UDim2.new(currentSat, 0, 1 - currentVal, 0)
HueCursor.Position = UDim2.new(currentHue, 0, 0.5, 0)
end
local function ControlSV()
local Mouse = Player:GetMouse()
local RelX = (Mouse.X - SVPlane.AbsolutePosition.X) / SVPlane.AbsoluteSize.X
local RelY = (Mouse.Y - SVPlane.AbsolutePosition.Y) / SVPlane.AbsoluteSize.Y
currentSat = math.clamp(RelX, 0, 1)
currentVal = 1 - math.clamp(RelY, 0, 1)
SVCursor.Position = UDim2.new(currentSat, 0, 1 - currentVal, 0)
ApplyColor()
end
local function ControlHue()
local Mouse = Player:GetMouse()
local RelX = (Mouse.X - HueStrip.AbsolutePosition.X) / HueStrip.AbsoluteSize.X
currentHue = math.clamp(RelX, 0, 1)
HueCursor.Position = UDim2.new(currentHue, 0, 0.5, 0)
ApplyColor()
end
SVPlane.MouseButton1Down:Connect(function()
Container.ScrollingEnabled = false
ControlSV()
while UserInputService:IsMouseButtonPressed(Enum.UserInputType.MouseButton1) do
task.wait()
ControlSV()
end
Container.ScrollingEnabled = true
end)
HueStrip.MouseButton1Down:Connect(function()
Container.ScrollingEnabled = false
ControlHue()
while UserInputService:IsMouseButtonPressed(Enum.UserInputType.MouseButton1) do
task.wait()
ControlHue()
end
Container.ScrollingEnabled = true
end)
HexBox.FocusLost:Connect(function()
local Parsed = HexToColor(HexBox.Text)
if Parsed then
currentHue, currentSat, currentVal = Parsed:ToHSV()
SetCursorsFromHSV()
ApplyColor()
else
HexBox.Text = ColorToHex(Color3.fromHSV(currentHue, currentSat, currentVal))
end
end)
for i, PresetColor in ipairs(Presets) do
local Swatch2 = Create(_D({131,148,167,163,113,164,163,163,158,157}), PresetHolder, {
BackgroundColor3 = PresetColor,
AutoButtonColor = false,
Text = _D({}),
LayoutOrder = i,
Size = UDim2.fromOffset(18, 18)
})Make(_D({114,158,161,157,148,161}), Swatch2, UDim.new(0, 4))
Create(_D({132,120,130,163,161,158,154,148}), Swatch2, {
Color = Color3.fromRGB(255, 255, 255),
Thickness = 1,
Transparency = 0.5,
ApplyStrokeMode = _D({113,158,161,147,148,161})
})
Swatch2.MouseEnter:Connect(function()
CreateTween({Swatch2, _D({130,152,169,148}), UDim2.fromOffset(21, 21), 0.12})
end)
Swatch2.MouseLeave:Connect(function()
CreateTween({Swatch2, _D({130,152,169,148}), UDim2.fromOffset(18, 18), 0.12})
end)
Swatch2.Activated:Connect(function()
currentHue, currentSat, currentVal = PresetColor:ToHSV()
SetCursorsFromHSV()
ApplyColor()
end)
end
local WaitClick
local function CalculatePos()
local FramePos = Swatch.AbsolutePosition
local ScreenSize = ScreenGui.AbsoluteSize
local ClampX = math.clamp((FramePos.X / UIScale), 0, ScreenSize.X / UIScale - PickerFrame.Size.X.Offset)
local ClampY = math.clamp((FramePos.Y / UIScale), 0, ScreenSize.Y / UIScale)
local NewPos = UDim2.fromOffset(ClampX, ClampY)
local AnchorPoint = FramePos.Y > ScreenSize.Y / 1.4 and 1 or 0
PickerFrame.AnchorPoint = Vector2.new(0, AnchorPoint)
CreateTween({PickerFrame, _D({127,158,162,152,163,152,158,157}), NewPos, 0.1})
end
local function Close()
if WaitClick then return end
WaitClick = true
CreateTween({PickerFrame, _D({130,152,169,148}), UDim2.new(0, 190, 0, 0), 0.22, true})
NoClickFrame.Visible = false
WaitClick = false
end
local function Open()
if WaitClick then return end
WaitClick = true
CalculatePos()
NoClickFrame.Visible = true
local OpenTween = TweenService:Create(PickerFrame, TweenInfo.new(0.4, Enum.EasingStyle.Back, Enum.EasingDirection.Out), {Size = UDim2.new(0, 190, 0, 235)})
OpenTween:Play()
WaitClick = false
end
SwatchButton.Activated:Connect(function()
if NoClickFrame.Visible then
Close()
else
Open()
end
end)
NoClickFrame.MouseButton1Down:Connect(Close)
NoClickFrame.MouseButton1Click:Connect(Close)
MainFrame:GetPropertyChangedSignal(_D({133,152,162,152,145,155,148})):Connect(Close)
Swatch:GetPropertyChangedSignal(_D({112,145,162,158,155,164,163,148,127,158,162,152,163,152,158,157})):Connect(CalculatePos)
SetCursorsFromHSV()
ApplyColor(false)
local ColorPicker = {}
function ColorPicker:Visible(...) Funcs:ToggleVisible(Button, ...) end
function ColorPicker:Destroy() Button:Destroy() end
function ColorPicker:Callback(...) Funcs:InsertCallback(Callback, ...)(Color3.fromHSV(currentHue, currentSat, currentVal)) end
function ColorPicker:Set(NewColor)
if typeof(NewColor) == _D({114,158,155,158,161,98}) then
currentHue, currentSat, currentVal = NewColor:ToHSV()
SetCursorsFromHSV()
ApplyColor()
end
end
return ColorPicker
end
function Tab:AddSlider(Configs)
local SName = Configs[1] or Configs.Name or Configs.Title or _D({130,155,152,147,148,161,80})
local SDesc = Configs.Desc or Configs.Description or _D({})
local Min = Configs[2] or Configs.MinValue or Configs.Min or 10
local Max = Configs[3] or Configs.MaxValue or Configs.Max or 100
local Increase = Configs[4] or Configs.Increase or 1
local Callback = Funcs:GetCallback(Configs, 6)
local Flag = Configs[7] or Configs.Flag or false
local Default = Configs[5] or Configs.Default or 25
if CheckFlag(Flag) then Default = GetFlag(Flag) end
Min, Max = Min / Increase, Max / Increase
local Button, LabelFunc = ButtonFrame(Container, SName, SDesc, UDim2.new(1, -180))
local SliderHolder = Create(_D({131,148,167,163,113,164,163,163,158,157}), Button, {
Size = UDim2.new(0.45, 0, 1),
Position = UDim2.new(1),
AnchorPoint = Vector2.new(1, 0),
AutoButtonColor = false,
Text = _D({}),
BackgroundTransparency = 1
})
local SliderBar = InsertTheme(Create(_D({117,161,144,156,148}), SliderHolder, {
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})],
Size = UDim2.new(1, -20, 0, 6),
Position = UDim2.new(0.5, 0, 0.5),
AnchorPoint = Vector2.new(0.5, 0.5)
}), _D({130,163,161,158,154,148}))Make(_D({114,158,161,157,148,161}), SliderBar)
local Indicator = InsertTheme(Create(_D({117,161,144,156,148}), SliderBar, {
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
Size = UDim2.fromScale(0.3, 1),
BorderSizePixel = 0
}), _D({131,151,148,156,148}))Make(_D({114,158,161,157,148,161}), Indicator)
local SliderIcon = Create(_D({117,161,144,156,148}), SliderBar, {
Size = UDim2.new(0, 6, 0, 12),
BackgroundColor3 = Color3.fromRGB(220, 220, 220),
Position = UDim2.fromScale(0.3, 0.5),
AnchorPoint = Vector2.new(0.5, 0.5),
BackgroundTransparency = 0.2
})Make(_D({114,158,161,157,148,161}), SliderIcon)
local LabelVal = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), SliderHolder, {
Size = UDim2.new(0, 14, 0, 14),
AnchorPoint = Vector2.new(1, 0.5),
Position = UDim2.new(0, 0, 0.5),
BackgroundTransparency = 1,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
Font = Enum.Font.FredokaOne,
TextSize = 12
}), _D({131,148,167,163}))
local UIScale = Create(_D({132,120,130,146,144,155,148}), LabelVal)
local BaseMousePos = Create(_D({117,161,144,156,148}), SliderBar, {
Position = UDim2.new(0, 0, 0.5, 0),
Visible = false
})
local function UpdateLabel(NewValue)
local Number = tonumber(NewValue * Increase)
Number = math.floor(Number * 100) / 100
Default, LabelVal.Text = Number, tostring(Number)
Funcs:FireCallback(Callback, Default)
end
local function ControlPos()
local MousePos = Player:GetMouse()
local APos = MousePos.X - BaseMousePos.AbsolutePosition.X
local ConfigureDpiPos = APos / SliderBar.AbsoluteSize.X
SliderIcon.Position = UDim2.new(math.clamp(ConfigureDpiPos, 0, 1), 0, 0.5, 0)
end
local function UpdateValues()
Indicator.Size = UDim2.new(SliderIcon.Position.X.Scale, 0, 1, 0)
local SliderPos = SliderIcon.Position.X.Scale
local NewValue = math.floor(((SliderPos * Max) / Max) * (Max - Min) + Min)
UpdateLabel(NewValue)
end
SliderHolder.MouseButton1Down:Connect(function()
CreateTween({SliderIcon, _D({131,161,144,157,162,159,144,161,148,157,146,168}), 0, 0.3})
Container.ScrollingEnabled = false
while UserInputService:IsMouseButtonPressed(Enum.UserInputType.MouseButton1) do task.wait()
ControlPos()
end
CreateTween({SliderIcon, _D({131,161,144,157,162,159,144,161,148,157,146,168}), 0.2, 0.3})
Container.ScrollingEnabled = true
SetFlag(Flag, Default)
end)
LabelVal:GetPropertyChangedSignal(_D({131,148,167,163})):Connect(function()
UIScale.Scale = 0.3
CreateTween({UIScale, _D({130,146,144,155,148}), 1.2, 0.1})
CreateTween({LabelVal, _D({129,158,163,144,163,152,158,157}), math.random(-1, 1) * 5, 0.15, true})
CreateTween({UIScale, _D({130,146,144,155,148}), 1, 0.2})
CreateTween({LabelVal, _D({129,158,163,144,163,152,158,157}), 0, 0.1})
end)
function SetSlider(NewValue)
if type(NewValue) ~= _D({157,164,156,145,148,161}) then return end
local Min, Max = Min * Increase, Max * Increase
local SliderPos = (NewValue - Min) / (Max - Min)
SetFlag(Flag, NewValue)
CreateTween({ SliderIcon, _D({127,158,162,152,163,152,158,157}), UDim2.fromScale(math.clamp(SliderPos, 0, 1), 0.5), 0.3, true })
end;SetSlider(Default)
SliderIcon:GetPropertyChangedSignal(_D({127,158,162,152,163,152,158,157})):Connect(UpdateValues)UpdateValues()
local Slider = {}
function Slider:Set(NewVal1, NewVal2)
if NewVal1 and NewVal2 then
LabelFunc:SetTitle(NewVal1)
LabelFunc:SetDesc(NewVal2)
elseif type(NewVal1) == _D({162,163,161,152,157,150}) then
LabelFunc:SetTitle(NewVal1)
elseif type(NewVal1) == _D({149,164,157,146,163,152,158,157}) then
Callback = NewVal1
elseif type(NewVal1) == _D({157,164,156,145,148,161}) then
SetSlider(NewVal1)
end
end
function Slider:Callback(...) Funcs:InsertCallback(Callback, ...)(tonumber(Default)) end
function Slider:Visible(...) Funcs:ToggleVisible(Button, ...) end
function Slider:Destroy() Button:Destroy() end
return Slider
end
function Tab:AddTextBox(Configs)
local TName = Configs[1] or Configs.Name or Configs.Title or _D({131,148,167,163,79,113,158,167})
local TDesc = Configs.Desc or Configs.Description or _D({})
local TDefault = Configs[2] or Configs.Default or _D({})
local TPlaceholderText = Configs[5] or Configs.PlaceholderText or _D({120,157,159,164,163})
local TClearText = Configs[3] or Configs.ClearText or false
local Callback = Funcs:GetCallback(Configs, 4)
if type(TDefault) ~= _D({162,163,161,152,157,150}) or TDefault:gsub(_D({79}), _D({})):len() < 1 then
TDefault = false
end
local Button, LabelFunc = ButtonFrame(Container, TName, TDesc, UDim2.new(1, -38))
local SelectedFrame = InsertTheme(Create(_D({117,161,144,156,148}), Button, {
Size = UDim2.new(0, 150, 0, 18),
Position = UDim2.new(1, -10, 0.5),
AnchorPoint = Vector2.new(1, 0.5),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})]
}), _D({130,163,161,158,154,148}))Make(_D({114,158,161,157,148,161}), SelectedFrame, UDim.new(0, 4))
local TextBoxInput = InsertTheme(Create(_D({131,148,167,163,113,158,167}), SelectedFrame, {
Size = UDim2.new(0.85, 0, 0.85, 0),
AnchorPoint = Vector2.new(0.5, 0.5),
Position = UDim2.new(0.5, 0, 0.5, 0),
BackgroundTransparency = 1,
Font = Enum.Font.GothamBold,
TextScaled = true,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
ClearTextOnFocus = TClearText,
PlaceholderText = TPlaceholderText,
Text = _D({})
}), _D({131,148,167,163}))
local Pencil = Create(_D({120,156,144,150,148,123,144,145,148,155}), SelectedFrame, {
Size = UDim2.new(0, 12, 0, 12),
Position = UDim2.new(0, -5, 0.5),
AnchorPoint = Vector2.new(1, 0.5),
Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,100,101,98,102,95,103,96,103,102,104}),
BackgroundTransparency = 1
})
local TextBox = {}
local function Input()
local Text = TextBoxInput.Text
if Text:gsub(_D({79}), _D({})):len() > 0 then
if TextBox.OnChanging then Text = TextBox.OnChanging(Text) or Text end
Funcs:FireCallback(Callback, Text)
TextBoxInput.Text = Text
end
end
TextBoxInput.FocusLost:Connect(Input)Input()
TextBoxInput.FocusLost:Connect(function()
CreateTween({Pencil, _D({120,156,144,150,148,114,158,155,158,161,98}), Color3.fromRGB(255, 255, 255), 0.2})
end)
TextBoxInput.Focused:Connect(function()
CreateTween({Pencil, _D({120,156,144,150,148,114,158,155,158,161,98}), Theme[_D({114,158,155,158,161,79,131,151,148,156,148})], 0.2})
end)
TextBox.OnChanging = false
function TextBox:Visible(...) Funcs:ToggleVisible(Button, ...) end
function TextBox:Destroy() Button:Destroy() end
return TextBox
end
function Tab:AddDiscordInvite(Configs)
local Title = Configs[1] or Configs.Name or Configs.Title or _D({115,152,162,146,158,161,147,79,130,148,161,165,148,161})
local Description = Configs[2] or Configs.Desc or Configs.Description or _D({})
local Logo = Configs[3] or Configs.Icon or Configs.Logo or _D({})
local Invite = Configs[4] or Configs.Invite or Configs.Link or _D({})
local InviteCode = Invite:match(_D({147,152,162,146,158,161,147,84,93,150,150,94,87,138,84,166,84,92,140,90,88})) or Invite:match(_D({147,152,162,146,158,161,147,84,93,146,158,156,94,152,157,165,152,163,148,94,87,138,84,166,84,92,140,90,88})) or Invite
local InviteHolder = Create(_D({117,161,144,156,148}), Container, {
Size = UDim2.new(1, 0, 0, 75),
Name = _D({126,159,163,152,158,157}),
BackgroundTransparency = 1
})
local MainFrame = InsertTheme(Create(_D({117,161,144,156,148}), InviteHolder, {
Size = UDim2.new(1, 0, 1, 0),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,119,164,145,79,97})],
ClipsDescendants = true
}), _D({117,161,144,156,148}))
Make(_D({114,158,161,157,148,161}), MainFrame, UDim.new(0, 8))
Make(_D({130,163,161,158,154,148}), MainFrame)
local ServerIcon = Create(_D({120,156,144,150,148,123,144,145,148,155}), MainFrame, {
Size = UDim2.new(0, 52, 0, 52),
Position = UDim2.new(0, 10, 0.5, 0),
AnchorPoint = Vector2.new(0, 0.5),
Image = Logo,
BackgroundTransparency = (Logo == _D({}) and 0 or 1),
BackgroundColor3 = Color3.fromRGB(88, 101, 242)
})
Make(_D({114,158,161,157,148,161}), ServerIcon, UDim.new(0, 10))
local ContentFrame = Create(_D({117,161,144,156,148}), MainFrame, {
Size = UDim2.new(1, -165, 1, -16),
Position = UDim2.new(0, 72, 0.5, 0),
AnchorPoint = Vector2.new(0, 0.5),
BackgroundTransparency = 1
})
local ServerTitle = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), ContentFrame, {
Size = UDim2.new(1, 0, 0, 16),
Position = UDim2.new(0, 0, 0, 0),
TextXAlignment = _D({123,148,149,163}),
BackgroundTransparency = 1,
TextSize = 13,
Text = Title,
Font = Enum.Font.GothamBold,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
TextTruncate = Enum.TextTruncate.AtEnd
}), _D({131,148,167,163}))
local DescriptionLabel = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), ContentFrame, {
Size = UDim2.new(1, 0, 0, 14),
Position = UDim2.new(0, 0, 0, 18),
TextXAlignment = _D({123,148,149,163}),
BackgroundTransparency = 1,
TextSize = 10,
Text = Description,
Font = Enum.Font.Gotham,
TextColor3 = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})],
TextTruncate = Enum.TextTruncate.AtEnd
}), _D({115,144,161,154,131,148,167,163}))
local StatsFrame = Create(_D({117,161,144,156,148}), ContentFrame, {
Size = UDim2.new(1, 0, 0, 14),
Position = UDim2.new(0, 0, 0, 36),
BackgroundTransparency = 1
})
Create(_D({132,120,123,152,162,163,123,144,168,158,164,163}), StatsFrame, {
FillDirection = Enum.FillDirection.Horizontal,
SortOrder = Enum.SortOrder.LayoutOrder,
Padding = UDim.new(0, 10)
})
local OnlineFrame = Create(_D({117,161,144,156,148}), StatsFrame, {
Size = UDim2.new(0, 0, 1, 0),
AutomaticSize = Enum.AutomaticSize.X,
BackgroundTransparency = 1,
LayoutOrder = 1
})
local OnlineDot = Create(_D({117,161,144,156,148}), OnlineFrame, {
Size = UDim2.new(0, 6, 0, 6),
Position = UDim2.new(0, 0, 0.5, 0),
AnchorPoint = Vector2.new(0, 0.5),
BackgroundColor3 = Color3.fromRGB(67, 181, 129)
})
Make(_D({114,158,161,157,148,161}), OnlineDot, UDim.new(1, 0))
local OnlineText = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), OnlineFrame, {
Size = UDim2.new(0, 0, 1, 0),
Position = UDim2.new(0, 10, 0.5, 0),
AnchorPoint = Vector2.new(0, 0.5),
AutomaticSize = Enum.AutomaticSize.X,
BackgroundTransparency = 1,
TextSize = 10,
Text = _D({95,79,126,157,155,152,157,148}),
Font = Enum.Font.GothamMedium,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})]
}), _D({131,148,167,163}))
local TotalFrame = Create(_D({117,161,144,156,148}), StatsFrame, {
Size = UDim2.new(0, 0, 1, 0),
AutomaticSize = Enum.AutomaticSize.X,
BackgroundTransparency = 1,
LayoutOrder = 2
})
local TotalDot = Create(_D({117,161,144,156,148}), TotalFrame, {
Size = UDim2.new(0, 6, 0, 6),
Position = UDim2.new(0, 0, 0.5, 0),
AnchorPoint = Vector2.new(0, 0.5),
BackgroundColor3 = Color3.fromRGB(180, 180, 180)
})
Make(_D({114,158,161,157,148,161}), TotalDot, UDim.new(1, 0))
local TotalText = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), TotalFrame, {
Size = UDim2.new(0, 0, 1, 0),
Position = UDim2.new(0, 10, 0.5, 0),
AnchorPoint = Vector2.new(0, 0.5),
AutomaticSize = Enum.AutomaticSize.X,
BackgroundTransparency = 1,
TextSize = 10,
Text = _D({95,79,124,148,156,145,148,161,162}),
Font = Enum.Font.GothamMedium,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})]
}), _D({131,148,167,163}))
local JoinButton = InsertTheme(Create(_D({131,148,167,163,113,164,163,163,158,157}), MainFrame, {
Position = UDim2.new(1, -10, 0.5, 0),
Size = UDim2.new(0, 75, 0, 28),
AnchorPoint = Vector2.new(1, 0.5),
Text = _D({121,158,152,157}),
Font = Enum.Font.GothamBold,
TextSize = 11,
BackgroundColor3 = Color3.fromRGB(67, 181, 129),
TextColor3 = Color3.fromRGB(255, 255, 255)
}), _D({131,148,167,163}))
Make(_D({114,158,161,157,148,161}), JoinButton, UDim.new(0, 6))
local HttpService = game:GetService(_D({119,163,163,159,130,148,161,165,152,146,148}))
local isRunning = true
local function UpdateDiscordData()
if not InviteCode or InviteCode == _D({}) then return end
pcall(function()
local req = (syn and syn.request) or (http and http.request) or http_request or request
local responseData
if req then
local res = req({
Url = _D({151,163,163,159,162,105,94,94,147,152,162,146,158,161,147,93,146,158,156,94,144,159,152,94,165,96,95,94,152,157,165,152,163,148,162,94}) .. InviteCode .. _D({110,166,152,163,151,142,146,158,164,157,163,162,108,163,161,164,148}),
Method = _D({118,116,131})
})
if res and res.Body then
responseData = HttpService:JSONDecode(res.Body)
end
elseif game.HttpGet then
local str = game:HttpGet(_D({151,163,163,159,162,105,94,94,147,152,162,146,158,161,147,93,146,158,156,94,144,159,152,94,165,96,95,94,152,157,165,152,163,148,162,94}) .. InviteCode .. _D({110,166,152,163,151,142,146,158,164,157,163,162,108,163,161,164,148}))
if str then
responseData = HttpService:JSONDecode(str)
end
end
if responseData then
if responseData.approximate_presence_count then
OnlineText.Text = tostring(responseData.approximate_presence_count) .. _D({79,126,157,155,152,157,148})
end
if responseData.approximate_member_count then
TotalText.Text = tostring(responseData.approximate_member_count) .. _D({79,124,148,156,145,148,161,162})
end
if responseData.guild and responseData.guild.name and Title == _D({115,152,162,146,158,161,147,79,130,148,161,165,148,161}) then
ServerTitle.Text = responseData.guild.name
end
if responseData.guild and responseData.guild.icon and Logo == _D({}) then
ServerIcon.Image = _D({151,163,163,159,162,105,94,94,146,147,157,93,147,152,162,146,158,161,147,144,159,159,93,146,158,156,94,152,146,158,157,162,94}) .. responseData.guild.id .. _D({94}) .. responseData.guild.icon .. _D({93,159,157,150})
ServerIcon.BackgroundTransparency = 1
end
end
end)
end
task.spawn(function()
while isRunning and InviteHolder and InviteHolder.Parent do
UpdateDiscordData()
task.wait(20)
end
end)
local clickCooldown = 0
JoinButton.Activated:Connect(function()
if tick() - clickCooldown < 3 then return end
clickCooldown = tick()
local originalText = JoinButton.Text
JoinButton.Text = _D({114,158,159,152,148,147,80})
if setclipboard then
setclipboard(Invite)
end
task.wait(2)
if JoinButton and JoinButton.Parent then
JoinButton.Text = originalText
end
end)
local DiscordInvite = {}
function DiscordInvite:Destroy()
isRunning = false
InviteHolder:Destroy()
end
function DiscordInvite:Visible(...)
Funcs:ToggleVisible(InviteHolder, ...)
end
function DiscordInvite:Set(newTitle, newDesc, newInvite)
if newTitle then
ServerTitle.Text = newTitle
end
if newDesc then
DescriptionLabel.Text = newDesc
end
if newInvite then
Invite = newInvite
InviteCode = Invite:match(_D({147,152,162,146,158,161,147,84,93,150,150,94,87,138,84,166,84,92,140,90,88})) or Invite:match(_D({147,152,162,146,158,161,147,84,93,146,158,156,94,152,157,165,152,163,148,94,87,138,84,166,84,92,140,90,88})) or Invite
task.spawn(UpdateDiscordData)
end
end
return DiscordInvite
end
function Tab:AddMiniMap(Configs)
Configs = Configs or {}
local MapTitle   = Configs[1] or Configs.Title or Configs.Name or _D({124,152,157,152,79,124,144,159})
local MapSize    = Configs.Size or 140
local MapZoom    = Configs.Zoom or 0.04
local ShowOthers = Configs.ShowPlayers ~= false
local Holder = Create(_D({117,161,144,156,148}), Container, {
Size = UDim2.new(1, 0, 0, MapSize + 22),
BackgroundTransparency = 1,
Name = _D({126,159,163,152,158,157})
})
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), Holder, {
Size = UDim2.new(1, 0, 0, 14),
Position = UDim2.new(0, 10, 0, 0),
BackgroundTransparency = 1,
Text = MapTitle,
Font = Enum.Font.FredokaOne,
TextSize = 10,
TextXAlignment = _D({123,148,149,163}),
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})]
}), _D({131,148,167,163}))
local MapFrame = InsertTheme(Create(_D({117,161,144,156,148}), Holder, {
Size = UDim2.new(1, 0, 0, MapSize),
Position = UDim2.new(0, 0, 0, 18),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,119,164,145,79,97})],
ClipsDescendants = true
}), _D({117,161,144,156,148}))
Make(_D({114,158,161,157,148,161}), MapFrame)
Make(_D({130,163,161,158,154,148}), MapFrame)
local VP = Create(_D({133,152,148,166,159,158,161,163,117,161,144,156,148}), MapFrame, {
Size = UDim2.new(1, 0, 1, 0),
BackgroundTransparency = 1,
BackgroundColor3 = Color3.fromRGB(0, 0, 0),
LightColor = Color3.fromRGB(255, 255, 255),
Ambient = Color3.fromRGB(180, 180, 180)
})
local VPCam = Instance.new(_D({114,144,156,148,161,144}))
VPCam.CameraType = Enum.CameraType.Scriptable
VPCam.Parent = VP
VP.CurrentCamera = VPCam
local DotsLayer = Create(_D({117,161,144,156,148}), MapFrame, {
Size = UDim2.new(1, 0, 1, 0),
BackgroundTransparency = 1,
ZIndex = 5
})
local LocalDot = Create(_D({117,161,144,156,148}), DotsLayer, {
Size = UDim2.fromOffset(6, 6),
AnchorPoint = Vector2.new(0.5, 0.5),
BackgroundColor3 = Color3.fromRGB(255, 255, 255),
ZIndex = 6
})
Create(_D({132,120,114,158,161,157,148,161}), LocalDot, { CornerRadius = UDim.new(1, 0) })
local PlayerDots = {}
local function GetOrCreateDot(player)
if PlayerDots[player] then return PlayerDots[player] end
local dot = Create(_D({117,161,144,156,148}), DotsLayer, {
Size = UDim2.fromOffset(5, 5),
AnchorPoint = Vector2.new(0.5, 0.5),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
ZIndex = 6
})
Create(_D({132,120,114,158,161,157,148,161}), dot, { CornerRadius = UDim.new(1, 0) })
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), dot, {
Size = UDim2.new(0, 50, 0, 8),
Position = UDim2.new(0.5, 0, 0, -10),
AnchorPoint = Vector2.new(0.5, 1),
BackgroundTransparency = 1,
Text = player.Name,
Font = Enum.Font.Gotham,
TextSize = 7,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
ZIndex = 7
}), _D({131,148,167,163}))
PlayerDots[player] = dot
return dot
end
Players.PlayerRemoving:Connect(function(p)
if PlayerDots[p] then PlayerDots[p]:Destroy() PlayerDots[p] = nil end
end)
local MapConnection = RunService.Heartbeat:Connect(function()
local lp = Players.LocalPlayer
if not lp or not lp.Character then return end
local root = lp.Character:FindFirstChild(_D({119,164,156,144,157,158,152,147,129,158,158,163,127,144,161,163}))
if not root then return end
local pos = root.Position
VPCam.CFrame = CFrame.new(
Vector3.new(pos.X, pos.Y + (1 / MapZoom), pos.Z),
Vector3.new(pos.X, pos.Y, pos.Z)
)
VPCam.FieldOfView = 1 / MapZoom * 10
LocalDot.Position = UDim2.fromScale(0.5, 0.5)
if ShowOthers then
for _, p in ipairs(Players:GetPlayers()) do
if p ~= lp and p.Character then
local r2 = p.Character:FindFirstChild(_D({119,164,156,144,157,158,152,147,129,158,158,163,127,144,161,163}))
if r2 then
local delta = r2.Position - pos
local nx = 0.5 + (delta.X * MapZoom)
local ny = 0.5 + (delta.Z * MapZoom)
local dot = GetOrCreateDot(p)
dot.Position = UDim2.fromScale(math.clamp(nx, 0.02, 0.98), math.clamp(ny, 0.02, 0.98))
dot.Visible = math.abs(nx) <= 1 and math.abs(ny) <= 1
end
end
end
end
end)
for _, c in ipairs({
{t=_D({125}),ax=0.5,ay=0,px=0.5,py=0.02},{t=_D({130}),ax=0.5,ay=1,px=0.5,py=0.98},
{t=_D({134}),ax=0,ay=0.5,px=0.02,py=0.5},{t=_D({116}),ax=1,ay=0.5,px=0.98,py=0.5}
}) do
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), DotsLayer, {
Size = UDim2.fromOffset(10, 10),
AnchorPoint = Vector2.new(c.ax, c.ay),
Position = UDim2.fromScale(c.px, c.py),
BackgroundTransparency = 1,
Text = c.t,
Font = Enum.Font.GothamBold,
TextSize = 7,
TextColor3 = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})],
ZIndex = 7
}), _D({115,144,161,154,131,148,167,163}))
end
local MiniMap = {}
function MiniMap:Visible(...) Funcs:ToggleVisible(Holder, ...) end
function MiniMap:Destroy() MapConnection:Disconnect() Holder:Destroy() end
function MiniMap:SetZoom(z) MapZoom = z end
function MiniMap:TogglePlayers(bool)
ShowOthers = bool
for _, dot in pairs(PlayerDots) do dot.Visible = bool end
end
return MiniMap
end
function Tab:AddFeedback(Configs)
Configs = Configs or {}
local FTitle       = Configs[1] or Configs.Title or Configs.Name or _D({117,148,148,147,145,144,146,154})
local FPlaceholder = Configs.Placeholder or _D({116,162,146,161,148,165,144,79,162,164,144,79,162,164,150,148,162,163,242,210,158,79,158,164,79,146,161,242,220,163,152,146,144,93,93,93})
local FMaxStars    = Configs.Stars or 5
local Callback     = Funcs:GetCallback(Configs, 2)
local Holder = InsertTheme(Create(_D({117,161,144,156,148}), Container, {
Size = UDim2.new(1, 0, 0, 105),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,119,164,145,79,97})],
Name = _D({126,159,163,152,158,157})
}), _D({117,161,144,156,148}))
Make(_D({114,158,161,157,148,161}), Holder)
Make(_D({130,163,161,158,154,148}), Holder)
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), Holder, {
Size = UDim2.new(1, -15, 0, 14),
Position = UDim2.new(0, 10, 0, 7),
BackgroundTransparency = 1,
Text = FTitle,
Font = Enum.Font.FredokaOne,
TextSize = 11,
TextXAlignment = _D({123,148,149,163}),
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})]
}), _D({131,148,167,163}))
local StarRow = Create(_D({117,161,144,156,148}), Holder, {
Size = UDim2.new(0, FMaxStars * 18, 0, 16),
Position = UDim2.new(0, 10, 0, 26),
BackgroundTransparency = 1
})
local currentRating = 0
local StarButtons = {}
local function UpdateStars(n)
currentRating = n
for i, sb in ipairs(StarButtons) do
sb.ImageColor3 = i <= n and Color3.fromRGB(255, 200, 50) or Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})]
end
end
for i = 1, FMaxStars do
local sb = InsertTheme(Create(_D({120,156,144,150,148,113,164,163,163,158,157}), StarRow, {
Size = UDim2.fromOffset(14, 14),
Position = UDim2.fromOffset((i-1)*17, 1),
BackgroundTransparency = 1,
Image = _D({161,145,167,144,162,162,148,163,152,147,105,94,94,96,95,102,97,98,98,102,101,96,96,99}),
ImageColor3 = Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})],
AutoButtonColor = false
}), _D({130,163,161,158,154,148}))
table.insert(StarButtons, sb)
sb.Activated:Connect(function() UpdateStars(i) end)
end
local BoxFrame = InsertTheme(Create(_D({117,161,144,156,148}), Holder, {
Size = UDim2.new(1, -18, 0, 30),
Position = UDim2.new(0, 9, 0, 48),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})]
}), _D({130,163,161,158,154,148}))
Make(_D({114,158,161,157,148,161}), BoxFrame, UDim.new(0, 5))
local InputBox = InsertTheme(Create(_D({131,148,167,163,113,158,167}), BoxFrame, {
Size = UDim2.new(1, -12, 1, 0),
Position = UDim2.new(0, 6, 0, 0),
BackgroundTransparency = 1,
Font = Enum.Font.Gotham,
TextSize = 9,
TextXAlignment = _D({123,148,149,163}),
TextWrapped = true,
ClearTextOnFocus = false,
PlaceholderText = FPlaceholder,
Text = _D({}),
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})]
}), _D({131,148,167,163}))
local SendBtn = InsertTheme(Create(_D({131,148,167,163,113,164,163,163,158,157}), Holder, {
Size = UDim2.new(1, -18, 0, 16),
Position = UDim2.new(0, 9, 0, 84),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
Font = Enum.Font.GothamBold,
TextSize = 9,
Text = _D({116,157,165,152,144,161,79,117,148,148,147,145,144,146,154}),
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
AutoButtonColor = false
}), _D({131,151,148,156,148}))
Make(_D({114,158,161,157,148,161}), SendBtn, UDim.new(0, 5))
SendBtn.MouseEnter:Connect(function() CreateTween({SendBtn, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), 0.3, 0.15}) end)
SendBtn.MouseLeave:Connect(function() CreateTween({SendBtn, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), 0, 0.15}) end)
local Sent = false
SendBtn.Activated:Connect(function()
if Sent then return end
if currentRating == 0 then
SendBtn.Text = _D({130,148,155,148,146,152,158,157,148,79,164,156,144,79,157,158,163,144,80})
task.wait(2)
SendBtn.Text = _D({116,157,165,152,144,161,79,117,148,148,147,145,144,146,154})
return
end
Sent = true
SendBtn.Text = _D({126,145,161,152,150,144,147,158,80,79,17,203,194})
SendBtn.BackgroundColor3 = Color3.fromRGB(67, 181, 129)
Funcs:FireCallback(Callback, currentRating, InputBox.Text)
task.wait(3)
if SendBtn and SendBtn.Parent then
Sent = false
SendBtn.Text = _D({116,157,165,152,144,161,79,117,148,148,147,145,144,146,154})
SendBtn.BackgroundColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})]
end
end)
local Feedback = {}
function Feedback:Visible(...) Funcs:ToggleVisible(Holder, ...) end
function Feedback:Destroy() Holder:Destroy() end
function Feedback:Reset() UpdateStars(0) InputBox.Text = _D({}) Sent = false SendBtn.Text = _D({116,157,165,152,144,161,79,117,148,148,147,145,144,146,154}) end
function Feedback:GetRating() return currentRating end
return Feedback
end
function Tab:AddChangelog(Configs)
Configs = Configs or {}
local CLTitle  = (type(Configs.Title) == _D({162,163,161,152,157,150}) and Configs.Title)
or (type(Configs.Name) == _D({162,163,161,152,157,150}) and Configs.Name)
or (type(Configs[1]) == _D({162,163,161,152,157,150}) and Configs[1])
or _D({114,151,144,157,150,148,155,158,150})
local Versions = (type(Configs[1]) == _D({163,144,145,155,148})) and Configs or Configs.Versions or {}
local BadgeColors = {
new = Color3.fromRGB(88,181,120), fix = Color3.fromRGB(88,150,242),
removed = Color3.fromRGB(220,80,80), change = Color3.fromRGB(220,170,50)
}
local Holder = Create(_D({117,161,144,156,148}), Container, {
Size = UDim2.new(1, 0, 0, 0),
AutomaticSize = _D({136}),
BackgroundTransparency = 1,
Name = _D({126,159,163,152,158,157})
})
local HeaderBtn = InsertTheme(Create(_D({131,148,167,163,113,164,163,163,158,157}), Holder, {
Size = UDim2.new(1, 0, 0, 24),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,119,164,145,79,97})],
Font = Enum.Font.FredokaOne,
Text = _D({79,79,31,206,194,186,79,79}) .. CLTitle,
TextSize = 11,
TextXAlignment = _D({123,148,149,163}),
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
AutoButtonColor = false
}), _D({117,161,144,156,148}))
Make(_D({114,158,161,157,148,161}), HeaderBtn)
Make(_D({130,163,161,158,154,148}), HeaderBtn)
local ArrowLabel = InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), HeaderBtn, {
Size = UDim2.fromOffset(14, 14),
Position = UDim2.new(1, -18, 0.5, 0),
AnchorPoint = Vector2.new(1, 0.5),
BackgroundTransparency = 1,
Text = _D({17,197,237}),
Font = Enum.Font.GothamBold,
TextSize = 12,
TextColor3 = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})]
}), _D({115,144,161,154,131,148,167,163}))
local VersionsContainer = Create(_D({117,161,144,156,148}), Holder, {
Size = UDim2.new(1, 0, 0, 0),
AutomaticSize = _D({136}),
Position = UDim2.new(0, 0, 0, 28),
BackgroundTransparency = 1
})
Create(_D({132,120,123,152,162,163,123,144,168,158,164,163}), VersionsContainer, { Padding = UDim.new(0, 4) })
local Expanded = true
HeaderBtn.Activated:Connect(function()
Expanded = not Expanded
VersionsContainer.Visible = Expanded
ArrowLabel.Text = Expanded and _D({17,197,237}) or _D({17,197,231})
end)
for _, verData in ipairs(Versions) do
local VBlock = InsertTheme(Create(_D({117,161,144,156,148}), VersionsContainer, {
Size = UDim2.new(1, 0, 0, 0),
AutomaticSize = _D({136}),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,119,164,145,79,97})]
}), _D({117,161,144,156,148}))
Make(_D({114,158,161,157,148,161}), VBlock)
Make(_D({130,163,161,158,154,148}), VBlock)
local VHeader = Create(_D({131,148,167,163,113,164,163,163,158,157}), VBlock, {
Size = UDim2.new(1, 0, 0, 22),
BackgroundTransparency = 1,
Text = _D({}),
AutoButtonColor = false
})
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), VHeader, {
Size = UDim2.new(0.6, 0, 1, 0),
Position = UDim2.new(0, 10, 0, 0),
BackgroundTransparency = 1,
Text = _D({165}) .. (verData.Version or _D({110})),
Font = Enum.Font.GothamBold,
TextSize = 10,
TextXAlignment = _D({123,148,149,163}),
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})]
}), _D({131,148,167,163}))
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), VHeader, {
Size = UDim2.new(0.4, -10, 1, 0),
Position = UDim2.new(0.6, 0, 0, 0),
BackgroundTransparency = 1,
Text = verData.Date or _D({}),
Font = Enum.Font.Gotham,
TextSize = 8,
TextXAlignment = _D({129,152,150,151,163}),
TextColor3 = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})]
}), _D({115,144,161,154,131,148,167,163}))
local ChangesList = Create(_D({117,161,144,156,148}), VBlock, {
Size = UDim2.new(1, -16, 0, 0),
AutomaticSize = _D({136}),
Position = UDim2.new(0, 8, 0, 24),
BackgroundTransparency = 1
})
Create(_D({132,120,123,152,162,163,123,144,168,158,164,163}), ChangesList, { Padding = UDim.new(0, 3) })
Create(_D({132,120,127,144,147,147,152,157,150}), ChangesList, { PaddingBottom = UDim.new(0, 6) })
local VExp = true
VHeader.Activated:Connect(function()
VExp = not VExp
ChangesList.Visible = VExp
end)
for _, change in ipairs(verData.Changes or {}) do
local cType  = change[1] or _D({157,148,166})
local cText  = change[2] or _D({})
local bColor = BadgeColors[cType] or BadgeColors.new
local Row = Create(_D({117,161,144,156,148}), ChangesList, {
Size = UDim2.new(1, 0, 0, 0),
AutomaticSize = _D({136}),
BackgroundTransparency = 1
})
local Badge = Create(_D({131,148,167,163,123,144,145,148,155}), Row, {
Size = UDim2.fromOffset(42, 12),
Position = UDim2.new(0, 0, 0, 1),
BackgroundColor3 = bColor,
BackgroundTransparency = 0.2,
Text = cType:upper(),
Font = Enum.Font.GothamBold,
TextSize = 7,
TextColor3 = Color3.fromRGB(255, 255, 255)
})
Make(_D({114,158,161,157,148,161}), Badge, UDim.new(0, 3))
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), Row, {
Size = UDim2.new(1, -50, 0, 0),
AutomaticSize = _D({136}),
Position = UDim2.new(0, 48, 0, 0),
BackgroundTransparency = 1,
Text = cText,
Font = Enum.Font.Gotham,
TextSize = 9,
TextXAlignment = _D({123,148,149,163}),
TextWrapped = true,
TextColor3 = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})]
}), _D({115,144,161,154,131,148,167,163}))
end
end
local Changelog = {}
function Changelog:Visible(...) Funcs:ToggleVisible(Holder, ...) end
function Changelog:Destroy() Holder:Destroy() end
return Changelog
end
function Tab:AddReportBug(Configs)
Configs = Configs or {}
local RBTitle      = Configs[1] or Configs.Title or Configs.Name or _D({129,148,159,158,161,163,144,161,79,113,164,150})
local RBWebhook    = Configs.Webhook or _D({})
local RBCategories = Configs.Categories or {_D({114,161,144,162,151}), _D({133,152,162,164,144,155}), _D({118,144,156,148,159,155,144,168}), _D({126,164,163,161,158})}
local RBSysInfo    = Configs.IncludeSystemInfo ~= false
local Callback     = Configs.Callback or function() end
local Holder = InsertTheme(Create(_D({117,161,144,156,148}), Container, {
Size = UDim2.new(1, 0, 0, 148),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,119,164,145,79,97})],
Name = _D({126,159,163,152,158,157}),
ClipsDescendants = false
}), _D({117,161,144,156,148}))
Make(_D({114,158,161,157,148,161}), Holder)
Make(_D({130,163,161,158,154,148}), Holder)
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), Holder, {
Size = UDim2.new(1, -15, 0, 14),
Position = UDim2.new(0, 10, 0, 7),
BackgroundTransparency = 1,
Text = _D({31,206,191,202,79,79}) .. RBTitle,
Font = Enum.Font.FredokaOne,
TextSize = 11,
TextXAlignment = _D({123,148,149,163}),
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})]
}), _D({131,148,167,163}))
local DescFrame = InsertTheme(Create(_D({117,161,144,156,148}), Holder, {
Size = UDim2.new(1, -18, 0, 38),
Position = UDim2.new(0, 9, 0, 26),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})]
}), _D({130,163,161,158,154,148}))
Make(_D({114,158,161,157,148,161}), DescFrame, UDim.new(0, 5))
local DescBox = InsertTheme(Create(_D({131,148,167,163,113,158,167}), DescFrame, {
Size = UDim2.new(1, -10, 1, 0),
Position = UDim2.new(0, 5, 0, 0),
BackgroundTransparency = 1,
Font = Enum.Font.Gotham,
TextSize = 9,
TextXAlignment = _D({123,148,149,163}),
TextYAlignment = _D({131,158,159}),
TextWrapped = true,
ClearTextOnFocus = false,
PlaceholderText = _D({115,148,162,146,161,148,165,144,79,158,79,145,164,150,79,146,158,156,79,158,79,156,242,208,167,152,156,158,79,147,148,79,147,148,163,144,155,151,148,162,93,93,93}),
Text = _D({}),
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})]
}), _D({131,148,167,163}))
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), Holder, {
Size = UDim2.new(0, 60, 0, 12),
Position = UDim2.new(0, 9, 0, 70),
BackgroundTransparency = 1,
Text = _D({114,144,163,148,150,158,161,152,144,105}),
Font = Enum.Font.GothamBold,
TextSize = 8,
TextXAlignment = _D({123,148,149,163}),
TextColor3 = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})]
}), _D({115,144,161,154,131,148,167,163}))
local CatRow = Create(_D({117,161,144,156,148}), Holder, {
Size = UDim2.new(1, -18, 0, 16),
Position = UDim2.new(0, 9, 0, 84),
BackgroundTransparency = 1
})
Create(_D({132,120,123,152,162,163,123,144,168,158,164,163}), CatRow, {
FillDirection = _D({119,158,161,152,169,158,157,163,144,155}),
Padding = UDim.new(0, 4),
VerticalAlignment = _D({114,148,157,163,148,161})
})
local selectedCategory = RBCategories[1]
local CatBtns = {}
local function SelectCategory(name)
selectedCategory = name
for _, cb in ipairs(CatBtns) do
CreateTween({cb, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), cb.Text == name and 0 or 0.6, 0.15})
end
end
for _, cat in ipairs(RBCategories) do
local cb = InsertTheme(Create(_D({131,148,167,163,113,164,163,163,158,157}), CatRow, {
Size = UDim2.new(0, 0, 1, 0),
AutomaticSize = _D({135}),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
BackgroundTransparency = 0.6,
Font = Enum.Font.GothamBold,
TextSize = 8,
Text = cat,
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
AutoButtonColor = false
}), _D({131,151,148,156,148}))
Make(_D({114,158,161,157,148,161}), cb, UDim.new(0, 4))
Create(_D({132,120,127,144,147,147,152,157,150}), cb, { PaddingLeft = UDim.new(0, 5), PaddingRight = UDim.new(0, 5) })
table.insert(CatBtns, cb)
cb.Activated:Connect(function() SelectCategory(cat) end)
end
SelectCategory(selectedCategory)
local AlwaysRow = Create(_D({117,161,144,156,148}), Holder, {
Size = UDim2.new(1, -18, 0, 12),
Position = UDim2.new(0, 9, 0, 106),
BackgroundTransparency = 1
})
local AlwaysCheck = InsertTheme(Create(_D({117,161,144,156,148}), AlwaysRow, {
Size = UDim2.fromOffset(10, 10),
Position = UDim2.new(0, 0, 0.5, 0),
AnchorPoint = Vector2.new(0, 0.5),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,130,163,161,158,154,148})]
}), _D({130,163,161,158,154,148}))
Make(_D({114,158,161,157,148,161}), AlwaysCheck, UDim.new(0, 3))
Make(_D({130,163,161,158,154,148}), AlwaysCheck)
local AlwaysTick = InsertTheme(Create(_D({117,161,144,156,148}), AlwaysCheck, {
Size = UDim2.fromOffset(6, 6),
Position = UDim2.new(0.5, 0, 0.5, 0),
AnchorPoint = Vector2.new(0.5, 0.5),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
BackgroundTransparency = 1
}), _D({131,151,148,156,148}))
Make(_D({114,158,161,157,148,161}), AlwaysTick, UDim.new(0.5, 0))
InsertTheme(Create(_D({131,148,167,163,123,144,145,148,155}), AlwaysRow, {
Size = UDim2.new(1, -16, 1, 0),
Position = UDim2.new(0, 15, 0, 0),
BackgroundTransparency = 1,
Text = _D({116,162,163,148,79,145,164,150,79,144,146,158,157,163,148,146,148,79,162,148,156,159,161,148,110}),
Font = Enum.Font.Gotham,
TextSize = 8,
TextXAlignment = _D({123,148,149,163}),
TextColor3 = Theme[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})]
}), _D({115,144,161,154,131,148,167,163}))
local alwaysHappens = false
local AlwaysBtn = Create(_D({131,148,167,163,113,164,163,163,158,157}), AlwaysRow, {
Size = UDim2.new(1, 0, 1, 0),
BackgroundTransparency = 1,
Text = _D({})
})
AlwaysBtn.Activated:Connect(function()
alwaysHappens = not alwaysHappens
CreateTween({AlwaysTick, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), alwaysHappens and 0 or 1, 0.15})
end)
local SendBtn = InsertTheme(Create(_D({131,148,167,163,113,164,163,163,158,157}), Holder, {
Size = UDim2.new(1, -18, 0, 16),
Position = UDim2.new(0, 9, 0, 126),
BackgroundColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
Font = Enum.Font.GothamBold,
TextSize = 9,
Text = _D({116,157,165,152,144,161,79,129,148,159,158,161,163}),
TextColor3 = Theme[_D({114,158,155,158,161,79,131,148,167,163})],
AutoButtonColor = false
}), _D({131,151,148,156,148}))
Make(_D({114,158,161,157,148,161}), SendBtn, UDim.new(0, 5))
SendBtn.MouseEnter:Connect(function() CreateTween({SendBtn, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), 0.3, 0.15}) end)
SendBtn.MouseLeave:Connect(function() CreateTween({SendBtn, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), 0, 0.15}) end)
SendBtn.Activated:Connect(function()
local desc = DescBox.Text
if desc:gsub(_D({79}), _D({})):len() < 5 then
SendBtn.Text = _D({115,148,162,146,161,148,165,144,79,156,148,155,151,158,161,79,158,79,145,164,150,80})
task.wait(2)
SendBtn.Text = _D({116,157,165,152,144,161,79,129,148,159,158,161,163})
return
end
local sysInfo = {}
if RBSysInfo then
local lp = Players.LocalPlayer
sysInfo = {
ScriptVersion = brutonlib.Info and brutonlib.Info.Version or _D({110}),
JobId = game.JobId,
PlaceId = game.PlaceId,
Ping = lp and math.floor(lp.NetworkPing * 1000) .. _D({156,162}) or _D({125,94,112}),
Players = #Players:GetPlayers()
}
end
local payload = {
category = selectedCategory,
description = desc,
alwaysHappens = alwaysHappens,
systemInfo = sysInfo
}
SendBtn.Text = _D({116,157,165,152,144,157,147,158,93,93,93})
if RBWebhook ~= _D({}) and HttpService then
pcall(function()
HttpService:PostAsync(
RBWebhook,
HttpService:JSONEncode({
embeds = {{
title = _D({31,206,191,202,79,113,164,150,79,129,148,159,158,161,163,79,17,175,195,79}) .. selectedCategory,
description = desc,
color = 15158332,
fields = {
{ name = _D({112,146,158,157,163,148,146,148,79,162,148,156,159,161,148,110}), value = tostring(alwaysHappens), inline = true },
{ name = _D({133,148,161,162,242,210,158}), value = tostring(sysInfo.ScriptVersion), inline = true },
{ name = _D({121,158,145,120,147}), value = tostring(game.JobId), inline = false }
}
}}
}),
Enum.HttpContentType.ApplicationJson
)
end)
end
task.spawn(Callback, payload)
SendBtn.Text = _D({129,148,159,158,161,163,79,116,157,165,152,144,147,158,79,17,203,194})
SendBtn.BackgroundColor3 = Color3.fromRGB(67, 181, 129)
task.wait(3)
if SendBtn and SendBtn.Parent then
SendBtn.Text = _D({116,157,165,152,144,161,79,129,148,159,158,161,163})
SendBtn.BackgroundColor3 = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})]
DescBox.Text = _D({})
alwaysHappens = false
CreateTween({AlwaysTick, _D({113,144,146,154,150,161,158,164,157,147,131,161,144,157,162,159,144,161,148,157,146,168}), 1, 0.15})
SelectCategory(RBCategories[1])
end
end)
local ReportBug = {}
function ReportBug:Visible(...) Funcs:ToggleVisible(Holder, ...) end
function ReportBug:Destroy() Holder:Destroy() end
return ReportBug
end
return Tab
end
do
local SettingsTab = Window:MakeTab({_D({7,214,8,179,7,214,7,232,7,222,7,214,7,222,7,214,7,217}), _D({162,148,163,163,152,157,150,162}), IsSettings = true})
SettingsTab:Visible(false)
local Cont = SettingsTab.Cont
Cont:GetPropertyChangedSignal(_D({127,144,161,148,157,163})):Connect(function()
local open = Cont.Parent ~= nil
CreateTween({SettingButton, _D({129,158,163,144,163,152,158,157}), open and 180 or 0, 0.3})
SettingButton.ImageColor3 = open and Theme[_D({114,158,155,158,161,79,131,151,148,156,148})] or Theme[_D({114,158,155,158,161,79,115,144,161,154,79,131,148,167,163})]
end)
SettingButton.MouseButton1Click:Connect(function()
if Cont.Parent then
if Window.LastTab then
Window.LastTab:Enable()
else
Cont.Parent = nil
end
else
SettingsTab:Enable()
end
end)
SettingsTab:AddSection({Name = _D({7,220,7,219,8,180,79,7,214,8,179,8,183,7,214,7,219,8,182,7,216})})
local uiSizeMode = _D({8,180,7,217,8,183,7,226,7,230})
local customUIsize = (brutonlib.Save.UISize and brutonlib.Save.UISize[1]) or 600
SettingsTab:AddDropdown({
Name = _D({7,220,7,219,8,180,79,7,214,8,179,8,183,7,214,7,219,8,182,7,216}),
Options = {_D({7,228,7,233,8,185,7,224}), _D({8,180,7,217,8,183,7,226,7,230}), _D({8,178,7,215,8,185,7,224}), _D({8,180,7,221,7,228,7,228})},
Default = _D({8,180,7,217,8,183,7,226,7,230}),
Flag = _D({132,120,130,152,169,148}),
Callback = function(v)
uiSizeMode = v
if v == _D({7,228,7,233,8,185,7,224}) then
brutonlib:SetScale(700)
elseif v == _D({8,180,7,217,8,183,7,226,7,230}) then
brutonlib:SetScale(420)
elseif v == _D({8,178,7,215,8,185,7,224}) then
brutonlib:SetScale(300)
elseif v == _D({8,180,7,221,7,228,7,228}) then
brutonlib:SetScale(customUIsize)
end
end
})
SettingsTab:AddSlider({
Name = _D({7,221,7,228,7,228,79,7,214,8,179,7,220,7,219,8,180,79,7,214,8,179,8,185,79,7,217,7,224,8,185,7,222,8,182}),
Min = 300,
Max = 800,
Increase = 5,
Default = customUIsize,
Flag = _D({114,164,162,163,158,156,132,120,130,152,169,148}),
Callback = function(value)
customUIsize = value
if uiSizeMode == _D({8,180,7,221,7,228,7,228}) then
brutonlib:SetScale(customUIsize)
end
end
})
SettingsTab:AddSlider({
Name = _D({7,220,7,219,8,180,79,7,214,8,179,7,217,7,214,7,215,7,214,7,217}),
Min = 135,
Max = 250,
Increase = 5,
Default = brutonlib.Save.TabSize or 169,
Flag = _D({131,144,145,130,152,169,148}),
Callback = function(value)
MainScroll.Size = UDim2.new(0, value, 1, -TopBar.Size.Y.Offset)
Containers.Size = UDim2.new(1, -MainScroll.Size.X.Offset, 1, -TopBar.Size.Y.Offset)
brutonlib.Save.TabSize = value
SaveJson(_D({113,129,132,131,126,125,79,155,152,145,161,144,161,168,79,133,100,93,153,162,158,157}), brutonlib.Save)
end
})
SettingsTab:AddSection({Name = _D({7,214,8,179,7,221,8,179,8,176,8,185,7,216})})
local GlowStroke = Make(_D({130,163,161,158,154,148}), MainFrame, {
Thickness = 2,
Color = Theme[_D({114,158,155,158,161,79,131,151,148,156,148})],
Transparency = 0,
ApplyStrokeMode = Enum.ApplyStrokeMode.Contextual
})
local GlowGradient = Instance.new(_D({132,120,118,161,144,147,152,148,157,163}))
GlowGradient.Color = ColorSequence.new{
ColorSequenceKeypoint.new(0, Color3.fromRGB(8, 16, 28)),
ColorSequenceKeypoint.new(0.5, Theme[_D({114,158,155,158,161,79,119,148,144,147,152,157,150})] or Theme[_D({114,158,155,158,161,79,131,151,148,156,148})]),
ColorSequenceKeypoint.new(1, Color3.fromRGB(8, 16, 28))
}
GlowGradient.Rotation = 0
GlowGradient.Parent = GlowStroke
local glowSpeed = 50
local glowColorEnabled = true
RunService.Heartbeat:Connect(function(dt)
if GlowGradient and glowColorEnabled then
GlowGradient.Rotation = (GlowGradient.Rotation + glowSpeed * dt) % 360
end
end)
SettingsTab:AddToggle({
Name = _D({7,212,8,185,8,177,7,214,8,176,79,7,217,8,179,8,183,8,185,8,181,79,7,214,8,179,7,220,8,183,7,214,8,176}),
Desc = _D({}),
Default = false,
Flag = _D({130,163,158,159,116,147,150,148,114,158,155,158,161,152,157,150}),
Callback = function(enabled)
glowColorEnabled = not enabled
if enabled then
GlowGradient.Color = ColorSequence.new(Theme[_D({114,158,155,158,161,79,131,151,148,156,148})])
else
GlowGradient.Color = ColorSequence.new{
ColorSequenceKeypoint.new(0, Color3.fromRGB(8, 16, 28)),
ColorSequenceKeypoint.new(0.5, Theme[_D({114,158,155,158,161,79,119,148,144,147,152,157,150})] or Theme[_D({114,158,155,158,161,79,131,151,148,156,148})]),
ColorSequenceKeypoint.new(1, Color3.fromRGB(8, 16, 28))
}
end
end
})
--[[SettingsTab:AddSection({Name = "الألوان"})
SettingsTab:AddColorPicker({
Name = "لون الثيم",
Desc = "",
Default = Theme["Color Theme"],
Flag = "MainThemeColor",
Callback = function(NewColor)
Theme["Color Theme"] = NewColor
Theme["Color Edge"] = NewColor
Theme["Color Heading"] = NewColor
Theme["Color Bubble"] = NewColor
Theme["Color Dark Purple"] = NewColor
Theme["Color Dark Greem"] = NewColor
brutonlib:SetTheme(brutonlib.Save.Theme)
end
})]]
end
CloseButton.Activated:Connect(Window.CloseBtn)
MinimizeButton.Activated:Connect(Window.MinimizeBtn)
Window:SetBackground(_D({127,144,161,163,152,146,155,148,162}))
return Window
end
return brutonlib