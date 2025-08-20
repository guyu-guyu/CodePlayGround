#include "application.h"
#include <iostream>
#include <string>

namespace App {
	bool isShowDrag = false;
	std::string text = "";
	float fValue = 0.5f;

	void RenderUI() {
		ImGui::Begin("������ק��ť");
		if (ImGui::Button("��ť"))
		{
			printf("�����ť�������");
		}
		ImGui::Text("�����ַ���");
		char buffer[256] = "";
		ImGui::InputText("�����", buffer, sizeof(buffer));
		std::string textU8 = buffer;
		ImGui::Checkbox("��ʾ��ק", &isShowDrag);
		if (isShowDrag)
		{
			float value = 10.0f;
			ImGui::DragFloat(u8"ֵ", &value);
		}
		ImGui::SliderFloat("float", &fValue, 0.0f, 1.0f);
		ImGui::SameLine();
		ImGui::Text("value %f", fValue);
		ImGui::End();
	}
}