

game:GetService("MarketplaceService")

local userInputService = game:GetService("UserInputService")
local tweenService = game:GetService("TweenService")
local httpService = game:GetService("HttpService")
local runService = game:GetService("RunService")
local coreGui = game:GetService("CoreGui")
local localPlayer = game:GetService("Players").LocalPlayer

localPlayer:GetMouse()

local Library = {
	Themes = {
		BlackWhite = {
			["Color Hub 1"] = ColorSequence.new({
				ColorSequenceKeypoint.new(0, Color3.fromRGB(255, 255, 255)),
				ColorSequenceKeypoint.new(0.5, Color3.fromRGB(200, 200, 200)),
				ColorSequenceKeypoint.new(1, Color3.fromRGB(255, 255, 255)),
			}),
			["Color Hub 2"] = Color3.fromRGB(10, 10, 10),
			["Color Stroke"] = Color3.fromRGB(255, 255, 255),
			["Color Theme"] = Color3.fromRGB(255, 255, 255),
			["Color Text"] = Color3.fromRGB(255, 255, 255),
			["Color Dark Text"] = Color3.fromRGB(190, 190, 190),
		},
	},
	Info = {
		Version = "1.1.0",
	},
	Save = {
		UISize = {
			500,
			280,
		},
		TabSize = 160,
		Theme = "BlackWhite",
	},
	Settings = {},
	Connection = {},
	Instances = {},
	Elements = {},
	Options = {},
	Flags = {},
	Tabs = {},
	Icons = loadstring(game:HttpGet("https://pastebin.com/raw/EnEUH9b2"))(),
}
local viewportSize = workspace.CurrentCamera.ViewportSize
local uiScale = viewportSize.Y / 450
local librarySettings = Library.Settings
local libraryFlags = Library.Flags

local function trackInstance(instanceRef, instanceKind)
	table.insert(Library.Instances, {
		Instance = instanceRef,
		Type = instanceKind,
	})

	return instanceRef
end
local function parentChildrenTo(Pu15, children)
	if children then
		table.foreach(children, function(_, child)
			child.Parent = Pu15
		end)
	end

	return Pu15
end
local function applyProperties(Pu19, properties)
	if properties then
		table.foreach(properties, function(propName, propValue)
			Pu19[propName] = propValue
		end)
	end

	return Pu19
end
local function createInstance(...)
	local createArgs = {
		...,
	}

	if type(createArgs) == "table" then
		local newInstance = Instance.new(createArgs[1])

		if type(createArgs[2]) ~= "table" then
			if typeof(createArgs[2]) == "Instance" then
				newInstance.Parent = createArgs[2]

				applyProperties(newInstance, createArgs[3])
				parentChildrenTo(newInstance, createArgs[4])

				local _ = createArgs[4]
			end
		else
			applyProperties(newInstance, createArgs[2])
			parentChildrenTo(newInstance, createArgs[3])

			local _ = createArgs[3]
		end

		return newInstance
	end
end

local notifGuiName = "bruton_lib-Notification"
local notifContainerName = "NotifContainer"
local notifTemplateName = "brutonNotif_lib"
local notifSpacing = 70

function Library.CreateNotification(_, notifOptions)
	local notifTitle = notifOptions.Title or "Notification"
	local notifContent = notifOptions.Content or ""
	local notifIcon = notifOptions.Icon or "rbxassetid://10709775560"
	local notifCallback = notifOptions.Callback or function() end
	local notifDuration = notifOptions.Duration or 5
	local notifGui = coreGui:FindFirstChild(notifGuiName)

	if notifGui then
		notifGui.DisplayOrder = 999
	else
		notifGui = Instance.new("ScreenGui")
		notifGui.Name = notifGuiName
		notifGui.ResetOnSpawn = false
		notifGui.DisplayOrder = 999
		notifGui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling
		notifGui.Parent = coreGui

		local notifFrame = Instance.new("Frame")

		notifFrame.Name = notifContainerName
		notifFrame.Size = UDim2.new(0, 240, 1, 0)
		notifFrame.Position = UDim2.new(1, -260, 0.05, 0)
		notifFrame.BackgroundTransparency = 1
		notifFrame.Parent = notifGui
	end

	local notifScreenGui = notifGui[notifContainerName]

	local function repositionNotifications()
		local notifCorner = notifScreenGui
		local notifStroke, notifIconImage, notifTitleLabel = ipairs(notifCorner:GetChildren())
		local notifContentLabel = 0

		while true do
			local notifFrameRef

			notifTitleLabel, notifFrameRef = notifStroke(notifIconImage, notifTitleLabel)

			if notifTitleLabel == nil then
				break
			end
			if notifFrameRef.Name == notifTemplateName then
				notifContentLabel = notifContentLabel + 1

				local notifIndex = tweenService
				local notifCount = {
					Position = UDim2.new(0, 0, 0, (notifContentLabel - 1) * notifSpacing),
				}

				notifIndex:Create(notifFrameRef, TweenInfo.new(0.35, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), notifCount):Play()
			end
		end
	end

	local frame = Instance.new("Frame")

	frame.Name = notifTemplateName
	frame.Size = UDim2.new(0, 220, 0, 60)
	frame.Position = UDim2.new(1, 0, 0, 0)
	frame.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	frame.BorderSizePixel = 0
	frame.ClipsDescendants = true

	local notifWidth = Instance.new("UICorner")

	notifWidth.CornerRadius = UDim.new(0, 8)
	notifWidth.Parent = frame

	local notifHeight = Instance.new("UIGradient")

	notifHeight.Color = ColorSequence.new({
		ColorSequenceKeypoint.new(0, Color3.fromRGB(0, 128, 255)),
		ColorSequenceKeypoint.new(0.5, Color3.fromRGB(102, 0, 204)),
		ColorSequenceKeypoint.new(1, Color3.fromRGB(255, 0, 128)),
	})
	notifHeight.Rotation = 45
	notifHeight.Parent = frame

	local notifXPos = Instance.new("UIStroke")

	notifXPos.Color = Color3.fromRGB(255, 255, 255)
	notifXPos.Thickness = 1
	notifXPos.Transparency = 0.7
	notifXPos.Parent = frame

	local notifYPos = Instance.new("ImageLabel")

	notifYPos.Size = UDim2.new(0, 20, 0, 20)
	notifYPos.Position = UDim2.new(0, 8, 0, 20)
	notifYPos.BackgroundTransparency = 1
	notifYPos.Image = notifIcon
	notifYPos.Parent = frame

	local notifPadding = Instance.new("TextLabel")

	notifPadding.Size = UDim2.new(1, -50, 0, 16)
	notifPadding.Position = UDim2.new(0, 36, 0, 4)
	notifPadding.BackgroundTransparency = 1
	notifPadding.Text = notifTitle
	notifPadding.Font = Enum.Font.GothamBold
	notifPadding.TextSize = 13
	notifPadding.TextColor3 = Color3.fromRGB(255, 255, 255)
	notifPadding.TextXAlignment = Enum.TextXAlignment.Left
	notifPadding.TextWrapped = true
	notifPadding.Parent = frame

	local notifPaddingVal = Instance.new("TextLabel")

	notifPaddingVal.Size = UDim2.new(1, -50, 0, 28)
	notifPaddingVal.Position = UDim2.new(0, 36, 0, 22)
	notifPaddingVal.BackgroundTransparency = 1
	notifPaddingVal.Text = notifContent
	notifPaddingVal.Font = Enum.Font.Gotham
	notifPaddingVal.TextSize = 12
	notifPaddingVal.TextColor3 = Color3.fromRGB(255, 255, 255)
	notifPaddingVal.TextWrapped = true
	notifPaddingVal.TextXAlignment = Enum.TextXAlignment.Left
	notifPaddingVal.TextYAlignment = Enum.TextYAlignment.Top
	notifPaddingVal.Parent = frame

	local notifCloseButton = Instance.new("TextButton")

	notifCloseButton.Size = UDim2.new(0, 18, 0, 18)
	notifCloseButton.Position = UDim2.new(1, -24, 0, 4)
	notifCloseButton.BackgroundTransparency = 1
	notifCloseButton.Text = "X"
	notifCloseButton.Font = Enum.Font.GothamBold
	notifCloseButton.TextSize = 14
	notifCloseButton.TextColor3 = Color3.fromRGB(255, 150, 150)
	notifCloseButton.Parent = frame

	local notifTimerBar = Instance.new("Frame")

	notifTimerBar.Size = UDim2.new(1, -6, 0, 3)
	notifTimerBar.Position = UDim2.new(0, 3, 1, -6)
	notifTimerBar.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	notifTimerBar.BackgroundTransparency = 0.35
	notifTimerBar.BorderSizePixel = 0
	notifTimerBar.Parent = frame

	local notifTimerCorner = Instance.new("UICorner")

	notifTimerCorner.CornerRadius = UDim.new(0, 2)
	notifTimerCorner.Parent = notifTimerBar
	frame.Parent = notifScreenGui

	repositionNotifications()
	notifCloseButton.MouseButton1Click:Connect(function()
		tweenService:Create(frame, TweenInfo.new(0.4, Enum.EasingStyle.Quad, Enum.EasingDirection.InOut), {
			Position = UDim2.new(1, 0, frame.Position.Y.Scale, frame.Position.Y.Offset),
		}):Play()
		task.wait(0.4)
		frame:Destroy()
		repositionNotifications()
		notifCallback()
	end)
	task.spawn(function()
		local notifStartTime = tick()

		while tick() - notifStartTime < notifDuration do
			if not frame.Parent then
				return
			end

			local notifTimeLeft = 1 - (tick() - notifStartTime) / notifDuration

			notifTimerBar.Size = UDim2.new(notifTimeLeft, -6, 0, 3)

			runService.RenderStepped:Wait()
		end

		if frame.Parent then
			tweenService:Create(frame, TweenInfo.new(0.4, Enum.EasingStyle.Quad, Enum.EasingDirection.InOut), {
				Position = UDim2.new(1, 0, frame.Position.Y.Scale, frame.Position.Y.Offset),
			}):Play()
			task.wait(0.4)
			frame:Destroy()
			repositionNotifications()
			notifCallback()
		end
	end)
end

local function loadSavedConfig(saveFilePath)
	if readfile and (isfile and isfile(saveFilePath)) then
		local savedData = httpService:JSONDecode(readfile(saveFilePath))

		if type(savedData) == "table" then
			if rawget(savedData, "UISize") then
				Library.Save.UISize = savedData.UISize
			end
			if rawget(savedData, "TabSize") then
				Library.Save.TabSize = savedData.TabSize
			end
			if rawget(savedData, "Theme") and VerifyTheme(savedData.Theme) then
				Library.Save.Theme = savedData.Theme
			end
		end
	end
end

pcall(loadSavedConfig, "bruton hub with bruton library.json")

local eventUtils = {
	InsertCallback = function(_, callbackList, callbackFn)
		if type(callbackFn) == "function" then
			table.insert(callbackList, callbackFn)
		end

		return callbackFn
	end,
	FireCallback = function(_, callbackList2, ...)
		local iterFn, iterTable, iterKey = ipairs(callbackList2)

		while true do
			local iterFnResult

			iterKey, iterFnResult = iterFn(iterTable, iterKey)

			if iterKey == nil then
				break
			end
			if type(iterFnResult) == "function" then
				task.spawn(iterFnResult, ...)
			end
		end
	end,
	ToggleVisible = function(_, targetInstance2, visibleState)
		if visibleState == nil or not visibleState then
			visibleState = targetInstance2.Visible
		end

		targetInstance2.Visible = visibleState
	end,
	ToggleParent = function(_, targetInstance3, newParent)
		if Bool == nil then
			if targetInstance3.Parent then
				newParent = false
			end

			targetInstance3.Parent = newParent
		else
			targetInstance3.Parent = Bool
		end
	end,
	GetConnectionFunctions = function(_, Pu75, connFn)
		return {
			Function = connFn,
			Connected = true,
			Disconnect = function(connObj)
				if connObj.Connected then
					table.remove(Pu75, table.find(Pu75, connObj.Function))

					connObj.Connected = false
				end
			end,
			Fire = function(connObj2, ...)
				if connObj2.Connected then
					task.spawn(connObj2.Function, ...)
				end
			end,
		}
	end,
	GetCallback = function(_, sourceTable, sourceKey)
		local callbackRef = sourceTable[sourceKey] or sourceTable.Callback or function() end

		return type(callbackRef) ~= "table" and {
			callbackRef,
		} or {
			function(newValue)
				callbackRef[1][callbackRef[2]] = newValue
			end,
		}
	end,
}
local eventListeners = {}
local connectionEvents = Library.Connection

