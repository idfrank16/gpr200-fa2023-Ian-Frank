
#version 450
layout(location = 0) in vec3 vPos;
layout(location = 0) in vec2 vUVCoord;
out vec2 uv;
void main(){
	uv = vUVCoord;
	gl_Position = vec4(vPos,1.0);
}
