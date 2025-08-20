#include "application.h"
#include <iostream>
#include <string>

namespace App {
	bool isShowDrag = false;
	std::string text = "";
	float fValue = 0.5f;

	void RenderUI() {
		ImGui::Begin("设置拖拽按钮");
		if (ImGui::Button("按钮"))
		{
			printf("点击按钮输出文字");
		}
		ImGui::Text("中文字符串");
		char buffer[256] = "";
		ImGui::InputText("输入框", buffer, sizeof(buffer));
		std::string textU8 = buffer;
		ImGui::Checkbox("显示拖拽", &isShowDrag);
		if (isShowDrag)
		{
			float value = 10.0f;
			ImGui::DragFloat(u8"值", &value);
		}
		ImGui::SliderFloat("float", &fValue, 0.0f, 1.0f);
		ImGui::SameLine();
		ImGui::Text("value %f", fValue);
		ImGui::End();
	}
}