local function registerEvents(eventNames)
	if type(eventNames) == "table" then
		local iterFn2, iterTable2, iterKey2 = ipairs(eventNames)

		while true do
			local iterName

			iterKey2, iterName = iterFn2(iterTable2, iterKey2)

			if iterKey2 == nil then
				break
			end

			local eventCallbacks = {}
			local eventObject = {}

			connectionEvents[iterName] = eventObject
			eventListeners[iterName] = eventCallbacks
			eventObject.Name = iterName

			function eventObject.Connect(_, eventCallback)
				if type(eventCallback) == "function" then
					table.insert(eventCallbacks, eventCallback)

					local _ = eventUtils.GetConnectionFunctions
				end
			end
			function eventObject.Once(_, Pu94)
				if type(Pu94) == "function" then
					local onceConnection = nil

					onceConnection = eventUtils:GetConnectionFunctions(eventCallbacks, function(...)
						task.spawn(Pu94, ...)
						onceConnection:Disconnect()
					end)

					return onceConnection
				end
			end
		end
	end
end

function connectionEvents.FireConnection(_, eventNameOrObj, ...)
	local listenersForEvent = type(eventNameOrObj) == "string" and eventListeners[eventNameOrObj] or eventListeners[eventNameOrObj.Name]
	local iterFn3, iterTable3, iterKey3 = pairs(listenersForEvent)

	while true do
		local iterCb

		iterKey3, iterCb = iterFn3(iterTable3, iterKey3)

		if iterKey3 == nil then
			break
		end

		task.spawn(iterCb, ...)
	end
end

registerEvents({
	"FlagsChanged",
	"ThemeChanged",
	"FileSaved",
	"ThemeChanging",
	"OptionAdded",
})

local function flagExists(flagName)
	return type(flagName) == "string" and libraryFlags[flagName] ~= nil
end
local function getFlagValue(flagName2)
	local flagValue

	if type(flagName2) ~= "string" then
		flagValue = false
	else
		flagValue = libraryFlags[flagName2]
	end

	return flagValue
end
local function setFlagValue(flagKey, flagVal)
	if flagKey and (flagVal ~= libraryFlags[flagKey] or type(flagVal) == "table") then
		libraryFlags[flagKey] = flagVal

		connectionEvents:FireConnection("FlagsChanged", flagKey, flagVal)
	end
end

local flagSaveDebounce = nil

connectionEvents.FlagsChanged:Connect(function(_, _)
	local scriptFilePath = librarySettings.ScriptFile

	if not flagSaveDebounce and (scriptFilePath and writefile) then
		flagSaveDebounce = true

		task.wait(0.1)

		flagSaveDebounce = false

		local encodeOk, encodedFlags = pcall(function()
			return httpService:JSONEncode(libraryFlags)
		end)

		if encodeOk and pcall(writefile, scriptFilePath, encodedFlags) then
			connectionEvents:FireConnection("FileSaved", "Script-Flags", scriptFilePath, encodedFlags)
		end
	end
end)

local mainGui = createInstance("ScreenGui", coreGui, {
	Name = "bruton hub with bruton library",
}, {
	createInstance("UIScale", {
		Scale = uiScale,
		Name = "Scale",
	}),
})

local coreGuiRef = coreGui
local existingGui = coreGui.FindFirstChild(coreGuiRef, mainGui.Name)

if existingGui and existingGui ~= mainGui then
	existingGui:Destroy()
end

local function identity(valueOrFn)
	local _ = type(valueOrFn) ~= "function"

	return valueOrFn
end
local function connectDebouncedClick(clickTarget, onClickFn)
	clickTarget.InputBegan:Connect(function(inputObj)
		if inputObj.UserInputType == Enum.UserInputType.MouseButton1 or inputObj.UserInputType == Enum.UserInputType.Touch then
			while userInputService:IsMouseButtonPressed(Enum.UserInputType.MouseButton1) do
				task.wait()
			end
		end

		onClickFn()
	end)
end
local function tweenProperty(tweenArgs)
	local tweenObj2 = tweenArgs[1] or tweenArgs.Instance
	local tweenPropName = tweenArgs[2] or tweenArgs.Prop
	local tweenTarget = tweenArgs[3] or tweenArgs.NewVal
	local tweenDuration = tweenArgs[4] or (tweenArgs.Time or 0.5)
	local tweenAwait = tweenArgs[5] or (tweenArgs.wait or false)
	local tweenAnim = tweenService:Create(tweenObj2, TweenInfo.new(tweenDuration, Enum.EasingStyle.Quint), {
		[tweenPropName] = tweenTarget,
	})

	tweenAnim:Play()

	if tweenAwait then
		tweenAnim.Completed:Wait()
	end

	return tweenAnim
end
local function makeDraggable(dragHandle)
	task.spawn(function()
		applyProperties(dragHandle, {
			Active = true,
			AutoButtonColor = false,
		})

		local dragOriginMouse = nil
		local dragOriginPos = nil
		local dragging = nil

		local function onDragStep(dragInputObj)
			local dragDelta = dragInputObj.Position - dragOriginMouse

			tweenProperty({
				dragHandle,
				"Position",
				UDim2.new(dragOriginPos.X.Scale, dragOriginPos.X.Offset + dragDelta.X / uiScale, dragOriginPos.Y.Scale, dragOriginPos.Y.Offset + dragDelta.Y / uiScale),
				0.35,
			})
		end

		dragHandle.MouseButton1Down:Connect(function()
			dragging = true
		end)
		dragHandle.InputBegan:Connect(function(dragBeginObj)
			if
				dragBeginObj.UserInputType == Enum.UserInputType.MouseButton1
				or dragBeginObj.UserInputType == Enum.UserInputType.Touch
			then
				dragOriginPos = dragHandle.Position
				dragOriginMouse = dragBeginObj.Position

				while userInputService:IsMouseButtonPressed(Enum.UserInputType.MouseButton1) do
					runService.Heartbeat:Wait()

					if dragging then
						onDragStep(dragBeginObj)
					end
				end

				dragging = false
			end
		end)
	end)

	return dragHandle
end
local function themeExists(themeNameToCheck)
	local themeIterFn, themeIterTable, themeKey = pairs(Library.Themes)

	while true do
		local themeVal

		themeKey, themeVal = themeIterFn(themeIterTable, themeKey)

		if themeKey == nil then
			break
		end
		if themeKey == themeNameToCheck then
			return true
		end
	end
end
local function saveConfigToFile(saveFilePath2, saveData)
	if writefile then
		local savedJson = httpService:JSONEncode(saveData)

		writefile(saveFilePath2, savedJson)
	end
end

local currentTheme = Library.Themes[Library.Save.Theme]

local function registerElement(elementName, elementBuilder)
	Library.Elements[elementName] = elementBuilder
end
local function buildElement(elementName2, elementParent, elementConfig, ...)
	return Library.Elements[elementName2](elementParent, elementConfig, ...)
end

registerElement("Corner", function(cornerParent, cornerRadius)
	return applyProperties(
		createInstance("UICorner", cornerParent, {
			CornerRadius = cornerRadius or UDim.new(0, 15),
		}),
		props
	)
end)
registerElement("Stroke", function(strokeParent, strokeConfig, ...)
	local strokeArgs = {
		...,
	}

	return trackInstance(
		applyProperties(
			createInstance("UIStroke", strokeParent, {
				Color = strokeArgs[1] or currentTheme["Color Stroke"],
				Thickness = strokeArgs[2] or 1,
				ApplyStrokeMode = "Border",
			}),
			strokeConfig
		),
		"Stroke"
	)
end)
registerElement("Button", function(buttonParent, buttonConfig, ...)
	local buttonArgs = {
		...,
	}
	local buttonFrame = trackInstance(
		applyProperties(
			createInstance("TextButton", buttonParent, {
				Text = "",
				Size = UDim2.fromScale(1, 1),
				BackgroundColor3 = currentTheme["Color Hub 2"],
				AutoButtonColor = false,
			}),
			buttonConfig
		),
		"Frame"
	)

	buttonFrame.MouseEnter:Connect(function()
		buttonFrame.BackgroundTransparency = 0.4
	end)
	buttonFrame.MouseLeave:Connect(function()
		buttonFrame.BackgroundTransparency = 0
	end)

	if buttonArgs[1] then
		buttonFrame.Activated:Connect(buttonArgs[1])
	end

	return buttonFrame
end)
registerElement("Gradient", function(gradientParent, gradientConfig, ...)
	return trackInstance(
		applyProperties(
			createInstance("UIGradient", gradientParent, {
				Color = currentTheme["Color Hub 1"],
			}),
			gradientConfig
		),
		"Gradient"
	)
end)

local function buildRowWithLabel(rowParent, rowTitle, rowDesc, rowContentSize)
	local rowIcon = trackInstance(
		createInstance("TextLabel", {
			Font = Enum.Font.GothamMedium,
			TextColor3 = currentTheme["Color Text"],
			Size = UDim2.new(1, -20),
			AutomaticSize = "Y",
			Position = UDim2.new(0, 0, 0.5),
			AnchorPoint = Vector2.new(0, 0.5),
			BackgroundTransparency = 1,
			TextTruncate = "AtEnd",
			TextSize = 10,
			TextXAlignment = "Left",
			Text = "",
			RichText = true,
		}),
		"Text"
	)
	local rowLabelObj = trackInstance(
		createInstance("TextLabel", {
			Font = Enum.Font.Gotham,
			TextColor3 = currentTheme["Color Dark Text"],
			Size = UDim2.new(1, -20),
			AutomaticSize = "Y",
			Position = UDim2.new(0, 12, 0, 15),
			BackgroundTransparency = 1,
			TextWrapped = true,
			TextSize = 8,
			TextXAlignment = "Left",
			Text = "",
			RichText = true,
		}),
		"DarkText"
	)
	local rowIconOffset = buildElement("Button", rowParent, {
		Size = UDim2.new(1, 0, 0, 25),
		AutomaticSize = "Y",
		Name = "Option",
	})

	buildElement("Corner", rowIconOffset, UDim.new(0, 6))

	local LabelHolder = createInstance("Frame", rowIconOffset, {
		AutomaticSize = "Y",
		BackgroundTransparency = 1,
		Size = rowContentSize,
		Position = UDim2.new(0, 10, 0),
		AnchorPoint = Vector2.new(0, 0),
	}, {
		createInstance("UIListLayout", {
			SortOrder = "LayoutOrder",
			VerticalAlignment = "Center",
			Padding = UDim.new(0, 2),
		}),
		createInstance("UIPadding", {
			PaddingBottom = UDim.new(0, 5),
			PaddingTop = UDim.new(0, 5),
		}),
		rowIcon,
		rowLabelObj,
	})

	local lastSize = {
		SetTitle = function(_, newTitleStr)
			if type(newTitleStr) == "string" and newTitleStr:gsub(" ", ""):len() > 0 then
				rowIcon.Text = newTitleStr
			end
		end,
		SetDesc = function(_, ignoredParam)
			if type(ignoredParam) ~= "string" or ignoredParam:gsub(" ", ""):len() <= 0 then
				rowLabelObj.Visible = false
				rowLabelObj.Text = ""
				LabelHolder.Position = UDim2.new(0, 10, 0.5)
				LabelHolder.AnchorPoint = Vector2.new(0, 0.5)
			else
				rowLabelObj.Visible = true
				rowLabelObj.Text = ignoredParam
				LabelHolder.Position = UDim2.new(0, 10, 0)
				LabelHolder.AnchorPoint = Vector2.new(0, 0)
			end
		end,
	}

	lastSize:SetTitle(rowTitle)
	lastSize:SetDesc(rowDesc)

	return rowIconOffset, lastSize
