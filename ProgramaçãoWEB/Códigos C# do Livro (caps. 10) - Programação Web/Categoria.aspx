<%@ Page Title="" Language="C#" MasterPageFile="~/Principal.Master" AutoEventWireup="true" CodeBehind="Categoria.aspx.cs" Inherits="LojaDepartamentos.WebForm2" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
<table class="menucategorias"><tr>
<%
    string SqlSelectCommand = "SELECT IdCategoria, Nome ";
        SqlSelectCommand += "FROM Categoria ";
        SqlSelectCommand += "WHERE IdDepartamento = " 
            + Request.QueryString["iddepartamento"] + " ";
    SqlSelectCommand += "ORDER BY Nome";
    SqlDataSource ds = new SqlDataSource(
        (string)Application["SqlConnectionString"], SqlSelectCommand);
    GridView gd = new GridView();
    gd.DataSource = ds;
    gd.DataBind();
    string tmp_idcategoria, tmp_nome;
    for (int i = 0; i < gd.Rows.Count; i++)
    {
        tmp_idcategoria = gd.Rows[i].Cells[0].Text;
        tmp_nome = gd.Rows[i].Cells[1].Text;
        Response.Write(@"<td><a runat=""server"" href=""Produto.aspx?idcategoria=");
        Response.Write(tmp_idcategoria + @""">" + tmp_nome + "</a></td>");
    }
%>
</tr></table>
</asp:Content>
