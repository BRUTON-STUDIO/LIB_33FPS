local BRUTONHUB = {}



local GameTitle = "BRUTON HUB - Brookhaven | UI RESTORED BY SUKUNA | "
local titlecolor = Color3.fromRGB(255, 45, 45)
local labelcolor = Color3.fromRGB(255, 255, 255)
local owners = {"BRUTON", "ICEHUB"}
local discord1 = "https://discord.gg/MXVnRPZMD"
local discord2 = "https://discord.gg/xzBCMYMn35"




function BRUTONHUB.CreateMain()
	local Library = Instance.new("ScreenGui")
	local MainFrame = Instance.new("Frame")
	local UICorner = Instance.new("UICorner")
	local TabContainer = Instance.new("Frame")
	local UICorner_2 = Instance.new("UICorner")
	local ScrollingFrame = Instance.new("ScrollingFrame")
	local UIListLayout = Instance.new("UIListLayout")
	local Menu = Instance.new("TextButton")
	local UICornersss = Instance.new("UICorner")
	local FrameContainer = Instance.new("Folder")
	local MenuPage = Instance.new("ScrollingFrame")
	local NameLabel = Instance.new("TextLabel")
	local UICorner_4 = Instance.new("UICorner")
	local ImageLabel = Instance.new("ImageLabel")
	local UICorner_5 = Instance.new("UICorner")
	local Discord = Instance.new("TextButton")
	local UICorner_6 = Instance.new("UICorner")
	local IcyImage = Instance.new("ImageLabel")
	local UICorner_7 = Instance.new("UICorner")
	local NillestImage = Instance.new("ImageLabel")
	local UICorner_8 = Instance.new("UICorner")
	local KickAll = Instance.new("TextButton")
	local UICorner_9 = Instance.new("UICorner")
	local TextLabel = Instance.new("TextLabel")
	local IcyRoblox = Instance.new("TextLabel")
	local IcyYoutube = Instance.new("TextLabel")
	local IcyDiscord = Instance.new("TextLabel")
	local NillestRoblox = Instance.new("TextLabel")
	local NillestDiscord = Instance.new("TextLabel")
	local TemplateLabel = Instance.new("TextLabel")
	local UICorner_13 = Instance.new("UICorner")
	local TemplateTargettedLabel = Instance.new("TextLabel")
	local UICorner_14 = Instance.new("UICorner")
	local Target = Instance.new("TextLabel")
	local TemplateSlider = Instance.new("Frame")
	local UICorner_15 = Instance.new("UICorner")
	local SliderButton = Instance.new("TextButton")
	local UICorner_16 = Instance.new("UICorner")
	local Bar = Instance.new("Frame")
	local UICorner_17 = Instance.new("UICorner")
	local Value = Instance.new("TextLabel")
	local SliderTitle = Instance.new("TextLabel")
	local SettingsPage = Instance.new("ScrollingFrame")
	local UIListLayout_4 = Instance.new("UIListLayout")
	local ColorPickerLabel = Instance.new("TextLabel")
	local ColorPickerFrame = Instance.new("Frame")
	local ColorPickerCorner = Instance.new("UICorner")
	local ColorPickerStroke = Instance.new("UIStroke")
	local SVPlane = Instance.new("ImageButton")
	local SVCorner = Instance.new("UICorner")
	local SVWhiteOverlay = Instance.new("Frame")
	local SVWhiteGradient = Instance.new("UIGradient")
	local SVBlackOverlay = Instance.new("Frame")
	local SVBlackGradient = Instance.new("UIGradient")
	local SVCursor = Instance.new("Frame")
	local SVCursorCorner = Instance.new("UICorner")
	local HueStrip = Instance.new("TextButton")
	local HueCorner = Instance.new("UICorner")
	local HueGradient = Instance.new("UIGradient")
	local HueCursor = Instance.new("Frame")
	local HueCursorCorner = Instance.new("UICorner")
	local SwatchHolder = Instance.new("Frame")
	local SwatchLayout = Instance.new("UIListLayout")
	local TopFrame = Instance.new("Frame")
	local UICorner_21 = Instance.new("UICorner")
	local Close = Instance.new("TextButton")
	local UICorner_22 = Instance.new("UICorner")
	local Minimize = Instance.new("TextButton")
	local UICorner_23 = Instance.new("UICorner")
	local Title = Instance.new("TextLabel")
	local UICorner_24 = Instance.new("UICorner")
	local ClosePage = Instance.new("TextButton")
	local UICorner_25 = Instance.new("UICorner")
	local CloseFrame = Instance.new("Frame")
	local DontClose = Instance.new("TextButton")
	local UICorner_26 = Instance.new("UICorner")
	local YesClose = Instance.new("TextButton")
	local UICorner_27 = Instance.new("UICorner")
	local TextLabel_2 = Instance.new("TextLabel")
	local UICorner_28 = Instance.new("UICorner")
	local NotifyFolder = Instance.new("Folder")
	local Notify = Instance.new("Frame")
	local UICorner_29 = Instance.new("UICorner")
	local NotifyText = Instance.new("TextLabel")
	local TimerBar = Instance.new("Frame")
	local UICorner_30 = Instance.new("UICorner")
	local ImageNotify = Instance.new("Frame")
	local UICorner_31 = Instance.new("UICorner")
	local NotifyText_2 = Instance.new("TextLabel")
	local TimerBar_2 = Instance.new("Frame")
	local UICorner_32 = Instance.new("UICorner")
	local NotifyImage = Instance.new("ImageLabel")
	local UICorner_33 = Instance.new("UICorner")

	Library.Name = "Library"
	Library.Parent = game.CoreGui
	Library.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

	MainFrame.Name = "MainFrame"
	MainFrame.Parent = Library
	MainFrame.AnchorPoint = Vector2.new(0.5, 0.5)
	MainFrame.BackgroundColor3 = Color3.fromRGB(16, 28, 20)
	MainFrame.BorderColor3 = Color3.fromRGB(16, 28, 20)
	MainFrame.Position = UDim2.new(0.5, 0, 0.5, 0)
	MainFrame.Size = UDim2.new(0, 425, 0, 210)
	MainFrame.Active = true
	MainFrame.Draggable = true

	UICorner.CornerRadius = UDim.new(0, 4)
	UICorner.Parent = MainFrame

	TabContainer.Name = "TabContainer"
	TabContainer.Parent = MainFrame
	TabContainer.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	TabContainer.BorderColor3 = Color3.fromRGB(10, 20, 14)
	TabContainer.Size = UDim2.new(0, 110, 0, 210)

	UICorner_2.CornerRadius = UDim.new(0, 3)
	UICorner_2.Parent = TabContainer

	ScrollingFrame.Parent = TabContainer
	ScrollingFrame.Active = true
	ScrollingFrame.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	ScrollingFrame.BackgroundTransparency = 1.000
	ScrollingFrame.BorderColor3 = Color3.fromRGB(10, 20, 14)
	ScrollingFrame.Position = UDim2.new(0.0454545468, 0, 0.176190615, 0)
	ScrollingFrame.Size = UDim2.new(0, 100, 0, 172)
	ScrollingFrame.BottomImage = ""
	ScrollingFrame.CanvasSize = UDim2.new(0, 0, 10, 0)
	ScrollingFrame.MidImage = ""
	ScrollingFrame.ScrollBarThickness = 0
	ScrollingFrame.TopImage = ""

	UIListLayout.Parent = ScrollingFrame
	UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
	UIListLayout.Padding = UDim.new(0, 3)

	Menu.Name = "TemplateTab"
	Menu.Parent = ScrollingFrame
	Menu.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	Menu.BorderColor3 = Color3.fromRGB(10, 20, 14)
	Menu.Position = UDim2.new(0, 0, -1.77427779e-07, 0)
	Menu.Size = UDim2.new(0, 99, 0, 30)
	Menu.AutoButtonColor = false
	Menu.Font = Enum.Font.Gotham
	Menu.Text = "Menu"
	Menu.TextColor3 = Color3.fromRGB(57, 255, 106)
	Menu.TextSize = 12.000
	Menu.MouseButton1Click:Connect(function()
		for i,v in pairs(TabContainer.ScrollingFrame:GetChildren()) do
			if v:IsA("TextButton") then
				v.TextColor3 = Color3.fromRGB(255, 255, 255)
			end
		end
		Menu.TextColor3 = Color3.fromRGB(57, 255, 106)
		for i,v in pairs(FrameContainer:GetChildren()) do
			if v:IsA("ScrollingFrame") then
				v.Visible = false
			end
		end
		FrameContainer.MenuPage.Visible = true
	end)

	UICornersss.CornerRadius = UDim.new(0, 3)
	UICornersss.Parent = Menu

	FrameContainer.Name = "FrameContainer"
	FrameContainer.Parent = MainFrame

	MenuPage.Name = "MenuPage"
	MenuPage.Parent = FrameContainer
	MenuPage.Active = true
	MenuPage.BackgroundColor3 = Color3.fromRGB(16, 28, 20)
	MenuPage.BorderColor3 = Color3.fromRGB(16, 28, 20)
	MenuPage.Position = UDim2.new(0.273000002, 0, 0.159999996, 0)
	MenuPage.Size = UDim2.new(0, 303, 0, 170)
	MenuPage.CanvasSize = UDim2.new(0, 0, 50, 0)
	MenuPage.ScrollBarThickness = 5

	NameLabel.Name = "NameLabel"
	NameLabel.Parent = MenuPage
	NameLabel.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	NameLabel.BorderColor3 = Color3.fromRGB(10, 20, 14)
	NameLabel.Position = UDim2.new(0.375201404, 0, 0.000481928233, 0)
	NameLabel.Size = UDim2.new(0, 180, 0, 27)
	NameLabel.Font = Enum.Font.SourceSans
	NameLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
	NameLabel.TextSize = 14.000

	UICorner_4.CornerRadius = UDim.new(0, 4)
	UICorner_4.Parent = NameLabel

	ImageLabel.Parent = MenuPage
	ImageLabel.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	ImageLabel.BorderColor3 = Color3.fromRGB(10, 20, 14)
	ImageLabel.Position = UDim2.new(0.0249417536, 0, 0.000552987156, 0)
	ImageLabel.Size = UDim2.new(0, 91, 0, 91)
	ImageLabel.Image = "rbxasset://textures/ui/GuiImagePlaceholder.png"

	UICorner_5.CornerRadius = UDim.new(0, 4)
	UICorner_5.Parent = ImageLabel

	Discord.Name = "Discord"
	Discord.Parent = MenuPage
	Discord.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	Discord.BorderColor3 = Color3.fromRGB(10, 20, 14)
	Discord.Position = UDim2.new(0.374000013, 0, 0.00350000011, 0)
	Discord.Size = UDim2.new(0, 180, 0, 27)
	Discord.AutoButtonColor = false
	Discord.Font = Enum.Font.SourceSans
	Discord.Text = "Discord"
	Discord.TextColor3 = Color3.fromRGB(255, 255, 255)
	Discord.TextSize = 14.000

	UICorner_6.CornerRadius = UDim.new(0, 4)
	UICorner_6.Parent = Discord

	IcyImage.Name = "IcyImage"
	IcyImage.Parent = MenuPage
	IcyImage.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	IcyImage.BorderColor3 = Color3.fromRGB(10, 20, 14)
	IcyImage.Position = UDim2.new(0.0249417536, 0, 0.0123815509, 0)
	IcyImage.Size = UDim2.new(0, 91, 0, 91)
	IcyImage.Image = "rbxassetid://130434941144456"

	UICorner_7.CornerRadius = UDim.new(0, 4)
	UICorner_7.Parent = IcyImage

	NillestImage.Name = "NillestImage"
	NillestImage.Parent = MenuPage
	NillestImage.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	NillestImage.BorderColor3 = Color3.fromRGB(10, 20, 14)
	NillestImage.Position = UDim2.new(0.0249417536, 0, 0.0219548456, 0)
	NillestImage.Size = UDim2.new(0, 91, 0, 91)
	NillestImage.Image = "rbxasset://textures/ui/GuiImagePlaceholder.png"

	UICorner_8.CornerRadius = UDim.new(0, 4)
	UICorner_8.Parent = NillestImage

	KickAll.Name = "KickAll"
	KickAll.Parent = MenuPage
	KickAll.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	KickAll.BorderColor3 = Color3.fromRGB(10, 20, 14)
	KickAll.Position = UDim2.new(0.374412775, 0, 0.00655617705, 0)
	KickAll.Size = UDim2.new(0, 180, 0, 27)
	KickAll.AutoButtonColor = false
	KickAll.Font = Enum.Font.SourceSans
	KickAll.Text = "UI RESTORED BY WOJTES_BMW"
	KickAll.TextColor3 = Color3.fromRGB(255, 255, 255)
	KickAll.TextSize = 14.000

	UICorner_9.CornerRadius = UDim.new(0, 4)
	UICorner_9.Parent = KickAll

	TextLabel.Parent = MenuPage
	TextLabel.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	TextLabel.BackgroundTransparency = 1.000
	TextLabel.Position = UDim2.new(0.540268481, 0, 0.01060241, 0)
	TextLabel.Size = UDim2.new(0, 80, 0, 10)
	TextLabel.Font = Enum.Font.SourceSans
	TextLabel.Text = "Creator"
	TextLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
	TextLabel.TextSize = 14.000

	IcyRoblox.Name = "IcyRoblox"
	IcyRoblox.Parent = MenuPage
	IcyRoblox.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	IcyRoblox.BackgroundTransparency = 1.000
	IcyRoblox.Position = UDim2.new(0.506711423, 0, 0.0148192821, 0)
	IcyRoblox.Size = UDim2.new(0, 100, 0, 15)
	IcyRoblox.Font = Enum.Font.SourceSans
	IcyRoblox.Text = "Roblox : Wojtes_BMW"
	IcyRoblox.TextColor3 = Color3.fromRGB(255, 255, 255)
	IcyRoblox.TextSize = 14.000
	IcyRoblox.TextXAlignment = Enum.TextXAlignment.Left

	IcyYoutube.Name = "IcyYoutube"
	IcyYoutube.Parent = MenuPage
	IcyYoutube.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	IcyYoutube.BackgroundTransparency = 1.000
	IcyYoutube.Position = UDim2.new(0.506711423, 0, 0.0162650626, 0)
	IcyYoutube.Size = UDim2.new(0, 100, 0, 15)
	IcyYoutube.Font = Enum.Font.SourceSans
	IcyYoutube.Text = "Youtube : sanderxdev"
	IcyYoutube.TextColor3 = Color3.fromRGB(255, 255, 255)
	IcyYoutube.TextSize = 14.000
	IcyYoutube.TextXAlignment = Enum.TextXAlignment.Left

	IcyDiscord.Name = "IcyDiscord"
	IcyDiscord.Parent = MenuPage
	IcyDiscord.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	IcyDiscord.BackgroundTransparency = 1.000
	IcyDiscord.Position = UDim2.new(0.506711423, 0, 0.0175903663, 0)
	IcyDiscord.Size = UDim2.new(0, 100, 0, 15)
	IcyDiscord.Font = Enum.Font.SourceSans
	IcyDiscord.Text = "Discord : toniejaxdd"
	IcyDiscord.TextColor3 = Color3.fromRGB(255, 255, 255)
	IcyDiscord.TextSize = 14.000
	IcyDiscord.TextXAlignment = Enum.TextXAlignment.Left

	NillestRoblox.Name = "NillestRoblox"
	NillestRoblox.Parent = MenuPage
	NillestRoblox.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	NillestRoblox.BackgroundTransparency = 1.000
	NillestRoblox.Position = UDim2.new(0.506711423, 0, 0.0248192828, 0)
	NillestRoblox.Size = UDim2.new(0, 100, 0, 15)
	NillestRoblox.Font = Enum.Font.SourceSans
	NillestRoblox.Text = "Roblox : Examplenameroblox"
	NillestRoblox.TextColor3 = Color3.fromRGB(255, 255, 255)
	NillestRoblox.TextSize = 14.000
	NillestRoblox.TextXAlignment = Enum.TextXAlignment.Left

	NillestDiscord.Name = "NillestDiscord"
	NillestDiscord.Parent = MenuPage
	NillestDiscord.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	NillestDiscord.BackgroundTransparency = 1.000
	NillestDiscord.Position = UDim2.new(0.506711423, 0, 0.0261445791, 0)
	NillestDiscord.Size = UDim2.new(0, 100, 0, 15)
	NillestDiscord.Font = Enum.Font.SourceSans
	NillestDiscord.Text = "Discord : ExamplenameDiscord"
	NillestDiscord.TextColor3 = Color3.fromRGB(255, 255, 255)
	NillestDiscord.TextSize = 14.000
	NillestDiscord.TextXAlignment = Enum.TextXAlignment.Left

	Target.Name = "Target"
	Target.Parent = TemplateTargettedLabel
	Target.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	Target.BackgroundTransparency = 1.000
	Target.Position = UDim2.new(0.619827509, 0, 0.200000003, 0)
	Target.Size = UDim2.new(0, 100, 0, 18)
	Target.Font = Enum.Font.SourceSans
	Target.Text = ""
	Target.TextColor3 = Color3.fromRGB(178, 178, 178)
	Target.TextSize = 13.000

	SliderButton.Name = "SliderButton"
	SliderButton.Parent = TemplateSlider
	SliderButton.BackgroundColor3 = Color3.fromRGB(16, 28, 20)
	SliderButton.BorderColor3 = Color3.fromRGB(16, 28, 20)
	SliderButton.Position = UDim2.new(0.441684395, 0, 0.372043341, 0)
	SliderButton.Size = UDim2.new(0, 150, 0, 6)
	SliderButton.AutoButtonColor = false
	SliderButton.Font = Enum.Font.SourceSans
	SliderButton.Text = ""
	SliderButton.TextColor3 = Color3.fromRGB(0, 0, 0)
	SliderButton.TextSize = 14.000

	UICorner_16.CornerRadius = UDim.new(0, 4)
	UICorner_16.Parent = SliderButton

	Bar.Name = "Bar"
	Bar.Parent = SliderButton
	Bar.BackgroundColor3 = Color3.fromRGB(57, 255, 106)
	Bar.BorderColor3 = Color3.fromRGB(57, 255, 106)
	Bar.Position = UDim2.new(-0.00427652989, 0, -0.0999959335, 0)
	Bar.Size = UDim2.new(0, 0, 0, 6)

	UICorner_17.CornerRadius = UDim.new(0, 4)
	UICorner_17.Parent = Bar

	Value.Name = "Value"
	Value.Parent = TemplateSlider
	Value.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	Value.BackgroundTransparency = 1.000
	Value.Position = UDim2.new(0.315147907, 0, 0.199999809, 0)
	Value.Size = UDim2.new(0, 30, 0, 15)
	Value.Font = Enum.Font.SourceSans
	Value.Text = "0"
	Value.TextColor3 = Color3.fromRGB(255, 255, 255)
	Value.TextSize = 14.000
	Value.TextWrapped = true

	SliderTitle.Name = "SliderTitle"
	SliderTitle.Parent = TemplateSlider
	SliderTitle.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	SliderTitle.BackgroundTransparency = 1.000
	SliderTitle.Position = UDim2.new(0.0392857157, 0, 0.266666681, 0)
	SliderTitle.Size = UDim2.new(0, 70, 0, 15)
	SliderTitle.Font = Enum.Font.Gotham
	SliderTitle.Text = "Slider"
	SliderTitle.TextColor3 = Color3.fromRGB(255, 255, 255)
	SliderTitle.TextSize = 12.000
	SliderTitle.TextXAlignment = Enum.TextXAlignment.Left

	SettingsPage.Name = "SettingsPage"
	SettingsPage.Parent = FrameContainer
	SettingsPage.Active = true
	SettingsPage.BackgroundColor3 = Color3.fromRGB(16, 28, 20)
	SettingsPage.BorderColor3 = Color3.fromRGB(16, 28, 20)
	SettingsPage.Position = UDim2.new(0.273000002, 0, 0.159999996, 0)
	SettingsPage.Size = UDim2.new(0, 303, 0, 170)
	SettingsPage.Visible = false
	SettingsPage.ScrollBarThickness = 5

	UIListLayout_4.Parent = SettingsPage
	UIListLayout_4.SortOrder = Enum.SortOrder.LayoutOrder
	UIListLayout_4.Padding = UDim.new(0, 3)

	ColorPickerLabel.Name = "ColorPickerLabel"
	ColorPickerLabel.Parent = SettingsPage
	ColorPickerLabel.BackgroundTransparency = 1.000
	ColorPickerLabel.Size = UDim2.new(1, 0, 0, 16)
	ColorPickerLabel.Font = Enum.Font.GothamBold
	ColorPickerLabel.Text = "Theme Color"
	ColorPickerLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
	ColorPickerLabel.TextSize = 13.000
	ColorPickerLabel.TextXAlignment = Enum.TextXAlignment.Left
	ColorPickerLabel.LayoutOrder = 1

	ColorPickerFrame.Name = "ColorPickerFrame"
	ColorPickerFrame.Parent = SettingsPage
	ColorPickerFrame.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	ColorPickerFrame.Size = UDim2.new(1, 0, 0, 130)
	ColorPickerFrame.LayoutOrder = 2

	ColorPickerCorner.CornerRadius = UDim.new(0, 6)
	ColorPickerCorner.Parent = ColorPickerFrame

	ColorPickerStroke.Color = Color3.fromRGB(57, 255, 106)
	ColorPickerStroke.Thickness = 1
	ColorPickerStroke.Transparency = 0.4
	ColorPickerStroke.Parent = ColorPickerFrame

	SVPlane.Name = "SVPlane"
	SVPlane.Parent = ColorPickerFrame
	SVPlane.AutoButtonColor = false
	SVPlane.BackgroundColor3 = Color3.fromRGB(57, 255, 106)
	SVPlane.Position = UDim2.new(0, 8, 0, 8)
	SVPlane.Size = UDim2.new(1, -16, 0, 70)
	SVPlane.Text = ""

	SVCorner.CornerRadius = UDim.new(0, 5)
	SVCorner.Parent = SVPlane

	SVWhiteOverlay.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	SVWhiteOverlay.BorderSizePixel = 0
	SVWhiteOverlay.Size = UDim2.new(1, 0, 1, 0)
	SVWhiteOverlay.Parent = SVPlane

	SVWhiteGradient.Color = ColorSequence.new(Color3.fromRGB(255, 255, 255), Color3.fromRGB(255, 255, 255))
	SVWhiteGradient.Transparency = NumberSequence.new({
		NumberSequenceKeypoint.new(0, 0),
		NumberSequenceKeypoint.new(1, 1)
	})
	SVWhiteGradient.Parent = SVWhiteOverlay

	SVBlackOverlay.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
	SVBlackOverlay.BorderSizePixel = 0
	SVBlackOverlay.Size = UDim2.new(1, 0, 1, 0)
	SVBlackOverlay.Parent = SVPlane

	SVBlackGradient.Rotation = 90
	SVBlackGradient.Color = ColorSequence.new(Color3.fromRGB(0, 0, 0), Color3.fromRGB(0, 0, 0))
	SVBlackGradient.Transparency = NumberSequence.new({
		NumberSequenceKeypoint.new(0, 1),
		NumberSequenceKeypoint.new(1, 0)
	})
	SVBlackGradient.Parent = SVBlackOverlay

	SVCursor.Size = UDim2.new(0, 8, 0, 8)
	SVCursor.AnchorPoint = Vector2.new(0.5, 0.5)
	SVCursor.Position = UDim2.new(1, 0, 0, 0)
	SVCursor.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	SVCursor.BorderSizePixel = 0
	SVCursor.ZIndex = 5
	SVCursor.Parent = SVPlane

	SVCursorCorner.CornerRadius = UDim.new(1, 0)
	SVCursorCorner.Parent = SVCursor

	HueStrip.Name = "HueStrip"
	HueStrip.Parent = ColorPickerFrame
	HueStrip.AutoButtonColor = false
	HueStrip.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	HueStrip.Position = UDim2.new(0, 8, 0, 84)
	HueStrip.Size = UDim2.new(1, -16, 0, 14)
	HueStrip.Text = ""

	HueCorner.CornerRadius = UDim.new(0, 5)
	HueCorner.Parent = HueStrip

	HueGradient.Color = ColorSequence.new({
		ColorSequenceKeypoint.new(0.000, Color3.fromRGB(255, 0, 0)),
		ColorSequenceKeypoint.new(0.167, Color3.fromRGB(255, 255, 0)),
		ColorSequenceKeypoint.new(0.333, Color3.fromRGB(0, 255, 0)),
		ColorSequenceKeypoint.new(0.500, Color3.fromRGB(0, 255, 255)),
		ColorSequenceKeypoint.new(0.667, Color3.fromRGB(0, 0, 255)),
		ColorSequenceKeypoint.new(0.833, Color3.fromRGB(255, 0, 255)),
		ColorSequenceKeypoint.new(1.000, Color3.fromRGB(255, 0, 0))
	})
	HueGradient.Parent = HueStrip

	HueCursor.Size = UDim2.new(0, 3, 1, 4)
	HueCursor.AnchorPoint = Vector2.new(0.5, 0.5)
	HueCursor.Position = UDim2.new(0, 0, 0.5, 0)
	HueCursor.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	HueCursor.BorderSizePixel = 0
	HueCursor.ZIndex = 5
	HueCursor.Parent = HueStrip

	HueCursorCorner.CornerRadius = UDim.new(0, 1)
	HueCursorCorner.Parent = HueCursor

	SwatchHolder.Name = "SwatchHolder"
	SwatchHolder.Parent = ColorPickerFrame
	SwatchHolder.BackgroundTransparency = 1
	SwatchHolder.Position = UDim2.new(0, 8, 0, 104)
	SwatchHolder.Size = UDim2.new(1, -16, 0, 18)

	SwatchLayout.FillDirection = Enum.FillDirection.Horizontal
	SwatchLayout.Padding = UDim.new(0, 4)
	SwatchLayout.Parent = SwatchHolder

	local UserInputService = game:GetService("UserInputService")
	local PresetColors = {
		Color3.fromRGB(255, 45, 45), Color3.fromRGB(255, 140, 30), Color3.fromRGB(255, 220, 0),
		Color3.fromRGB(57, 255, 106), Color3.fromRGB(0, 255, 242), Color3.fromRGB(60, 90, 255),
		Color3.fromRGB(200, 0, 255), Color3.fromRGB(255, 0, 200), Color3.fromRGB(255, 255, 255)
	}

	for _, PresetColor in ipairs(PresetColors) do
		local SwatchButton = Instance.new("TextButton")
		SwatchButton.Size = UDim2.new(0, 16, 0, 16)
		SwatchButton.BackgroundColor3 = PresetColor
		SwatchButton.AutoButtonColor = false
		SwatchButton.Text = ""
		SwatchButton.Parent = SwatchHolder

		local SwatchCorner = Instance.new("UICorner")
		SwatchCorner.CornerRadius = UDim.new(0, 3)
		SwatchCorner.Parent = SwatchButton
	end

	local currentHue, currentSat, currentVal = 0.39, 0.78, 1

	local function ApplyThemeColor(NewColor)
		Bar.BackgroundColor3 = NewColor
		Menu.TextColor3 = NewColor
		ColorPickerStroke.Color = NewColor
	end

	local function UpdateFromHSV()
		local Result = Color3.fromHSV(currentHue, currentSat, currentVal)
		SVPlane.BackgroundColor3 = Color3.fromHSV(currentHue, 1, 1)
		SVCursor.Position = UDim2.new(currentSat, 0, 1 - currentVal, 0)
		HueCursor.Position = UDim2.new(currentHue, 0, 0.5, 0)
		ApplyThemeColor(Result)
	end

	local DraggingSV = false
	local DraggingHue = false

	local function UpdateSV(InputPos)
		local RelX = (InputPos.X - SVPlane.AbsolutePosition.X) / SVPlane.AbsoluteSize.X
		local RelY = (InputPos.Y - SVPlane.AbsolutePosition.Y) / SVPlane.AbsoluteSize.Y
		currentSat = math.clamp(RelX, 0, 1)
		currentVal = 1 - math.clamp(RelY, 0, 1)
		UpdateFromHSV()
	end

	local function UpdateHue(InputPos)
		local RelX = (InputPos.X - HueStrip.AbsolutePosition.X) / HueStrip.AbsoluteSize.X
		currentHue = math.clamp(RelX, 0, 1)
		UpdateFromHSV()
	end

	SVPlane.InputBegan:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
			DraggingSV = true
			UpdateSV(input.Position)
		end
	end)

	HueStrip.InputBegan:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
			DraggingHue = true
			UpdateHue(input.Position)
		end
	end)

	UserInputService.InputChanged:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch then
			if DraggingSV then
				UpdateSV(input.Position)
			elseif DraggingHue then
				UpdateHue(input.Position)
			end
		end
	end)

	UserInputService.InputEnded:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
			DraggingSV = false
			DraggingHue = false
		end
	end)

	for _, SwatchButton in ipairs(SwatchHolder:GetChildren()) do
		if SwatchButton:IsA("TextButton") then
			SwatchButton.MouseButton1Click:Connect(function()
				local H, S, V = SwatchButton.BackgroundColor3:ToHSV()
				currentHue, currentSat, currentVal = H, S, V
				UpdateFromHSV()
			end)
		end
	end

	UpdateFromHSV()

	TopFrame.Name = "TopFrame"
	TopFrame.Parent = MainFrame
	TopFrame.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	TopFrame.BorderColor3 = Color3.fromRGB(10, 20, 14)
	TopFrame.Position = UDim2.new(0, 0, -0.00476175966, 0)
	TopFrame.Size = UDim2.new(0, 425, 0, 30)

	UICorner_21.CornerRadius = UDim.new(0, 4)
	UICorner_21.Parent = TopFrame

	Close.Name = "Close"
	Close.Parent = TopFrame
	Close.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	Close.BorderColor3 = Color3.fromRGB(10, 20, 14)
	Close.Position = UDim2.new(0.929411769, 0, 0, 0)
	Close.Size = UDim2.new(0, 30, 0, 30)
	Close.AutoButtonColor = false
	Close.Font = Enum.Font.Gotham
	Close.Text = "X"
	Close.TextColor3 = Color3.fromRGB(255, 255, 255)
	Close.TextSize = 12.000

	UICorner_22.CornerRadius = UDim.new(0, 4)
	UICorner_22.Parent = Close

	Minimize.Name = "Minimize"
	Minimize.Parent = TopFrame
	Minimize.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	Minimize.BorderColor3 = Color3.fromRGB(10, 20, 14)
	Minimize.Position = UDim2.new(0.858823538, 0, 0, 0)
	Minimize.Size = UDim2.new(0, 30, 0, 30)
	Minimize.AutoButtonColor = false
	Minimize.Font = Enum.Font.Gotham
	Minimize.Text = "-"
	Minimize.TextColor3 = Color3.fromRGB(255, 255, 255)
	Minimize.TextSize = 12.000

	UICorner_23.CornerRadius = UDim.new(0, 4)
	UICorner_23.Parent = Minimize

	Title.Name = "Title"
	Title.Parent = TopFrame
	Title.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	Title.BorderColor3 = Color3.fromRGB(10, 20, 14)
	Title.Position = UDim2.new(0.0470588244, 0, 0.233333349, 0)
	Title.Size = UDim2.new(0, 200, 0, 15)
	Title.Font = Enum.Font.Gotham
	Title.Text = ""..GameTitle
	Title.TextColor3 = titlecolor
	Title.TextSize = 12.000
	Title.TextXAlignment = Enum.TextXAlignment.Left

	UICorner_24.CornerRadius = UDim.new(0, 4)
	UICorner_24.Parent = Title

	ClosePage.Name = "ClosePage"
	ClosePage.Parent = MainFrame
	ClosePage.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	ClosePage.BackgroundTransparency = 1.000
	ClosePage.BorderColor3 = Color3.fromRGB(10, 20, 14)
	ClosePage.Size = UDim2.new(0, 425, 0, 210)
	ClosePage.Visible = false
	ClosePage.AutoButtonColor = false
	ClosePage.Font = Enum.Font.SourceSans
	ClosePage.Text = ""
	ClosePage.TextColor3 = Color3.fromRGB(0, 0, 0)
	ClosePage.TextSize = 14.000

	UICorner_25.CornerRadius = UDim.new(0, 4)
	UICorner_25.Parent = ClosePage

	CloseFrame.Name = "CloseFrame"
	CloseFrame.Parent = ClosePage
	CloseFrame.BackgroundColor3 = Color3.fromRGB(16, 28, 20)
	CloseFrame.BorderColor3 = Color3.fromRGB(16, 28, 20)
	CloseFrame.Position = UDim2.new(0.485294133, 0, 0.467428595, 0)
	CloseFrame.Size = UDim2.new(0, 12, 0, 12)

	DontClose.Name = "DontClose"
	DontClose.Parent = CloseFrame
	DontClose.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	DontClose.BorderColor3 = Color3.fromRGB(10, 20, 14)
	DontClose.Position = UDim2.new(0.0993464887, 0, 0.550833881, 0)
	DontClose.Size = UDim2.new(0, 110, 0, 40)
	DontClose.Visible = false
	DontClose.Font = Enum.Font.SourceSans
	DontClose.Text = "Don't Close"
	DontClose.TextColor3 = Color3.fromRGB(255, 0, 0)
	DontClose.TextSize = 20.000

	UICorner_26.CornerRadius = UDim.new(0, 4)
	UICorner_26.Parent = DontClose

	YesClose.Name = "YesClose"
	YesClose.Parent = CloseFrame
	YesClose.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
	YesClose.BorderColor3 = Color3.fromRGB(10, 20, 14)
	YesClose.Position = UDim2.new(0.536449134, 0, 0.550833821, 0)
	YesClose.Size = UDim2.new(0, 110, 0, 40)
	YesClose.Visible = false
	YesClose.Font = Enum.Font.SourceSans
	YesClose.Text = "Yes, Close"
	YesClose.TextColor3 = Color3.fromRGB(0, 255, 0)
	YesClose.TextSize = 20.000

	UICorner_27.CornerRadius = UDim.new(0, 4)
	UICorner_27.Parent = YesClose

	TextLabel_2.Parent = CloseFrame
	TextLabel_2.BackgroundColor3 = Color3.fromRGB(16, 28, 20)
	TextLabel_2.BorderColor3 = Color3.fromRGB(16, 28, 20)
	TextLabel_2.Position = UDim2.new(0.219194219, 0, 0.136855215, 0)
	TextLabel_2.Size = UDim2.new(0, 169, 0, 50)
	TextLabel_2.Visible = false
	TextLabel_2.Font = Enum.Font.SourceSans
	TextLabel_2.Text = "Warning ! Are you sure to close BRUTON HUB ?"
	TextLabel_2.TextColor3 = Color3.fromRGB(255, 255, 255)
	TextLabel_2.TextSize = 18.000

	UICorner_28.CornerRadius = UDim.new(0, 4)
	UICorner_28.Parent = CloseFrame

	NotifyFolder.Name = "NotifyFolder"
	NotifyFolder.Parent = Library

	Notify.Name = "Notify"
	Notify.Parent = Library
	Notify.AnchorPoint = Vector2.new(1, 1)
	Notify.BackgroundColor3 = Color3.fromRGB(16, 28, 20)
	Notify.BorderColor3 = Color3.fromRGB(16, 28, 20)
	Notify.Position = UDim2.new(0.977205992, 0, 0.962383568, 0)
	Notify.Size = UDim2.new(0, 225, 0, 75)
	Notify.Visible = false

	UICorner_29.CornerRadius = UDim.new(0, 4)
	UICorner_29.Parent = Notify

	NotifyText.Name = "NotifyText"
	NotifyText.Parent = Notify
	NotifyText.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	NotifyText.BackgroundTransparency = 1.000
	NotifyText.Size = UDim2.new(0, 225, 0, 75)
	NotifyText.Font = Enum.Font.SourceSans
	NotifyText.Text = "Text Notify"
	NotifyText.TextColor3 = Color3.fromRGB(255, 255, 255)
	NotifyText.TextSize = 20.000
	NotifyText.TextWrapped = true

	TimerBar.Name = "TimerBar"
	TimerBar.Parent = Notify
	TimerBar.BackgroundColor3 = Color3.fromRGB(57, 255, 106)
	TimerBar.BorderColor3 = Color3.fromRGB(57, 255, 106)
	TimerBar.Position = UDim2.new(0, 0, 0.972999692, 0)
	TimerBar.Size = UDim2.new(0, 225, 0, 2)

	UICorner_30.Parent = TimerBar

	ImageNotify.Name = "ImageNotify"
	ImageNotify.Parent = Library
	ImageNotify.AnchorPoint = Vector2.new(1, 1)
	ImageNotify.BackgroundColor3 = Color3.fromRGB(16, 28, 20)
	ImageNotify.BorderColor3 = Color3.fromRGB(16, 28, 20)
	ImageNotify.Position = UDim2.new(0.977205992, 0, 0.962383568, 0)
	ImageNotify.Size = UDim2.new(0, 225, 0, 75)
	ImageNotify.Visible = false

	UICorner_31.CornerRadius = UDim.new(0, 4)
	UICorner_31.Parent = ImageNotify

	NotifyText_2.Name = "NotifyText"
	NotifyText_2.Parent = ImageNotify
	NotifyText_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	NotifyText_2.BackgroundTransparency = 1.000
	NotifyText_2.Position = UDim2.new(0.297777772, 0, 0, 0)
	NotifyText_2.Size = UDim2.new(0, 158, 0, 75)
	NotifyText_2.Font = Enum.Font.SourceSans
	NotifyText_2.Text = "Image Notify"
	NotifyText_2.TextColor3 = Color3.fromRGB(255, 255, 255)
	NotifyText_2.TextSize = 18.000
	NotifyText_2.TextWrapped = true

	TimerBar_2.Name = "TimerBar"
	TimerBar_2.Parent = ImageNotify
	TimerBar_2.BackgroundColor3 = Color3.fromRGB(57, 255, 106)
	TimerBar_2.BorderColor3 = Color3.fromRGB(57, 255, 106)
	TimerBar_2.Position = UDim2.new(0, 0, 0.972999692, 0)
	TimerBar_2.Size = UDim2.new(0, 225, 0, 2)

	UICorner_32.Parent = TimerBar_2

	NotifyImage.Name = "NotifyImage"
	NotifyImage.Parent = ImageNotify
	NotifyImage.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	NotifyImage.Position = UDim2.new(0.0311110616, 0, 0.0933332443, 0)
	NotifyImage.Size = UDim2.new(0, 60, 0, 60)
	NotifyImage.Image = "rbxasset://textures/ui/GuiImagePlaceholder.png"

	UICorner_33.CornerRadius = UDim.new(0, 4)
	UICorner_33.Parent = NotifyImage

	local Tabs = {}
	local First = true

	function Tabs:NewTab(TabName)
		local TemplateTab = Instance.new("TextButton")
		local UICorner_3 = Instance.new("UICorner")
		local TemplatePage = Instance.new("ScrollingFrame")
		local PageListLayout = Instance.new("UIListLayout")

		local function UpdateSize()
			local cS = PageListLayout.AbsoluteContentSize

			game.TweenService:Create(TemplatePage, TweenInfo.new(0.15, Enum.EasingStyle.Linear, Enum.EasingDirection.In), {
				CanvasSize = UDim2.new(0,0,0,cS.Y)
			}):Play()
		end

		TemplateTab.Name = "TemplateTab"
		TemplateTab.Parent = ScrollingFrame
		TemplateTab.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
		TemplateTab.BorderColor3 = Color3.fromRGB(10, 20, 14)
		TemplateTab.Position = UDim2.new(0, 0, -1.77427779e-07, 0)
		TemplateTab.Size = UDim2.new(0, 99, 0, 30)
		TemplateTab.AutoButtonColor = false
		TemplateTab.Font = Enum.Font.Gotham
		TemplateTab.Text = ""..TabName
		TemplateTab.TextColor3 = Color3.fromRGB(255, 255, 255)
		TemplateTab.TextSize = 12.000

		UICorner_3.CornerRadius = UDim.new(0, 3)
		UICorner_3.Parent = TemplateTab

		TemplatePage.Name = "TemplatePage"
		TemplatePage.Parent = FrameContainer
		TemplatePage.Active = true
		TemplatePage.BackgroundColor3 = Color3.fromRGB(16, 28, 20)
		TemplatePage.BorderColor3 = Color3.fromRGB(16, 28, 20)
		TemplatePage.Position = UDim2.new(0.273000062, 0, 0.160000026, 0)
		TemplatePage.Size = UDim2.new(0, 303, 0, 170)
		TemplatePage.Visible = false
		TemplatePage.ScrollBarThickness = 5

		PageListLayout.Parent = TemplatePage
		PageListLayout.SortOrder = Enum.SortOrder.LayoutOrder
		PageListLayout.Padding = UDim.new(0, 3)

		table.insert(Tabs, TabName)

		UpdateSize()

		TemplatePage.ChildAdded:Connect(UpdateSize)
		TemplatePage.ChildRemoved:Connect(UpdateSize)

		TemplateTab.MouseButton1Click:Connect(function()
			UpdateSize()
			for i,v in next, FrameContainer:GetChildren() do
				if v:IsA("ScrollingFrame") then
					v.Visible = false
				end
			end
			TemplatePage.Visible = true
			for i,v in next, TabContainer.ScrollingFrame:GetChildren() do
				if v:IsA("TextButton") then
					v.TextColor3 = Color3.fromRGB(255, 255, 255)
				end
			end
			TemplateTab.TextColor3 = Color3.fromRGB(57, 255, 106)
		end)

		local Sections = {}
		local focusing = false
		local viewDe = false

		function Sections:NewSection(secName, hidden)
			local TemplateSection = Instance.new("Frame")
			local SectionListLayout = Instance.new("UIListLayout")

			local function updateSectionFrame()
				local frameSc = SectionListLayout.AbsoluteContentSize
				TemplateSection.Size = UDim2.new(0, 352, 0, frameSc.Y)
			end

			TemplateSection.Name = "TemplateSection"
			TemplateSection.Parent = TemplatePage
			TemplateSection.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
			TemplateSection.BackgroundTransparency = 1.000
			TemplateSection.Size = UDim2.new(0, 280, 0, 30)

			SectionListLayout.Parent = TemplateSection
			SectionListLayout.SortOrder = Enum.SortOrder.LayoutOrder
			SectionListLayout.Padding = UDim.new(0, 3)

			updateSectionFrame()
			UpdateSize()

			local Elements = {}
			function Elements:NewButton(ButtonName, callback)
				callback = callback or function() end
				local TemplateButton = Instance.new("TextButton")
				local UICorner_11 = Instance.new("UICorner")

				TemplateButton.Name = "TemplateButton"
				TemplateButton.Parent = TemplatePage
				TemplateButton.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
				TemplateButton.BorderColor3 = Color3.fromRGB(10, 20, 14)
				TemplateButton.Position = UDim2.new(0, 0, 0.198794991, 0)
				TemplateButton.Size = UDim2.new(0, 295, 0, 30)
				TemplateButton.Font = Enum.Font.Gotham
				TemplateButton.Text = ""..ButtonName
				TemplateButton.TextColor3 = Color3.fromRGB(255, 255, 255)
				TemplateButton.TextSize = 12.000

				UICorner_11.CornerRadius = UDim.new(0, 4)
				UICorner_11.Parent = TemplateButton

				updateSectionFrame()
				UpdateSize()

				TemplateButton.MouseButton1Click:Connect(function()
					callback()
				end)

				function Elements:NewLabel(LabelText)
					local TemplateLabel = Instance.new("TextLabel")
					local UICorner_10 = Instance.new("UICorner")

					TemplateLabel.Name = "CustomLabel"
					TemplateLabel.Parent = TemplatePage
					TemplateLabel.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
					TemplateLabel.BorderColor3 = Color3.fromRGB(10, 20, 14)
					TemplateLabel.Size = UDim2.new(0, 295, 0, 30)
					TemplateLabel.Font = Enum.Font.Gotham
					TemplateLabel.Text = ""..LabelText
					TemplateLabel.TextColor3 = Color3.fromRGB(57, 255, 106)
					TemplateLabel.TextSize = 12.000

					UICorner_10.CornerRadius = UDim.new(0, 4)
					UICorner_10.Parent = TemplateLabel

					updateSectionFrame()
					UpdateSize()

					function Elements:NewTextBox(Text, PlaceholderText, callback)
						callback = callback or function() end
						local TemplateBox = Instance.new("TextBox")
						local UICorner_12 = Instance.new("UICorner")

						TemplateBox.Name = "TemplateBox"
						TemplateBox.Parent = TemplatePage
						TemplateBox.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
						TemplateBox.BorderColor3 = Color3.fromRGB(10, 20, 14)
						TemplateBox.Position = UDim2.new(0, 0, 0.39759019, 0)
						TemplateBox.Size = UDim2.new(0, 295, 0, 30)
						TemplateBox.Font = Enum.Font.Gotham
						TemplateBox.PlaceholderColor3 = Color3.fromRGB(178, 178, 178)
						TemplateBox.PlaceholderText = ""..PlaceholderText
						TemplateBox.Text = ""..Text
						TemplateBox.TextColor3 = Color3.fromRGB(255, 255, 255)
						TemplateBox.TextSize = 12.000

						UICorner_12.CornerRadius = UDim.new(0, 4)
						UICorner_12.Parent = TemplateBox

						updateSectionFrame()
						UpdateSize()

						TemplateBox.FocusLost:Connect(function()
							callback(TemplateBox.Text)
							wait(0.18)
							TemplateBox.Text = ""
						end)
						
						function Elements:NewTutorial(Images)
							callback = callback or function() end
							
							local TemplateTutorial = Instance.new("TextButton")
							local UICorner_13 = Instance.new("UICorner")

							TemplateTutorial.Name = "TemplateTutorial"
							TemplateTutorial.Parent = TemplatePage
							TemplateTutorial.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
							TemplateTutorial.BorderColor3 = Color3.fromRGB(10, 20, 14)
							TemplateTutorial.Position = UDim2.new(0, 0, 0.59638536, 0)
							TemplateTutorial.Size = UDim2.new(0, 295, 0, 30)
							TemplateTutorial.Font = Enum.Font.Gotham
							TemplateTutorial.Text = "Tutorial"
							TemplateTutorial.TextColor3 = Color3.fromRGB(255, 255, 255)
							TemplateTutorial.TextSize = 12.000

							UICorner_13.CornerRadius = UDim.new(0, 4)
							UICorner_13.Parent = TemplateTutorial

							updateSectionFrame()
							UpdateSize()

							_G.TutorialTweening = false
							TemplateTutorial.MouseButton1Click:Connect(function()
								local TutorialFrame = Instance.new("Frame")
								local UICorner_18 = Instance.new("UICorner")
								local Understand = Instance.new("TextButton")
								local UICorner_19 = Instance.new("UICorner")
								local TutorialImage = Instance.new("ImageLabel")
								local UICorner_20 = Instance.new("UICorner")
								local TutorialPage = Instance.new("ScrollingFrame")
								local ClickBlock = Instance.new("TextButton")

								TemplateTutorial.Name = "TemplateTutorial"
								TemplateTutorial.Parent = TemplatePage
								TemplateTutorial.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
								TemplateTutorial.BorderColor3 = Color3.fromRGB(10, 20, 14)
								TemplateTutorial.Position = UDim2.new(0, 0, 0.59638536, 0)
								TemplateTutorial.Size = UDim2.new(0, 295, 0, 30)
								TemplateTutorial.Font = Enum.Font.Gotham
								TemplateTutorial.Text = "Tutorial"
								TemplateTutorial.TextColor3 = Color3.fromRGB(255, 255, 255)
								TemplateTutorial.TextSize = 12.000

								UICorner_13.CornerRadius = UDim.new(0, 4)
								UICorner_13.Parent = TemplateTutorial
								
								TutorialPage.Name = "TutorialPage"
								TutorialPage.Parent = FrameContainer
								TutorialPage.Active = true
								TutorialPage.BackgroundColor3 = Color3.fromRGB(16, 28, 20)
								TutorialPage.BackgroundTransparency = 1.000
								TutorialPage.BorderColor3 = Color3.fromRGB(16, 28, 20)
								TutorialPage.Position = UDim2.new(0, 0, 0.136466324, 0)
								TutorialPage.Size = UDim2.new(0, 425, 0, 181)
								TutorialPage.Visible = false
								TutorialPage.ScrollBarThickness = 1

								ClickBlock.Name = "ClickBlock"
								ClickBlock.Parent = TutorialPage
								ClickBlock.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
								ClickBlock.BackgroundTransparency = 1.000
								ClickBlock.Size = UDim2.new(0, 425, 0, 181)
								ClickBlock.Visible = false
								ClickBlock.AutoButtonColor = false
								ClickBlock.Font = Enum.Font.SourceSans
								ClickBlock.Text = ""
								ClickBlock.TextColor3 = Color3.fromRGB(0, 0, 0)
								ClickBlock.TextSize = 14.000

								TutorialFrame.Name = "TutorialFrame"
								TutorialFrame.Parent = TutorialPage
								TutorialFrame.BackgroundColor3 = Color3.fromRGB(16, 28, 20)
								TutorialFrame.BorderColor3 = Color3.fromRGB(16, 28, 20)
								TutorialFrame.Position = UDim2.new(0, 0, -0.5, 0)
								TutorialFrame.Size = UDim2.new(0, 425, 0, 181)

								UICorner_18.CornerRadius = UDim.new(0, 4)
								UICorner_18.Parent = TutorialFrame

								Understand.Name = "Understand"
								Understand.Parent = TutorialFrame
								Understand.BackgroundColor3 = Color3.fromRGB(10, 20, 14)
								Understand.BorderColor3 = Color3.fromRGB(10, 20, 14)
								Understand.Position = UDim2.new(0.0199999996, 0, 0.828000009, 0)
								Understand.Size = UDim2.new(0, 410, 0, 25)
								Understand.AutoButtonColor = false
								Understand.Font = Enum.Font.SourceSans
								Understand.Text = "Okay, I understand."
								Understand.TextColor3 = Color3.fromRGB(255, 255, 255)
								Understand.TextSize = 15.000
								Understand.MouseButton1Click:Connect(function()
									if _G.TutorialTweening == false then
										_G.TutorialTweening = true
										TabContainer.Visible = true
										TutorialFrame:TweenPosition(UDim2.new(0, 0, -0.5, 0), Enum.EasingDirection.InOut, Enum.EasingStyle.Quad, 1, true)
										wait(1)
										ClickBlock.Visible = false
										_G.TutorialTweening = false
										TutorialPage:Destroy()
									end
								end)

								UICorner_19.CornerRadius = UDim.new(0, 4)
								UICorner_19.Parent = Understand

								TutorialImage.Name = "TutorialImage"
								TutorialImage.Parent = TutorialFrame
								TutorialImage.BackgroundColor3 = Color3.fromRGB(16, 28, 20)
								TutorialImage.BorderColor3 = Color3.fromRGB(16, 28, 20)
								TutorialImage.Position = UDim2.new(0.0178458244, 0, 0.0309286155, 0)
								TutorialImage.Size = UDim2.new(0, 410, 0, 140)
								TutorialImage.Image = "http://www.roblox.com/asset/?id="..Images

								UICorner_20.CornerRadius = UDim.new(0, 4)
								UICorner_20.Parent = TutorialImage
								
								if _G.TutorialTweening == false then
									_G.TutorialTweening = true
									TutorialPage.Visible = true
									ClickBlock.Visible = true
									TutorialFrame:TweenPosition(UDim2.new(0, 0, 0, 0), Enum.EasingDirection.InOut, Enum.EasingStyle.Quad, 1, true)
									wait(1)
									TabContainer.Visible = false
									_G.TutorialTweening = false
								end
							end)
						end
					end
				end
			end
			return Elements
		end
		return Sections
	end
	return Tabs
end
return BRUTONHUB