end
local function getColorProperty(instanceForColor)
	return instanceForColor:IsA("Frame") and "BackgroundColor3"
		or (
			instanceForColor:IsA("ImageLabel") and "ImageColor3"
			or (
				instanceForColor:IsA("TextLabel") and "TextColor3"
				or (instanceForColor:IsA("ScrollingFrame") and "ScrollBarImageColor3" or (instanceForColor:IsA("UIStroke") and "Color" or ""))
			)
		)
end

function Library.GetIcon(_, iconName)
	if iconName:find("rbxassetid://") or iconName:len() < 1 then
		return iconName
	end

	local normalizedIconName = iconName:lower():gsub("lucide", ""):gsub("-", "")
	local iconIterFn, iconIterTable, iconKey = pairs(Library.Icons)

	while true do
		local iconValue

		iconKey, iconValue = iconIterFn(iconIterTable, iconKey)

		if iconKey == nil then
			break
		end
		if iconKey:gsub("lucide", ""):gsub("-", "") == normalizedIconName then
			return iconValue
		end
	end

	local iconIterFn2, iconIterTable2, iconKey2 = pairs(Library.Icons)

	while true do
		local iconValue2

		iconKey2, iconValue2 = iconIterFn2(iconIterTable2, iconKey2)

		if iconKey2 == nil then
			break
		end
		if iconKey2:gsub("lucide", ""):gsub("-", ""):find(normalizedIconName) then
			return iconValue2
		end
	end

	return normalizedIconName
end
function Library.SetTheme(_, themeName)
	if themeExists(themeName) then
		Library.Save.Theme = themeName

		saveConfigToFile("bruton hub with bruton library.json", Library.Save)

		currentTheme = Library.Themes[themeName]

		Comnection:FireConnection("ThemeChanged", themeName)
		table.foreach(Library.Instances, function(_, trackedInstance)
			if trackedInstance.Type ~= "Gradient" then
				if trackedInstance.Type ~= "Frame" then
					if trackedInstance.Type ~= "Stroke" then
						if trackedInstance.Type ~= "Theme" then
							if trackedInstance.Type ~= "Text" then
								if trackedInstance.Type ~= "DarkText" then
									if trackedInstance.Type == "ScrollBar" then
										trackedInstance.Instance[getColorProperty(trackedInstance.Instance)] = currentTheme["Color Theme"]
									end
								else
									trackedInstance.Instance[getColorProperty(trackedInstance.Instance)] = currentTheme["Color Dark Text"]
								end
							else
								trackedInstance.Instance[getColorProperty(trackedInstance.Instance)] = currentTheme["Color Text"]
							end
						else
							trackedInstance.Instance[getColorProperty(trackedInstance.Instance)] = currentTheme["Color Theme"]
						end
					else
						trackedInstance.Instance[getColorProperty(trackedInstance.Instance)] = currentTheme["Color Stroke"]
					end
				else
					trackedInstance.Instance.BackgroundColor3 = currentTheme["Color Hub 2"]
				end
			else
				trackedInstance.Instance.Color = currentTheme["Color Hub 1"]
			end
		end)
	end
end
function Library.SetScale(_, targetHeight)
	local scaleFactor = viewportSize.Y / math.clamp(targetHeight, 300, 2000)

	mainGui.Scale.Scale = scaleFactor
	uiScale = scaleFactor
