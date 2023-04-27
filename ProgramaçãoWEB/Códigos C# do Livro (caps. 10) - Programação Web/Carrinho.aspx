<%@ Page Title="" Language="C#" MasterPageFile="~/Principal.Master" AutoEventWireup="true" CodeBehind="Carrinho.aspx.cs" Inherits="LojaDepartamentos.WebForm5" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
<%
    List<LojaDepartamentos.Produto> produtos =
        (List<LojaDepartamentos.Produto>)Session["Carrinho"];
    if (produtos.Count == 0)
        Response.Write("Carrinho vazio!");
    else
    {
        Response.Write(@"<table class=""carrinho""><tr>");
        Response.Write("<th>Imagem</th><th>Descrição</th><th>Quantidade</th>");
        Response.Write("<th>Valor Unitário</th><th>Valor Total</th><th>Remover</th>");
        Response.Write("</tr>");
        float tmp_total = 0f;
        string SqlSelectCommand;
        foreach(LojaDepartamentos.Produto p in produtos)
        {
            Response.Write("<tr>");
            SqlSelectCommand ="SELECT Arquivo ";
            SqlSelectCommand +="FROM ImagemProduto ";
            SqlSelectCommand +="WHERE IdProduto = " + p.IdProduto.ToString() + " ";
            SqlSelectCommand +="AND IdSequencia = 1";
            SqlDataSource ds = new SqlDataSource(
                (string)Application["SqlConnectionString"], SqlSelectCommand);
            GridView gd = new GridView();
            gd.DataSource = ds;
            gd.DataBind();
            string tmp_imagem = gd.Rows[0].Cells[0].Text;
            Response.Write(@"<td><img src=""../images/" + tmp_imagem + @"""></td>");
            SqlSelectCommand ="SELECT Nome, Valor ";
            SqlSelectCommand +="FROM Produto ";
            SqlSelectCommand +="WHERE IdProduto = " + p.IdProduto.ToString() + " ";
            ds = new SqlDataSource(
                (string)Application["SqlConnectionString"], SqlSelectCommand);
            gd = new GridView();
            gd.DataSource = ds;
            gd.DataBind();
            string tmp_nome = gd.Rows[0].Cells[0].Text;
            string tmp_valor_u = float.Parse(gd.Rows[0].Cells[1].Text).ToString("C2");
            string tmp_valor_t = (float.Parse(gd.Rows[0].Cells[1].Text) * p.Qtde).ToString("C2");
            tmp_total += float.Parse(gd.Rows[0].Cells[1].Text) * p.Qtde;
            Response.Write("<td>" + tmp_nome + "</td><td>" + p.Qtde.ToString() + "</td>");
            Response.Write("<td>" + tmp_valor_u + "</td><td>" + tmp_valor_t + "</td><td>");
            Response.Write(
                @"<a href=""Remover.aspx?idproduto=" + p.IdProduto.ToString() + @""">");
            Response.Write(@"<img src=""../images/btnremover.png""></a><td>");
            Response.Write("</tr>");
        }
        Response.Write("<tr><td></td><td></td><td></td>");
        Response.Write("<td>Total:</td><td>" + tmp_total.ToString("C2") + "</td></tr>");
        Response.Write("</tr></table>");
        Response.Write(@"<a href=""Finalizar.aspx"">");
        Response.Write(@"<img src=""../images/btnfinalizar.png""></a></td>");
    }
%>
</asp:Content>