end
function Library.MakeWindow(_, windowConfig)
	local windowTitle = windowConfig[1] or windowConfig.Name or (windowConfig.Title or "bruton hub with bruton library")
	local windowSubTitle = windowConfig[2] or (windowConfig.SubTitle or "by : bruton_Team")

	librarySettings.ScriptFile = windowConfig[3] or (windowConfig.SaveFolder or false)

	local windowWidth, windowHeight = unpack(Library.Save.UISize)
	local hubFrame = trackInstance(
		createInstance("ImageButton", mainGui, {
			Size = UDim2.fromOffset(windowWidth, windowHeight),
			Position = UDim2.new(0.5, -windowWidth / 2, 0.5, -windowHeight / 2),
			BackgroundTransparency = 0.15,
			Name = "Hub",
		}),
		"Main"
	)
	buildElement("Gradient", hubFrame, {
		Rotation = 45,
	})
	makeDraggable(hubFrame)

	local hubCorner = buildElement("Corner", hubFrame)
	local componentsFolder = createInstance("Folder", hubFrame, {
		Name = "Components",
	})
	local dropdownFolder = createInstance("Folder", mainGui, {
		Name = "Dropdown",
	})
	local topBar = createInstance("Frame", componentsFolder, {
		Size = UDim2.new(1, 0, 0, 28),
		BackgroundTransparency = 1,
		Name = "Top Bar",
	})
	local titleLabel = trackInstance(
		createInstance("TextLabel", topBar, {
			Position = UDim2.new(0, 15, 0, 5),
			AutomaticSize = "XY",
			Text = windowTitle,
			TextXAlignment = "Left",
			TextSize = 12,
			TextColor3 = currentTheme["Color Text"],
			BackgroundTransparency = 1,
			Font = Enum.Font.GothamBold,
			Name = "Title",
		}),
		"Text"
	)
	local subTitleLabel = trackInstance(
		createInstance("TextLabel", topBar, {
			Position = UDim2.new(0, 15, 0, titleLabel.TextBounds.Y + 7),
			AutomaticSize = "XY",
			Text = windowSubTitle,
			TextColor3 = Color3.fromRGB(255, 255, 255),
			BackgroundTransparency = 1,
			TextXAlignment = "Left",
			TextSize = 8,
			Font = Enum.Font.Gotham,
			Name = "SubTitle",
		}),
		"DarkText"
	)
	local tabScroll = trackInstance(
		createInstance("ScrollingFrame", componentsFolder, {
			Size = UDim2.new(0, Library.Save.TabSize, 1, -topBar.Size.Y.Offset),
			ScrollBarImageColor3 = currentTheme["Color Theme"],
			Position = UDim2.new(0, 0, 1, 0),
			AnchorPoint = Vector2.new(0, 1),
			ScrollBarThickness = 1.5,
			BackgroundTransparency = 1,
			ScrollBarImageTransparency = 0.2,
			CanvasSize = UDim2.new(),
			AutomaticCanvasSize = "Y",
			ScrollingDirection = "Y",
			BorderSizePixel = 0,
			Name = "Tab Scroll",
		}, {
			createInstance("UIPadding", {
				PaddingLeft = UDim.new(0, 10),
				PaddingRight = UDim.new(0, 10),
				PaddingTop = UDim.new(0, 10),
				PaddingBottom = UDim.new(0, 10),
			}),
			createInstance("UIListLayout", {
				Padding = UDim.new(0, 5),
			}),
		}),
		"ScrollBar"
	)
	local containersFrame = createInstance("Frame", componentsFolder, {
		Size = UDim2.new(1, -tabScroll.Size.X.Offset, 1, -topBar.Size.Y.Offset),
		AnchorPoint = Vector2.new(1, 1),
		Position = UDim2.new(1, 0, 1, 0),
		BackgroundTransparency = 1,
		ClipsDescendants = true,
		Name = "Containers",
	})
	local resizeHandle = makeDraggable(createInstance("ImageButton", hubFrame, {
		Size = UDim2.new(0, 35, 0, 35),
		Position = hubFrame.Size,
		Active = true,
		AnchorPoint = Vector2.new(0.8, 0.8),
		BackgroundTransparency = 1,
		Name = "Control Hub Size",
	}))
	local tabResizeHandle = makeDraggable(createInstance("ImageButton", hubFrame, {
		Size = UDim2.new(0, 20, 1, -30),
		Position = UDim2.new(0, tabScroll.Size.X.Offset, 1, 0),
		AnchorPoint = Vector2.new(0.5, 1),
		Active = true,
		BackgroundTransparency = 1,
		Name = "Control Tab Size",
	}))

	local function onResize()
		local resizeHandlePos = resizeHandle.Position
		local tabResizeHandlePos = tabResizeHandle.Position

		resizeHandle.Position = UDim2.fromOffset(math.clamp(resizeHandlePos.X.Offset, 430, 1000), math.clamp(resizeHandlePos.Y.Offset, 200, 500))
		tabResizeHandle.Position = UDim2.new(0, math.clamp(tabResizeHandlePos.X.Offset, 135, 250), 1, 0)
		tabScroll.Size = UDim2.new(0, tabResizeHandle.Position.X.Offset, 1, -topBar.Size.Y.Offset)
		containersFrame.Size = UDim2.new(1, -tabScroll.Size.X.Offset, 1, -topBar.Size.Y.Offset)
		hubFrame.Size = resizeHandle.Position
	end

	local resizeHandleRef = resizeHandle

	resizeHandle.GetPropertyChangedSignal(resizeHandleRef, "Position"):Connect(onResize)

	local tabResizeHandleRef = tabResizeHandle

	tabResizeHandle.GetPropertyChangedSignal(tabResizeHandleRef, "Position"):Connect(onResize)
	connectDebouncedClick(resizeHandle, function()
		if not Minimized then
			Library.Save.UISize = {
				hubFrame.Size.X.Offset,
				hubFrame.Size.Y.Offset,
			}

			saveConfigToFile("bruton hub with bruton library.json", Library.Save)
		end
	end)
	connectDebouncedClick(tabResizeHandle, function()
		Library.Save.TabSize = tabScroll.Size.X.Offset

		saveConfigToFile("bruton hub with bruton library.json", Library.Save)
	end)

	local buttonsFolder = createInstance("Folder", topBar, {
		Name = "Buttons",
	})
	local closeButton = createInstance("ImageButton", {
		Size = UDim2.new(0, 14, 0, 14),
		Position = UDim2.new(1, -10, 0.5),
		AnchorPoint = Vector2.new(1, 0.5),
		BackgroundTransparency = 1,
		Image = "rbxassetid://10747384394",
		AutoButtonColor = false,
		Name = "Close",
	})
	local minimizeButton = applyProperties(closeButton:Clone(), {
		Position = UDim2.new(1, -35, 0.5),
		Image = "rbxassetid://10734896206",
		Name = "Minimize",
	})

	parentChildrenTo(buttonsFolder, {
		closeButton,
		minimizeButton,
	})

	local minimizedState = nil
	local minimizedSize = nil
	local minimizedPos = nil
	local windowApi = {}
	local isDialogOpen = false

	function windowApi.CloseBtn(_)
		windowApi:Dialog({
			Title = "LOC4T HUB",
			Text = "Tem certeza de que o script está fechado?  ",
			Options = {
				{
					"sim",
					function()
						mainGui:Destroy()
					end,
				},
				{
					"não",
				},
			},
		})
	end
	function windowApi.MinimizeBtn(_)
		if not minimizedPos then
			minimizedPos = true

			if minimizedState then
				minimizeButton.Image = "rbxassetid://10734896206"

				tweenProperty({
					hubFrame,
					"Size",
					minimizedSize,
					0.25,
					true,
				})

				resizeHandle.Visible = true
				tabResizeHandle.Visible = true
				minimizedState = false
			else
				minimizeButton.Image = "rbxassetid://10734924532"
				minimizedSize = hubFrame.Size
				resizeHandle.Visible = false
				tabResizeHandle.Visible = false

				tweenProperty({
					hubFrame,
					"Size",
					UDim2.fromOffset(hubFrame.Size.X.Offset, 28),
					0.25,
					true,
				})

				minimizedState = true
			end

			minimizedPos = false
		end
	end
	function windowApi.Minimize(_)
		hubFrame.Visible = not hubFrame.Visible
	end
	function windowApi.AddMinimizeButton(_, miniBtnConfig)
		local miniBtnFrame = makeDraggable(createInstance("ImageButton", mainGui, {
			Size = UDim2.fromOffset(50, 50),
			Position = UDim2.fromScale(0.15, 0.15),
			BackgroundTransparency = 1,
			BackgroundColor3 = currentTheme["Color Hub 2"],
			AutoButtonColor = false,
		}))
		local miniBtnStroke = nil
		local miniBtnCorner

		if miniBtnConfig.Corner then
			miniBtnCorner = buildElement("Corner", miniBtnFrame)

			applyProperties(miniBtnCorner, miniBtnConfig.Corner)
		else
			miniBtnCorner = nil
		end
		if miniBtnConfig.Stroke then
			miniBtnStroke = buildElement("Stroke", miniBtnFrame)

			applyProperties(miniBtnStroke, miniBtnConfig.Corner)
		end

		applyProperties(miniBtnFrame, miniBtnConfig.Button)
		miniBtnFrame.Activated:Connect(windowApi.Minimize)

		return {
			Stroke = miniBtnStroke,
			Corner = miniBtnCorner,
			Button = miniBtnFrame,
		}
	end
	function windowApi.Set(_, newWindowTitle, newWindowSubtitle, _unusedA, _unusedB, _unusedC)
		if type(newWindowTitle) == "string" then
			titleLabel.Text = newWindowTitle
		end
		if type(newWindowSubtitle) == "string" then
			subTitleLabel.Text = newWindowSubtitle
		end
	end
	function windowApi.Dialog(_, dialogConfig)
		if not hubFrame:FindFirstChild("Dialog") then
			if minimizedState then
				windowApi:MinimizeBtn()
			end

			local dialogTitle = dialogConfig[1] or (dialogConfig.Title or "Dialog")
			local dialogText = dialogConfig[2] or (dialogConfig.Text or "This is a Dialog")
			local dialogOptions = dialogConfig[3] or (dialogConfig.Options or {})
			local dialogFrame = createInstance("Frame", {
				Active = true,
				Size = UDim2.fromOffset(270, 162),
				Position = UDim2.fromScale(0.5, 0.5),
				AnchorPoint = Vector2.new(0.5, 0.5),
			}, {
				trackInstance(
					createInstance("TextLabel", {
						Font = Enum.Font.GothamBold,
						Size = UDim2.new(1, 0, 0, 20),
						Text = dialogTitle,
						TextXAlignment = "Left",
						TextColor3 = currentTheme["Color Text"],
						TextSize = 15,
						Position = UDim2.fromOffset(15, 5),
						BackgroundTransparency = 1,
					}),
					"Text"
				),
				trackInstance(
					createInstance("TextLabel", {
						Font = Enum.Font.GothamMedium,
						Size = UDim2.new(1, -25),
						AutomaticSize = "Y",
						Text = dialogText,
						TextXAlignment = "Left",
						TextColor3 = currentTheme["Color Dark Text"],
						TextSize = 12,
						Position = UDim2.fromOffset(15, 25),
						BackgroundTransparency = 1,
						TextWrapped = true,
					}),
					"DarkText"
				),
			})

			buildElement("Gradient", dialogFrame, {
				Rotation = 270,
			})
			buildElement("Corner", dialogFrame)

			local dialogButtonsRow = createInstance("Frame", dialogFrame, {
				Size = UDim2.fromScale(1, 0.35),
				Position = UDim2.fromScale(0, 1),
				AnchorPoint = Vector2.new(0, 1),
				BackgroundColor3 = currentTheme["Color Hub 2"],
				BackgroundTransparency = 1,
			}, {
				createInstance("UIListLayout", {
					Padding = UDim.new(0, 10),
					VerticalAlignment = "Center",
					FillDirection = "Horizontal",
					HorizontalAlignment = "Center",
				}),
			})
			local dialogOverlay = trackInstance(
				createInstance("Frame", hubFrame, {
					BackgroundTransparency = 0.6,
					Active = true,
					BackgroundColor3 = currentTheme["Color Hub 2"],
					Size = UDim2.new(1, 0, 1, 0),
					BackgroundColor3 = currentTheme["Color Stroke"],
					Name = "Dialog",
				}),
				"Stroke"
			)

			hubCorner:Clone().Parent = dialogOverlay
			dialogFrame.Parent = dialogOverlay

			tweenProperty({
				dialogFrame,
				"Size",
				UDim2.fromOffset(250, 150),
				0.2,
			})
			tweenProperty({
				dialogFrame,
				"Transparency",
				0,
				0.15,
			})
			tweenProperty({
				dialogOverlay,
				"Transparency",
				0.3,
				0.15,
			})

			local dialogButtonCount = 1
			local dialogApi = {
				Button = function(_, dialogBtnConfig)
					local dialogBtnLabel = dialogBtnConfig[1] or dialogBtnConfig.Name or (dialogBtnConfig.Title or "")
					local dialogBtnCallback = dialogBtnConfig[2] or (dialogBtnConfig.Callback or function() end)

					dialogButtonCount = dialogButtonCount + 1

					local dialogBtnFrame = buildElement("Button", dialogButtonsRow)

					buildElement("Corner", dialogBtnFrame)
					applyProperties(dialogBtnFrame, {
						Text = dialogBtnLabel,
						Font = Enum.Font.GothamBold,
						TextColor3 = currentTheme["Color Text"],
						TextSize = 12,
					})

					local dialogBtnRowRef = dialogButtonsRow
					local dlgIterFn, dlgIterTable, dlgIterKey = pairs(dialogBtnRowRef:GetChildren())

					while true do
						local dlgIterChild

						dlgIterKey, dlgIterChild = dlgIterFn(dlgIterTable, dlgIterKey)

						if dlgIterKey == nil then
							break
						end
						if dlgIterChild:IsA("TextButton") then
							dlgIterChild.Size = UDim2.new(1 / dialogButtonCount, -((dialogButtonCount - 1) * 20 / dialogButtonCount), 0, 32)
						end
					end

					dialogBtnFrame.Activated:Connect(dialogApi.Close)
					dialogBtnFrame.Activated:Connect(dialogBtnCallback)
				end,
				Close = function(_)
					tweenProperty({
						dialogFrame,
						"Size",
						UDim2.fromOffset(270, 162),
						0.2,
					})
					tweenProperty({
						dialogOverlay,
						"Transparency",
						1,
						0.15,
					})
					tweenProperty({
						dialogFrame,
						"Transparency",
						1,
						0.15,
						true,
					})
					dialogOverlay:Destroy()
				end,
			}

			table.foreach(dialogOptions, function(_, eachDialogBtn)
				dialogApi:Button(eachDialogBtn)
			end)

			return dialogApi
		end
	end
	function windowApi.SelectTab(_, tabRef)
		if type(tabRef) ~= "number" then
			local tabIterFn, tabIterTable, tabIterKey = pairs(Library.Tabs)

			while true do
				local tabEntry

				tabIterKey, tabEntry = tabIterFn(tabIterTable, tabIterKey)

				if tabIterKey == nil then
					break
				end
				if tabEntry.Cont == tabRef.Cont then
					tabEntry.func:Enable()
				end
			end
		else
			Library.Tabs[tabRef].func:Enable()
		end
	end

	local tabContainers = {}

	function windowApi.MakeTab(_, tabArgMaybeTable, tabConfig)
		if type(tabArgMaybeTable) == "table" then
			tabConfig = tabArgMaybeTable
		end

		local tabTitle = tabConfig[1] or (tabConfig.Title or "Tab!")
		local tabIcon = Library:GetIcon(tabConfig[2] or (tabConfig.Icon or ""))

		if tabIcon:find("rbxassetid://") then
			if tabIcon:gsub("rbxassetid://", ""):len() < 6 then
				tabIcon = false
			end
		else
			tabIcon = false
		end

		local tabButton = buildElement("Button", tabScroll, {
			Size = UDim2.new(1, 0, 0, 24),
		})

		buildElement("Corner", tabButton)

		local tabTitleLabel = trackInstance(
			createInstance("TextLabel", tabButton, {
				Size = UDim2.new(1, tabIcon and -25 or -15, 1),
				Position = UDim2.fromOffset(tabIcon and 25 or 15),
				BackgroundTransparency = 1,
				Font = Enum.Font.GothamMedium,
				Text = tabTitle,
				TextColor3 = currentTheme["Color Text"],
				TextSize = 10,
				TextXAlignment = Enum.TextXAlignment.Left,
				TextTransparency = isDialogOpen and 0.3 or 0,
				TextTruncate = "AtEnd",
			}),
			"Text"
		)
		local tabIconImage = trackInstance(
			createInstance("ImageLabel", tabButton, {
				Position = UDim2.new(0, 8, 0.5),
				Size = UDim2.new(0, 13, 0, 13),
				AnchorPoint = Vector2.new(0, 0.5),
				Image = tabIcon or "",
				BackgroundTransparency = 1,
				ImageTransparency = isDialogOpen and 0.3 or 0,
			}),
			"Text"
		)
		local tabIndicator = trackInstance(
			createInstance("Frame", tabButton, {
				Size = isDialogOpen and UDim2.new(0, 4, 0, 4) or UDim2.new(0, 4, 0, 13),
				Position = UDim2.new(0, 1, 0.5),
				AnchorPoint = Vector2.new(0, 0.5),
				BackgroundColor3 = currentTheme["Color Theme"],
				BackgroundTransparency = isDialogOpen and 1 or 0,
			}),
			"Theme"
		)

		buildElement("Corner", tabIndicator, UDim.new(0.5, 0))

		local tabScrollFrame = trackInstance(
			createInstance("ScrollingFrame", {
				Size = UDim2.new(1, 0, 1, 0),
				Position = UDim2.new(0, 0, 1),
				AnchorPoint = Vector2.new(0, 1),
				ScrollBarThickness = 1.5,
				BackgroundTransparency = 1,
				ScrollBarImageTransparency = 0.2,
				ScrollBarImageColor3 = currentTheme["Color Theme"],
				AutomaticCanvasSize = "Y",
				ScrollingDirection = "Y",
				BorderSizePixel = 0,
				CanvasSize = UDim2.new(),
				Name = ("Container %i [ %s ]"):format(#tabContainers + 1, tabTitle),
			}, {
				createInstance("UIPadding", {
					PaddingLeft = UDim.new(0, 10),
					PaddingRight = UDim.new(0, 10),
					PaddingTop = UDim.new(0, 10),
					PaddingBottom = UDim.new(0, 10),
				}),
				createInstance("UIListLayout", {
					Padding = UDim.new(0, 5),
				}),
			}),
			"ScrollBar"
		)

		table.insert(tabContainers, tabScrollFrame)

		if not isDialogOpen then
			tabScrollFrame.Parent = containersFrame
		end

		local function activateTab()
			if not tabScrollFrame.Parent then
				local tabContIterFn, tabContIterTable, tabContIterKey = pairs(tabContainers)

				while true do
					local tabContEntry

					tabContIterKey, tabContEntry = tabContIterFn(tabContIterTable, tabContIterKey)

					if tabContIterKey == nil then
						break
					end
					if tabContEntry:IsA("ScrollingFrame") and tabContEntry ~= tabScrollFrame then
						tabContEntry.Parent = nil
					end
				end

				tabScrollFrame.Parent = containersFrame
				tabScrollFrame.Size = UDim2.new(1, 0, 1, 150)

				table.foreach(Library.Tabs, function(_, eachTab)
					if eachTab.Cont ~= tabScrollFrame then
						eachTab.func:Disable()
					end
				end)
				tweenProperty({
					tabScrollFrame,
					"Size",
					UDim2.new(1, 0, 1, 0),
					0.3,
				})
				tweenProperty({
					tabTitleLabel,
					"TextTransparency",
					0,
					0.35,
				})
				tweenProperty({
					tabIconImage,
					"ImageTransparency",
					0,
					0.35,
				})
				tweenProperty({
					tabIndicator,
					"Size",
					UDim2.new(0, 4, 0, 13),
					0.35,
				})
				tweenProperty({
					tabIndicator,
					"BackgroundTransparency",
					0,
					0.35,
				})
			end
		end

		tabButton.Activated:Connect(activateTab)

		isDialogOpen = true

		local tabApi = {}

		table.insert(Library.Tabs, {
			TabInfo = {
				Name = tabTitle,
				Icon = tabIcon,
			},
			func = tabApi,
			Cont = tabScrollFrame,
		})

		tabApi.Cont = tabScrollFrame

		function tabApi.Disable(_)
			tabScrollFrame.Parent = nil

			tweenProperty({
				tabTitleLabel,
				"TextTransparency",
				0.3,
				0.35,
			})
			tweenProperty({
				tabIconImage,
				"ImageTransparency",
				0.3,
				0.35,
			})
			tweenProperty({
				tabIndicator,
				"Size",
				UDim2.new(0, 4, 0, 4),
				0.35,
			})
			tweenProperty({
				tabIndicator,
				"BackgroundTransparency",
				1,
				0.35,
			})
		end
		function tabApi.Enable(_)
			activateTab()
		end
		function tabApi.Visible(_, visibilityState)
			eventUtils:ToggleVisible(tabButton, visibilityState)
			eventUtils:ToggleParent(tabScrollFrame, visibilityState, containersFrame)
		end
		function tabApi.Destroy(_)
			tabButton:Destroy()
			tabScrollFrame:Destroy()
		end
		function tabApi.AddSection(_, sectionConfig)
			local sectionTitle

			if type(sectionConfig) ~= "string" or not sectionConfig then
				sectionTitle = sectionConfig[1] or sectionConfig.Name or (sectionConfig.Title or sectionConfig.Section)
			else
				sectionTitle = sectionConfig
			end

			local sectionIconId = sectionConfig.Icon or nil
			local sectionFrame = createInstance("Frame", tabScrollFrame, {
				Size = UDim2.new(1, 0, 0, 20),
				BackgroundTransparency = 1,
				Name = "Option",
			})
			local sectionInner = createInstance("Frame", sectionFrame, {
				Size = UDim2.new(1, 0, 1, 0),
				BackgroundTransparency = 1,
				Position = UDim2.new(0, 0, 0, 0),
			})
			local sectionIconImage

			if sectionIconId then
				local createInstRef = createInstance
				local sectionIconProps = {
					Size = UDim2.new(0, 14, 0, 14),
					Position = UDim2.new(0, 5, 0, 3),
					BackgroundTransparency = 1,
					Image = Library:GetIcon(sectionIconId),
					ImageColor3 = currentTheme["Color Text"],
					Name = "SectionIcon",
				}

				sectionIconImage = createInstRef("ImageLabel", sectionInner, sectionIconProps)
			else
				sectionIconImage = nil
			end

			local sectionLabelOffset = sectionIconId and UDim2.new(0, 24, 0, 0) or UDim2.new(0, 5, 0, 0)
			local sectionLabel = trackInstance(
				createInstance("TextLabel", sectionInner, {
					Font = Enum.Font.GothamBold,
					Text = sectionTitle,
					TextColor3 = currentTheme["Color Text"],
					Size = UDim2.new(1, -25, 1, 0),
					Position = sectionLabelOffset,
					BackgroundTransparency = 1,
					TextTruncate = "AtEnd",
					TextSize = 14,
					TextXAlignment = "Left",
				}),
				"Text"
			)
			local sectionApi = {}

			table.insert(Library.Options, {
				type = "Section",
				Name = sectionTitle,
				func = sectionApi,
			})

			function sectionApi.Visible(_, sectionVisible)
				if sectionVisible == nil then
					sectionFrame.Visible = not sectionFrame.Visible
				else
					sectionFrame.Visible = sectionVisible
				end
			end
			function sectionApi.Destroy(_)
				sectionFrame:Destroy()
			end
			function sectionApi.Set(_, newSectionTitle)
				if newSectionTitle then
					sectionLabel.Text = identity(newSectionTitle)
				end
			end
			function sectionApi.SetIcon(_, newSectionIcon)
				if newSectionIcon then
					local resolvedIcon = Library:GetIcon(newSectionIcon)

					if sectionIconImage then
						sectionIconImage.Image = resolvedIcon
					else
						sectionIconImage = createInstance("ImageLabel", sectionInner, {
							Size = UDim2.new(0, 14, 0, 14),
							Position = UDim2.new(0, 5, 0, 3),
							BackgroundTransparency = 1,
							Image = resolvedIcon,
							ImageColor3 = currentTheme["Color Text"],
							Name = "SectionIcon",
						})
						sectionLabel.Position = UDim2.new(0, 24, 0, 0)
					end
				end
			end

			return sectionApi
		end
		function tabApi.AddParagraph(_, paraConfig)
			local paraTitle = paraConfig[1] or (paraConfig.Title or "Paragraph")
			local paraText = paraConfig[2] or (paraConfig.Text or "")
			local paraIconId = paraConfig.Icon or nil
			local paraFrame = createInstance("Frame", tabScrollFrame, {
				Size = UDim2.new(1, 0, 0, 25),
				AutomaticSize = "Y",
				BackgroundTransparency = 1,
				Name = "Option",
			})
			local paraInner = createInstance("Frame", paraFrame, {
				Size = UDim2.new(1, -20, 0, 0),
				AutomaticSize = "Y",
				Position = UDim2.new(0, 10, 0, 0),
				BackgroundTransparency = 1,
			})
			local paraIconImage

			if paraIconId then
				local createInstRef2 = createInstance
				local paraIconProps = {
					Size = UDim2.new(0, 16, 0, 16),
					BackgroundTransparency = 1,
					Image = Library:GetIcon(paraIconId),
					ImageColor3 = currentTheme["Color Text"],
					Name = "ParagraphIcon",
				}

				paraIconImage = createInstRef2("ImageLabel", paraInner, paraIconProps)
			else
				paraIconImage = nil
			end

			local paraIconOffset = paraIconId and 20 or 0
			local paraTextColumn = createInstance("Frame", paraInner, {
				Size = UDim2.new(1, -paraIconOffset, 0, 0),
				AutomaticSize = "Y",
				Position = UDim2.new(0, paraIconOffset, 0, 0),
				BackgroundTransparency = 1,
			}, {
				createInstance("UIListLayout", {
					SortOrder = "LayoutOrder",
					Padding = UDim.new(0, 2),
				}),
			})
			local paraTitleLabel = trackInstance(
				createInstance("TextLabel", paraTextColumn, {
					Font = Enum.Font.GothamMedium,
					TextColor3 = currentTheme["Color Text"],
					Size = UDim2.new(1, 0, 0, 16),
					AutomaticSize = "Y",
					BackgroundTransparency = 1,
					TextTruncate = "AtEnd",
					TextSize = 10,
					TextXAlignment = "Left",
					Text = paraTitle,
					RichText = true,
					LayoutOrder = 1,
				}),
				"Text"
			)
			local paraBodyLabel = trackInstance(
				createInstance("TextLabel", paraTextColumn, {
					Font = Enum.Font.Gotham,
					TextColor3 = currentTheme["Color Dark Text"],
					Size = UDim2.new(1, 0, 0, 0),
					AutomaticSize = "Y",
					BackgroundTransparency = 1,
					TextWrapped = true,
					TextSize = 8,
					TextXAlignment = "Left",
					Text = paraText,
					RichText = true,
					LayoutOrder = 2,
				}),
				"DarkText"
			)

			local function updateParaIconPos()
				if paraIconImage then
					if paraText and paraText ~= "" then
						paraIconImage.Position = UDim2.new(0, 0, 0, 4)
					else
						paraIconImage.Position = UDim2.new(0, 0, 0.5, 0)
						paraIconImage.AnchorPoint = Vector2.new(0, 0.5)
					end
				end
			end

			local paraApi = {
				Visible = function(_, ...)
					paraFrame.Visible = ...
				end,
				Destroy = function(_)
					paraFrame:Destroy()
				end,
				SetTitle = function(_, newParaTitle)
					paraTitleLabel.Text = identity(newParaTitle)

					updateParaIconPos()
				end,
				SetDesc = function(_, newParaBody)
					paraText = newParaBody
					paraBodyLabel.Text = identity(newParaBody)

					local paraBodyRef = paraBodyLabel

					if newParaBody then
						newParaBody = newParaBody ~= ""
					end

					paraBodyRef.Visible = newParaBody

					updateParaIconPos()
				end,
				Set = function(paraSetSelf, paraSetArg1, paraSetArg2)
					if paraSetArg1 and paraSetArg2 then
						paraSetSelf:SetTitle(paraSetArg1)
						paraSetSelf:SetDesc(paraSetArg2)
					elseif paraSetArg1 then
						paraSetSelf:SetDesc(paraSetArg1)
					end
				end,
				SetIcon = function(_, newParaIcon)
					if newParaIcon then
						local resolvedParaIcon = Library:GetIcon(newParaIcon)

						if paraIconImage then
							paraIconImage.Image = resolvedParaIcon
						else
							paraIconImage = createInstance("ImageLabel", paraInner, {
								Size = UDim2.new(0, 16, 0, 16),
								BackgroundTransparency = 1,
								Image = resolvedParaIcon,
								ImageColor3 = currentTheme["Color Text"],
								Name = "ParagraphIcon",
							})
							paraTextColumn.Position = UDim2.new(0, 20, 0, 0)
							paraTextColumn.Size = UDim2.new(1, -20, 0, 0)
						end

						updateParaIconPos()
					end
				end,
			}

			paraApi:SetDesc(paraText)
			updateParaIconPos()

			return paraApi
		end
		function tabApi.AddButton(_, btnConfig)
			local btnTitle = btnConfig[1] or btnConfig.Name or (btnConfig.Title or "Button!")
			local btnDesc = btnConfig.Desc or (btnConfig.Description or "")
			local btnCallbacks = eventUtils:GetCallback(btnConfig, 2)
			local btnRowFrame, btnLabelObj = buildRowWithLabel(tabScrollFrame, btnTitle, btnDesc, UDim2.new(1, -20))

			createInstance("ImageLabel", btnRowFrame, {
				Size = UDim2.new(0, 14, 0, 14),
				Position = UDim2.new(1, -10, 0.5),
				AnchorPoint = Vector2.new(1, 0.5),
				BackgroundTransparency = 1,
				Image = "rbxassetid://10723396107",
			})
			btnRowFrame.Activated:Connect(function()
				eventUtils:FireCallback(btnCallbacks)
			end)

			return {
				Visible = function(_, ...)
					eventUtils:ToggleVisible(btnRowFrame, ...)
				end,
				Destroy = function(_)
					btnRowFrame:Destroy()
				end,
				Callback = function(_, ...)
					eventUtils:InsertCallback(btnCallbacks, ...)
				end,
				Set = function(_, btnSetArg1, btnSetArg2)
					if type(btnSetArg1) ~= "string" or type(btnSetArg2) ~= "string" then
						if type(btnSetArg1) ~= "string" then
							if type(btnSetArg1) == "function" then
								btnCallbacks = btnSetArg1
							end
						else
							btnLabelObj:SetTitle(btnSetArg1)
						end
					else
						btnLabelObj:SetTitle(btnSetArg1)
						btnLabelObj:SetDesc(btnSetArg2)
					end
				end,
			}
		end
		function tabApi.AddToggle(_, togConfig)
			local togTitle = togConfig[1] or togConfig.Name or (togConfig.Title or "Toggle")
			local togDesc = togConfig.Desc or (togConfig.Description or "")
			local togCallbacks = eventUtils:GetCallback(togConfig, 3)
			local togFlag = togConfig[4] or (togConfig.Flag or false)
			local togValue = togConfig[2] or (togConfig.Default or false)

			if flagExists(togFlag) then
				togValue = getFlagValue(togFlag)
			end

			local togRowFrame, togLabelObj = buildRowWithLabel(tabScrollFrame, togTitle, togDesc, UDim2.new(1, -38))
			local togTrack = trackInstance(
				createInstance("Frame", togRowFrame, {
					Size = UDim2.new(0, 35, 0, 18),
					Position = UDim2.new(1, -10, 0.5),
					AnchorPoint = Vector2.new(1, 0.5),
					BackgroundColor3 = currentTheme["Color Stroke"],
				}),
				"Stroke"
			)

			buildElement("Corner", togTrack, UDim.new(0.5, 0))

			local togThumb = trackInstance(
				createInstance(
					"Frame",
					createInstance("Frame", togTrack, {
						BackgroundTransparency = 1,
						Size = UDim2.new(0.8, 0, 0.8, 0),
						Position = UDim2.new(0.5, 0, 0.5, 0),
						AnchorPoint = Vector2.new(0.5, 0.5),
					}),
					{
						Size = UDim2.new(0, 12, 0, 12),
						Position = UDim2.new(0, 0, 0.5),
						AnchorPoint = Vector2.new(0, 0.5),
						BackgroundColor3 = currentTheme["Color Theme"],
					}
				),
				"Theme"
			)

			buildElement("Corner", togThumb, UDim.new(0.5, 0))

			local togAnimating = nil

			local function setToggle(newTogValue)
				if not togAnimating then
					togValue = newTogValue
					togAnimating = true

					setFlagValue(togFlag, togValue)
					eventUtils:FireCallback(togCallbacks, togValue)

					if togValue then
						tweenProperty({
							togThumb,
							"Position",
							UDim2.new(1, 0, 0.5),
							0.25,
						})
						tweenProperty({
							togThumb,
							"BackgroundTransparency",
							0,
							0.25,
						})
						tweenProperty({
							togThumb,
							"AnchorPoint",
							Vector2.new(1, 0.5),
							0.25,
							Wait or false,
						})
					else
						tweenProperty({
							togThumb,
							"Position",
							UDim2.new(0, 0, 0.5),
							0.25,
						})
						tweenProperty({
							togThumb,
							"BackgroundTransparency",
							0.8,
							0.25,
						})
						tweenProperty({
							togThumb,
							"AnchorPoint",
							Vector2.new(0, 0.5),
							0.25,
							Wait or false,
						})
					end

					togAnimating = false
				end
			end

			task.spawn(setToggle, togValue)
			togRowFrame.Activated:Connect(function()
				setToggle(not togValue)
			end)

			return {
				Visible = function(_, ...)
					eventUtils:ToggleVisible(togRowFrame, ...)
				end,
				Destroy = function(_)
					togRowFrame:Destroy()
				end,
				Callback = function(_, ...)
					eventUtils:InsertCallback(togCallbacks, ...)()
				end,
				Set = function(_, togSetArg1, togSetArg2)
					if type(togSetArg1) ~= "string" or type(togSetArg2) ~= "string" then
						if type(togSetArg1) ~= "string" then
							if type(togSetArg1) ~= "boolean" then
								if type(togSetArg1) == "function" then
									togCallbacks = togSetArg1
								end
							else
								if togAnimating and togSetArg2 then
									repeat
										task.wait()
									until not togAnimating
								end

								task.spawn(setToggle, togSetArg1)
							end
						else
							togLabelObj:SetTitle(togSetArg1, false, true)
						end
					else
						togLabelObj:SetTitle(togSetArg1)
						togLabelObj:SetDesc(togSetArg2)
					end
				end,
			}
		end
		function tabApi.AddDropdown(_, ddConfig)
			local ddTitle = ddConfig[1] or ddConfig.Name or (ddConfig.Title or "Dropdown")
			local ddDesc = ddConfig.Desc or (ddConfig.Description or "")
			local ddOptions = ddConfig[2] or (ddConfig.Options or {})
			local ddDefault = ddConfig[3] or (ddConfig.Default or {})
			local ddFlag = ddConfig[5] or (ddConfig.Flag or false)
			local ddMultiSelect = ddConfig.MultiSelect or false
			local ddCallbacks = eventUtils:GetCallback(ddConfig, 4)
			local ddRowFrame, _ = buildRowWithLabel(tabScrollFrame, ddTitle, ddDesc, UDim2.new(1, -180))
			local ddBox = trackInstance(
				createInstance("Frame", ddRowFrame, {
					Size = UDim2.new(0, 150, 0, 18),
					Position = UDim2.new(1, -10, 0.5),
					AnchorPoint = Vector2.new(1, 0.5),
					BackgroundColor3 = currentTheme["Color Stroke"],
				}),
				"Stroke"
			)

			buildElement("Corner", ddBox, UDim.new(0, 4))

			local ddDisplayLabel = trackInstance(
				createInstance("TextLabel", ddBox, {
					Size = UDim2.new(0.85, 0, 0.85, 0),
					AnchorPoint = Vector2.new(0.5, 0.5),
					Position = UDim2.new(0.5, 0, 0.5, 0),
					BackgroundTransparency = 1,
					Font = Enum.Font.GothamBold,
					TextScaled = true,
					TextColor3 = currentTheme["Color Text"],
					Text = "...",
				}),
				"Text"
			)
			local ddArrow = createInstance("ImageLabel", ddBox, {
				Size = UDim2.new(0, 15, 0, 15),
				Position = UDim2.new(0, -5, 0.5),
				AnchorPoint = Vector2.new(1, 0.5),
				Image = "rbxassetid://10709791523",
				BackgroundTransparency = 1,
			})
			local ddAntiClick = createInstance("TextButton", dropdownFolder, {
				Name = "AntiClick",
				Size = UDim2.new(1, 0, 1, 0),
				BackgroundTransparency = 1,
				Visible = false,
				Text = "",
			})
			local ddListFrame = createInstance("Frame", ddAntiClick, {
				Size = UDim2.new(ddBox.Size.X, 0, 0),
				BackgroundTransparency = 0.1,
				BackgroundColor3 = Color3.fromRGB(255, 255, 255),
				AnchorPoint = Vector2.new(0, 1),
				Name = "DropdownFrame",
				ClipsDescendants = true,
				Active = true,
			})

			buildElement("Corner", ddListFrame)
			buildElement("Stroke", ddListFrame)
			buildElement("Gradient", ddListFrame, {
				Rotation = 60,
			})

			local ddScrollFrame = trackInstance(
				createInstance("ScrollingFrame", ddListFrame, {
					ScrollBarImageColor3 = currentTheme["Color Theme"],
					Size = UDim2.new(1, 0, 1, 0),
					ScrollBarThickness = 1.5,
					BackgroundTransparency = 1,
					BorderSizePixel = 0,
					CanvasSize = UDim2.new(),
					ScrollingDirection = "Y",
					AutomaticCanvasSize = "Y",
					Active = true,
				}, {
					createInstance("UIPadding", {
						PaddingLeft = UDim.new(0, 8),
						PaddingRight = UDim.new(0, 8),
						PaddingTop = UDim.new(0, 5),
						PaddingBottom = UDim.new(0, 5),
					}),
					createInstance("UIListLayout", {
						Padding = UDim.new(0, 4),
					}),
				}),
				"ScrollBar"
			)
			local ddListHeight = 5
			local ddAnimating = nil

			local function closeDd()
				ddAnimating = true

				tweenProperty({
					ddArrow,
					"Rotation",
					0,
					0.2,
				})
				tweenProperty({
					ddListFrame,
					"Size",
					UDim2.new(0, 152, 0, 0),
					0.2,
					true,
				})
				tweenProperty({
					ddArrow,
					"ImageColor3",
					Color3.fromRGB(255, 255, 255),
					0.2,
				})

				ddArrow.Image = "rbxassetid://10709791523"
				ddAntiClick.Visible = false
				ddAnimating = false
			end
			local function getDdSize()
				return UDim2.fromOffset(152, ddListHeight)
			end
			local function updateDdHeight()
				local ddScrollRef = ddScrollFrame
				local ddIterFn, ddIterTable, ddIterKey = pairs(ddScrollRef:GetChildren())
				local ddItemCount = 0

				while true do
					local ddItem

					ddIterKey, ddItem = ddIterFn(ddIterTable, ddIterKey)

					if ddIterKey == nil then
						break
					end
					if ddItem:IsA("Frame") or ddItem.Name == "Option" then
						ddItemCount = ddItemCount + 1
					end
				end

				ddListHeight = math.clamp(ddItemCount, 0, 10) * 25 + 10

				if ddAntiClick.Visible then
					ddAntiClick.Visible = true

					tweenProperty({
						ddListFrame,
						"Size",
						getDdSize(),
						0.2,
						true,
					})
				end
			end
			local function toggleDd()
				if not ddAnimating then
					ddAnimating = true

					if ddAntiClick.Visible then
						ddArrow.Image = "rbxassetid://10709791523"

						tweenProperty({
							ddArrow,
							"ImageColor3",
							Color3.fromRGB(255, 255, 255),
							0.2,
						})
						tweenProperty({
							ddListFrame,
							"Size",
							UDim2.new(0, 152, 0, 0),
							0.2,
							true,
						})

						ddAntiClick.Visible = false
					else
						ddAntiClick.Visible = true
						ddArrow.Image = "rbxassetid://10709790948"

						tweenProperty({
							ddArrow,
							"ImageColor3",
							currentTheme["Color Theme"],
							0.2,
						})
						tweenProperty({
							ddListFrame,
							"Size",
							getDdSize(),
							0.2,
							true,
						})
					end

					ddAnimating = false
				end
			end
			local function positionDdFrame()
				local ddAbsPos = ddBox.AbsolutePosition
				local ddGuiSize = mainGui.AbsoluteSize
				local ddClampedX = math.clamp(ddAbsPos.X / uiScale, 0, ddGuiSize.X / uiScale - ddListFrame.Size.X.Offset)
				local ddClampedY = math.clamp(ddAbsPos.Y / uiScale, 0, ddGuiSize.Y / uiScale)
				local ddFramePos = UDim2.fromOffset(ddClampedX, ddClampedY)
				local ddAnchorY = ddAbsPos.Y > ddGuiSize.Y / 1.4 and 1 or (ddListHeight > 80 and 0.5 or 0)

				ddListFrame.AnchorPoint = Vector2.new(0, ddAnchorY)

				tweenProperty({
					ddListFrame,
					"Position",
					ddFramePos,
					0.1,
				})
			end

			local ddDefaultList = type(ddDefault) ~= "table" and ({
				ddDefault,
			} or ddDefault) or ddDefault
			local ddIsMulti = ddMultiSelect
			local ddItemMap = {}
			local ddSelected = ddIsMulti and {} or (flagExists(ddFlag) and getFlagValue(ddFlag) or ddDefaultList[1])

			if ddIsMulti then
				local pairsRef = pairs

				if flagExists(ddFlag) then
					ddDefaultList = getFlagValue(ddFlag) or ddDefaultList
				end

				local ddDefIterFn, ddDefIterTable, ddDefIterKey = pairsRef(ddDefaultList)

				while true do
					local ddDefKey, ddDefVal = ddDefIterFn(ddDefIterTable, ddDefIterKey)

					if ddDefKey == nil then
						break
					end

					ddDefIterKey = ddDefKey

					if type(ddDefKey) ~= "string" or not (ddOptions[ddDefKey] or table.find(ddOptions, ddDefKey)) then
						if ddOptions[ddDefVal] then
							ddSelected[ddDefVal] = true
						end
					else
						ddSelected[ddDefKey] = ddDefVal
					end
				end
			end

			local function fireDdCallback()
				setFlagValue(ddFlag, ddIsMulti and ddSelected or tostring(ddSelected))
				eventUtils:FireCallback(ddCallbacks, ddSelected)
			end
			local function updateDdLabel()
				if ddIsMulti then
					local ddSelIterFn, ddSelIterTable, ddSelIterKey = pairs(ddSelected)
					local ddSelLabels = {}

					while true do
						local ddSelEntry

						ddSelIterKey, ddSelEntry = ddSelIterFn(ddSelIterTable, ddSelIterKey)

						if ddSelIterKey == nil then
							break
						end
						if ddSelEntry then
							table.insert(ddSelLabels, ddSelIterKey)
						end
					end

					ddDisplayLabel.Text = #ddSelLabels > 0 and table.concat(ddSelLabels, ", ") or "..."
				else
					ddDisplayLabel.Text = tostring(ddSelected or "...")
				end
			end
			local function updateDdVisuals()
				if ddIsMulti then
					local ddVisIterFn, ddVisIterTable, ddVisIterKey = pairs(ddItemMap)

					while true do
						local ddVisEntry

						ddVisIterKey, ddVisEntry = ddVisIterFn(ddVisIterTable, ddVisIterKey)

						if ddVisIterKey == nil then
							break
						end

						local ddEntryNodes = ddVisEntry.nodes
						local ddEntryChecked = ddVisEntry.Stats

						tweenProperty({
							ddEntryNodes[2],
							"BackgroundTransparency",
							ddEntryChecked and 0 or 0.8,
							0.35,
						})
						tweenProperty({
							ddEntryNodes[2],
							"Size",
							ddEntryChecked and UDim2.fromOffset(4, 12) or UDim2.fromOffset(4, 4),
							0.35,
						})
						tweenProperty({
							ddEntryNodes[3],
							"TextTransparency",
							ddEntryChecked and 0 or 0.4,
							0.35,
						})
					end
				else
					local ddVisIterFn2, ddVisIterTable2, ddVisIterKey2 = pairs(ddItemMap)

					while true do
						local ddVisEntry2

						ddVisIterKey2, ddVisEntry2 = ddVisIterFn2(ddVisIterTable2, ddVisIterKey2)

						if ddVisIterKey2 == nil then
							break
						end

						local ddIsSelected = ddVisEntry2.Value == ddSelected
						local ddEntryNodes2 = ddVisEntry2.nodes

						tweenProperty({
							ddEntryNodes2[2],
							"BackgroundTransparency",
							ddIsSelected and 0 or 1,
							0.35,
						})
						tweenProperty({
							ddEntryNodes2[2],
							"Size",
							ddIsSelected and UDim2.fromOffset(4, 14) or UDim2.fromOffset(4, 4),
							0.35,
						})
						tweenProperty({
							ddEntryNodes2[3],
							"TextTransparency",
							ddIsSelected and 0 or 0.4,
							0.35,
						})
					end
				end

				updateDdLabel()
			end
			local function selectDdItem(ddItemEntry)
				if ddIsMulti then
					ddItemEntry.Stats = not ddItemEntry.Stats
					ddItemEntry.LastCB = tick()
					ddSelected[ddItemEntry.Name] = ddItemEntry.Stats

					fireDdCallback()
				else
					ddItemEntry.LastCB = tick()
					ddSelected = ddItemEntry.Value

					fireDdCallback()
				end

				updateDdVisuals()
			end
			local function addDdOption(ddOptIndex, ddOptValue)
				local toStringRef = tostring
				local ddOptKeyResolved

				if type(ddOptIndex) ~= "string" or not ddOptIndex then
					ddOptKeyResolved = ddOptValue
				else
					ddOptKeyResolved = ddOptIndex
				end

				local ddOptKey = toStringRef(ddOptKeyResolved)

				if not ddItemMap[ddOptKey] then
					ddItemMap[ddOptKey] = {
						index = ddOptIndex,
						Value = ddOptValue,
						Name = ddOptKey,
						Stats = false,
						LastCB = 0,
					}

					if ddIsMulti then
						local existingSelVal = ddSelected[ddOptKey]

						ddSelected[ddOptKey] = existingSelVal or false
						ddItemMap[ddOptKey].Stats = existingSelVal
					end

					local ddOptBtn = buildElement("Button", ddScrollFrame, {
						Name = "Option",
						Size = UDim2.new(1, 0, 0, 21),
						Position = UDim2.new(0, 0, 0.5),
						AnchorPoint = Vector2.new(0, 0.5),
					})

					buildElement("Corner", ddOptBtn, UDim.new(0, 4))

					local ddOptDot = trackInstance(
						createInstance("Frame", ddOptBtn, {
							Position = UDim2.new(0, 1, 0.5),
							Size = UDim2.new(0, 4, 0, 4),
							BackgroundColor3 = currentTheme["Color Theme"],
							BackgroundTransparency = 1,
							AnchorPoint = Vector2.new(0, 0.5),
						}),
						"Theme"
					)

					buildElement("Corner", ddOptDot, UDim.new(0.5, 0))

					local ddOptLabel = trackInstance(
						createInstance("TextLabel", ddOptBtn, {
							Size = UDim2.new(1, 0, 1),
							Position = UDim2.new(0, 10),
							Text = ddOptKey,
							TextColor3 = currentTheme["Color Text"],
							Font = Enum.Font.GothamBold,
							TextXAlignment = "Left",
							BackgroundTransparency = 1,
							TextTransparency = 0.4,
						}),
						"Text"
					)

					ddOptBtn.Activated:Connect(function()
						selectDdItem(ddItemMap[ddOptKey])
					end)

					ddItemMap[ddOptKey].nodes = {
						ddOptBtn,
						ddOptDot,
						ddOptLabel,
					}
				end
			end
			local function removeDdOption(ddRemIndex, ddRemValue)
				local toStringRef2 = tostring

				if type(ddRemIndex) == "string" and ddRemIndex then
					ddRemValue = ddRemIndex
				end

				local ddRemKey = toStringRef2(ddRemValue)

				if ddItemMap[ddRemKey] then
					if ddIsMulti then
						ddSelected[ddRemKey] = nil
					else
						ddSelected = nil
					end

					ddItemMap[ddRemKey].nodes[1]:Destroy()
					table.clear(ddItemMap[ddRemKey])

					ddItemMap[ddRemKey] = nil
				end
			end
			local function getDdItemMap()
				return ddItemMap
			end
			local function setDdOptions(newDdOptions, clearFirst)
				if clearFirst then
					table.foreach(ddItemMap, removeDdOption)
				end

				table.foreach(newDdOptions, addDdOption)
				fireDdCallback()
				updateDdVisuals()
			end

			table.foreach(ddOptions, addDdOption)
			fireDdCallback()
			updateDdVisuals()
			ddRowFrame.Activated:Connect(toggleDd)
			ddAntiClick.MouseButton1Down:Connect(closeDd)
			ddAntiClick.MouseButton1Click:Connect(closeDd)
			hubFrame:GetPropertyChangedSignal("Visible"):Connect(closeDd)

			local ddBoxRef = ddBox

			ddBox.GetPropertyChangedSignal(ddBoxRef, "AbsolutePosition"):Connect(positionDdFrame)
			ddRowFrame.Activated:Connect(updateDdHeight)
			ddScrollFrame.ChildAdded:Connect(updateDdHeight)
			ddScrollFrame.ChildRemoved:Connect(updateDdHeight)
			positionDdFrame()
			updateDdHeight()

			return {
				Visible = function(_, ...)
					eventUtils:ToggleVisible(ddRowFrame, ...)
				end,
				Destroy = function(_)
					ddRowFrame:Destroy()
				end,
				Callback = function(_, ...)
					eventUtils:InsertCallback(ddCallbacks, ...)(ddSelected)
				end,
				Add = function(_, ...)
					local addArgs = {
						...,
					}

					if type(addArgs[1]) ~= "table" then
						table.foreach(addArgs, function(_, addOptEntry)
							addDdOption(addOptEntry)
						end)
					else
						table.foreach(Option, function(_, addOptEntry2)
							addDdOption(addOptEntry2)
						end)
					end
				end,
				Remove = function(_, ddRemArg)
					local ddRemIterFn, ddRemIterTable, ddRemIterKey = pairs(getDdItemMap())

					while true do
						local ddRemItem

						ddRemIterKey, ddRemItem = ddRemIterFn(ddRemIterTable, ddRemIterKey)

						if ddRemIterKey == nil then
							break
						end
						if type(ddRemArg) == "number" and ddRemIterKey == ddRemArg or ddRemItem.Name == "Option" then
							removeDdOption(ddRemIterKey, ddRemItem.Value)
						end
					end
				end,
				Select = function(_, ddSelArg)
					if type(ddSelArg) ~= "string" then
						if type(ddSelArg) == "number" then
							local ddNumIterFn, ddNumIterTable, ddNumIterKey = pairs(Options)

							while true do
								local ddNumEntry

								ddNumIterKey, ddNumEntry = ddNumIterFn(ddNumIterTable, ddNumIterKey)

								if ddNumIterKey == nil then
									break
								end
								if ddNumIterKey == ddSelArg then
									ddNumEntry.Active()
								end
							end
						end
					else
						local ddStrIterFn, ddStrIterTable, ddStrIterKey = pairs(Options)

						while true do
							local ddStrEntry

							ddStrIterKey, ddStrEntry = ddStrIterFn(ddStrIterTable, ddStrIterKey)

							if ddStrIterKey == nil then
								break
							end
							if ddStrEntry.Name == ddSelArg then
								ddStrEntry.Active()
							end
						end
					end
				end,
				Set = function(_, ddSetArg1, ddSetArg2)
					if type(ddSetArg1) ~= "table" then
						if type(ddSetArg1) == "function" then
							ddCallbacks = ddSetArg1
						end
					else
						setDdOptions(ddSetArg1, not ddSetArg2)
					end
				end,
			}
		end
		function tabApi.AddSlider(_, slConfig)
			local slTitle = slConfig[1] or slConfig.Name or (slConfig.Title or "Slider!")
			local slDesc = slConfig.Desc or (slConfig.Description or "")
			local slMin = slConfig[2] or slConfig.MinValue or (slConfig.Min or 10)
			local slMax = slConfig[3] or slConfig.MaxValue or (slConfig.Max or 100)
			local slStep = slConfig[4] or (slConfig.Increase or 1)
			local slCallbacks = eventUtils:GetCallback(slConfig, 6)
			local slFlag = slConfig[7] or (slConfig.Flag or false)
			local slValue = slConfig[5] or (slConfig.Default or 25)

			if flagExists(slFlag) then
				slValue = getFlagValue(slFlag)
			end

			local slMinSteps = slMin / slStep
			local slMaxSteps = slMax / slStep
			local slMinSteps2 = slMinSteps
			local slRowFrame, slLabelObj = buildRowWithLabel(tabScrollFrame, slTitle, slDesc, UDim2.new(1, -180))
			local slInteractArea = createInstance("TextButton", slRowFrame, {
				Size = UDim2.new(0.45, 0, 1),
				Position = UDim2.new(1),
				AnchorPoint = Vector2.new(1, 0),
				AutoButtonColor = false,
				Text = "",
				BackgroundTransparency = 1,
			})
			local slTrack = trackInstance(
				createInstance("Frame", slInteractArea, {
					BackgroundColor3 = currentTheme["Color Stroke"],
					Size = UDim2.new(1, -20, 0, 6),
					Position = UDim2.new(0.5, 0, 0.5),
					AnchorPoint = Vector2.new(0.5, 0.5),
				}),
				"Stroke"
			)

			buildElement("Corner", slTrack)

			local slFill = trackInstance(
				createInstance("Frame", slTrack, {
					BackgroundColor3 = currentTheme["Color Theme"],
					Size = UDim2.fromScale(0.3, 1),
					BorderSizePixel = 0,
				}),
				"Theme"
			)

			buildElement("Corner", slFill)

			local slThumb = createInstance("Frame", slTrack, {
				Size = UDim2.new(0, 6, 0, 12),
				BackgroundColor3 = Color3.fromRGB(220, 220, 220),
				Position = UDim2.fromScale(0.3, 0.5),
				AnchorPoint = Vector2.new(0.5, 0.5),
				BackgroundTransparency = 0.2,
			})

			buildElement("Corner", slThumb)

			local slValueLabel = trackInstance(
				createInstance("TextLabel", slInteractArea, {
					Size = UDim2.new(0, 14, 0, 14),
					AnchorPoint = Vector2.new(1, 0.5),
					Position = UDim2.new(0, 0, 0.5),
					BackgroundTransparency = 1,
					TextColor3 = currentTheme["Color Text"],
					Font = Enum.Font.FredokaOne,
					TextSize = 12,
				}),
				"Text"
			)
			local slValueScale = createInstance("UIScale", slValueLabel)
			local slThumbOrigin = createInstance("Frame", slTrack, {
				Position = UDim2.new(0, 0, 0.5, 0),
				Visible = false,
			})

			local function onSliderChanged(rawStepVal)
				local rawVal = tonumber(rawStepVal * slStep)
				local roundedVal = math.floor(rawVal * 100) / 100

				slValueLabel.Text = tostring(roundedVal)
				slValue = roundedVal

				eventUtils:FireCallback(slCallbacks, slValue)
			end
			local function updateSliderThumb()
				local mouseXRatio = (localPlayer:GetMouse().X - slThumbOrigin.AbsolutePosition.X) / slTrack.AbsoluteSize.X

				slThumb.Position = UDim2.new(math.clamp(mouseXRatio, 0, 1), 0, 0.5, 0)
			end
			local function onThumbMoved()
				slFill.Size = UDim2.new(slThumb.Position.X.Scale, 0, 1, 0)

				local thumbXScale = slThumb.Position.X.Scale

				onSliderChanged((math.floor(thumbXScale * slMaxSteps / slMaxSteps * (slMaxSteps - slMinSteps2) + slMinSteps2)))
			end

			slInteractArea.MouseButton1Down:Connect(function()
				tweenProperty({
					slThumb,
					"Transparency",
					0,
					0.3,
				})

				tabScrollFrame.ScrollingEnabled = false

				while userInputService:IsMouseButtonPressed(Enum.UserInputType.MouseButton1) do
					task.wait()
					updateSliderThumb()
				end

				tweenProperty({
					slThumb,
					"Transparency",
					0.2,
					0.3,
				})

				tabScrollFrame.ScrollingEnabled = true

				setFlagValue(slFlag, slValue)
			end)

			local sliderValueLabelRef = slValueLabel

			slValueLabel.GetPropertyChangedSignal(sliderValueLabelRef, "Text"):Connect(function()
				slValueScale.Scale = 0.3

				tweenProperty({
					slValueScale,
					"Scale",
					1.2,
					0.1,
				})
				tweenProperty({
					slValueLabel,
					"Rotation",
					math.random(-1, 1) * 5,
					0.15,
					true,
				})
				tweenProperty({
					slValueScale,
					"Scale",
					1,
					0.2,
				})
				tweenProperty({
					slValueLabel,
					"Rotation",
					0,
					0.1,
				})
			end)

			function SetSlider(newSlValue)
				if type(newSlValue) == "number" then
					local slAbsMin = slMinSteps2 * slStep
					local slAbsMax = slMaxSteps * slStep
					local slNormVal = (newSlValue - slAbsMin) / (slAbsMax - slAbsMin)

					setFlagValue(slFlag, newSlValue)
					tweenProperty({
						slThumb,
						"Position",
						UDim2.fromScale(math.clamp(slNormVal, 0, 1), 0.5),
						0.3,
						true,
					})
				end
			end

			SetSlider(slValue)

			local slThumbRef = slThumb

			slThumb.GetPropertyChangedSignal(slThumbRef, "Position"):Connect(onThumbMoved)
			onThumbMoved()

			return {
				Set = function(_, slSetArg1, slSetArg2)
					if slSetArg1 and slSetArg2 then
						slLabelObj:SetTitle(slSetArg1)
						slLabelObj:SetDesc(slSetArg2)
					elseif type(slSetArg1) ~= "string" then
						if type(slSetArg1) ~= "function" then
							if type(slSetArg1) == "number" then
								SetSlider(slSetArg1)
							end
						else
							slCallbacks = slSetArg1
						end
					else
						slLabelObj:SetTitle(slSetArg1)
					end
				end,
				Callback = function(_, ...)
					eventUtils:InsertCallback(slCallbacks, ...)(tonumber(slValue))
				end,
				Visible = function(_, ...)
					eventUtils:ToggleVisible(slRowFrame, ...)
				end,
				Destroy = function(_)
					slRowFrame:Destroy()
				end,
			}
		end
		function tabApi.AddTextBox(_, tbConfig)
			local tbTitle = tbConfig[1] or tbConfig.Name or (tbConfig.Title or "Text Box")
			local tbDesc = tbConfig.Desc or (tbConfig.Description or "")
			local tbDefault = tbConfig[2] or (tbConfig.Default or "")
			local tbPlaceholder = tbConfig[5] or (tbConfig.PlaceholderText or "LOC4T")
			local tbClearOnFocus = tbConfig[3] or (tbConfig.ClearText or false)
			local tbCallbacks = eventUtils:GetCallback(tbConfig, 4)

			if type(tbDefault) == "string" then
				local _ = tbDefault:gsub(" ", ""):len() >= 1
			end

			local tbRowFrame, _ = buildRowWithLabel(tabScrollFrame, tbTitle, tbDesc, UDim2.new(1, -38))
			local tbBox = trackInstance(
				createInstance("Frame", tbRowFrame, {
					Size = UDim2.new(0, 150, 0, 18),
					Position = UDim2.new(1, -10, 0.5),
					AnchorPoint = Vector2.new(1, 0.5),
					BackgroundColor3 = currentTheme["Color Stroke"],
				}),
				"Stroke"
			)

			buildElement("Corner", tbBox, UDim.new(0, 4))

			local tbInput = trackInstance(
				createInstance("TextBox", tbBox, {
					Size = UDim2.new(0.85, 0, 0.85, 0),
					AnchorPoint = Vector2.new(0.5, 0.5),
					Position = UDim2.new(0.5, 0, 0.5, 0),
					BackgroundTransparency = 1,
					Font = Enum.Font.GothamBold,
					TextScaled = true,
					TextColor3 = currentTheme["Color Text"],
					ClearTextOnFocus = tbClearOnFocus,
					PlaceholderText = tbPlaceholder,
					Text = "",
				}),
				"Text"
			)
			local tbSearchIcon = createInstance("ImageLabel", tbBox, {
				Size = UDim2.new(0, 12, 0, 12),
				Position = UDim2.new(0, -5, 0.5),
				AnchorPoint = Vector2.new(1, 0.5),
				Image = "rbxassetid://15637081879",
				BackgroundTransparency = 1,
			})
			local tbApi = {}

			local function onTbSubmit()
				local tbCurrentText = tbInput.Text

				if tbCurrentText:gsub(" ", ""):len() > 0 then
					if type(tbApi.OnChanging) == "function" then
						tbCurrentText = tbApi.OnChanging(tbCurrentText) or tbCurrentText
					end

					eventUtils:FireCallback(tbCallbacks, tbCurrentText)

					tbInput.Text = tbCurrentText
				end
			end

			tbInput.FocusLost:Connect(onTbSubmit)
			onTbSubmit()
			tbInput.FocusLost:Connect(function()
				tweenProperty({
					tbSearchIcon,
					"ImageColor3",
					Color3.fromRGB(255, 255, 255),
					0.2,
				})
			end)
			tbInput.Focused:Connect(function()
				tweenProperty({
					tbSearchIcon,
					"ImageColor3",
					currentTheme["Color Theme"],
					0.2,
				})
			end)

			tbApi.OnChanging = false

			function tbApi.Visible(_, ...)
				eventUtils:ToggleVisible(tbRowFrame, ...)
			end
			function tbApi.Destroy(_)
				tbRowFrame:Destroy()
			end

			return tbApi
		end
		function tabApi.AddDiscordInvite(_, discConfig)
			local discTitle = discConfig[1] or discConfig.Name or (discConfig.Title or "Discord")
			local discDesc = discConfig.Desc or (discConfig.Description or "")
			local discLogoId = discConfig[2] or (discConfig.Logo or "")
			local discInviteCode = discConfig[3] or (discConfig.Invite or "")
			local discFrame = createInstance("Frame", tabScrollFrame, {
				Size = UDim2.new(1, 0, 0, 80),
				Name = "Option",
				BackgroundTransparency = 1,
			})

			createInstance("TextLabel", discFrame, {
				Size = UDim2.new(1, 0, 0, 15),
				Position = UDim2.new(0, 5),
				TextColor3 = Color3.fromRGB(40, 150, 255),
				Font = Enum.Font.GothamBold,
				TextXAlignment = "Left",
				BackgroundTransparency = 1,
				TextSize = 10,
				Text = discInviteCode,
			})

			local discCard = trackInstance(
				createInstance("Frame", discFrame, {
					Size = UDim2.new(1, 0, 0, 65),
					AnchorPoint = Vector2.new(0, 1),
					Position = UDim2.new(0, 0, 1),
					BackgroundColor3 = currentTheme["Color Hub 2"],
				}),
				"Frame"
			)

			buildElement("Corner", discCard)

			local discLogo = createInstance("ImageLabel", discCard, {
				Size = UDim2.new(0, 30, 0, 30),
				Position = UDim2.new(0, 7, 0, 7),
				Image = discLogoId,
				BackgroundTransparency = 1,
			})

			buildElement("Corner", discLogo, UDim.new(0, 4))
			buildElement("Stroke", discLogo)
			trackInstance(
				createInstance("TextLabel", discCard, {
					Size = UDim2.new(1, -52, 0, 15),
					Position = UDim2.new(0, 44, 0, 7),
					Font = Enum.Font.GothamBold,
					TextColor3 = currentTheme["Color Text"],
					TextXAlignment = "Left",
					BackgroundTransparency = 1,
					TextSize = 10,
					Text = discTitle,
				}),
				"Text"
			)
			trackInstance(
				createInstance("TextLabel", discCard, {
					Size = UDim2.new(1, -52, 0, 0),
					Position = UDim2.new(0, 44, 0, 22),
					TextWrapped = "Y",
					AutomaticSize = "Y",
					Font = Enum.Font.Gotham,
					TextColor3 = currentTheme["Color Dark Text"],
					TextXAlignment = "Left",
					BackgroundTransparency = 1,
					TextSize = 8,
					Text = discDesc,
				}),
				"DarkText"
			)

			local discJoinBtn = createInstance("TextButton", discCard, {
				Size = UDim2.new(1, -14, 0, 16),
				AnchorPoint = Vector2.new(0.5, 1),
				Position = UDim2.new(0.5, 0, 1, -7),
				Text = "Join",
				Font = Enum.Font.GothamBold,
				TextSize = 12,
				TextColor3 = Color3.fromRGB(220, 220, 220),
				BackgroundColor3 = Color3.fromRGB(50, 150, 50),
			})

			buildElement("Corner", discJoinBtn, UDim.new(0, 5))

			local discCopied = nil

			discJoinBtn.Activated:Connect(function()
				setclipboard(discInviteCode)

				if not discCopied then
					discCopied = true

					applyProperties(discJoinBtn, {
						Text = "Copied to Clipboard",
						BackgroundColor3 = Color3.fromRGB(100, 100, 100),
						TextColor3 = Color3.fromRGB(150, 150, 150),
					})
					task.wait(5)
					applyProperties(discJoinBtn, {
						Text = "Join",
						BackgroundColor3 = Color3.fromRGB(50, 150, 50),
						TextColor3 = Color3.fromRGB(220, 220, 220),
					})

					discCopied = false
				end
			end)

			return {
				Destroy = function(_)
					discFrame:Destroy()
				end,
				Visible = function(_, ...)
					eventUtils:ToggleVisible(discFrame, ...)
				end,
			}
		end

		return tabApi
	end

	closeButton.Activated:Connect(windowApi.CloseBtn)
	minimizeButton.Activated:Connect(windowApi.MinimizeBtn)

	return windowApi
end

return Library
